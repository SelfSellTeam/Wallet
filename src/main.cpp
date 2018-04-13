#include <QApplication>
#ifdef WIN32 
#include "Windows.h"
#endif //zxlwin
#include <QDebug>
#include <qapplication.h>
#include <QTranslator>
#include <QThread>
#include <QTextCodec>
#include <QDir>
#ifdef WIN32 
#include "DbgHelp.h"
#endif //zxlwin
#ifdef WIN32 
#include "tchar.h"
#endif //zxlwin
#ifdef WIN32 
#include "ShlObj.h"
#endif //zxlwin
#include "datamgr.h"
#include "rpcmgr.h"

#include "goopal.h"
#include "frame.h"
#include "outputmessage.h"

#include <QNetworkInterface>

#include <QMessageBox>
#include <QDesktopWidget>
#define VERSION_CONFIG "version.ini"
#define UPDATE_INSTALL_TOOL "SSCUpTool.exe"
#define UPDATE_TOOL_NAME "SSCUpdate.exe"


#ifndef WIN32
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
bool checkOnly()
{
	const char filename[] = "/tmp/SSCWallet";
	int fd = open(filename, O_WRONLY | O_CREAT, 0644);
	int flock = lockf(fd, F_TLOCK, 0);
	if (fd == -1) {
		perror("open lockfile/n");
		return false;
	}//QMutex
	//给文件加锁
	if (flock == -1) {
		perror("lock file error/n");
		return false;
	}
	//程序退出后，文件自动解锁
	return true;
}
#else
bool checkOnly()  //zxlwin
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;

    //  创建互斥量  
    HANDLE m_hMutex  =  CreateMutex(NULL, FALSE,  L"SSCWallet 3.0.4" );
    //  检查错误代码 
    if  (GetLastError()  ==  ERROR_ALREADY_EXISTS)  {
      //  如果已有互斥量存在则释放句柄并复位互斥量
     CloseHandle(m_hMutex);
     m_hMutex  =  NULL;
      //  程序退出
      return  false;
    }
    else
        return true;
}

LONG WINAPI TopLevelExceptionFilter(struct _EXCEPTION_POINTERS *pExceptionInfo)  //zxlwin
{
	qDebug() << "Enter TopLevelExceptionFilter Function";
	HANDLE hFile = CreateFile(L"project.dmp", GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	MINIDUMP_EXCEPTION_INFORMATION stExceptionParam;
	stExceptionParam.ThreadId = GetCurrentThreadId();
	stExceptionParam.ExceptionPointers = pExceptionInfo;
	stExceptionParam.ClientPointers = FALSE;
	MiniDumpWriteDump(GetCurrentProcess(), GetCurrentProcessId(), hFile, MiniDumpWithFullMemory, &stExceptionParam, NULL, NULL);
	CloseHandle(hFile);

	qDebug() << "End TopLevelExceptionFilter Function";
	return EXCEPTION_EXECUTE_HANDLER;
}

//LPWSTR ConvertCharToLPWSTR(const char * szString)  //zxlwin
//{
//    int dwLen = strlen(szString) + 1;
//    int nwLen = MultiByteToWideChar(CP_ACP, 0, szString, dwLen, NULL, 0);//算出合适的长度
//    LPWSTR lpszPath = new WCHAR[dwLen];
//    MultiByteToWideChar(CP_ACP, 0, szString, dwLen, lpszPath, nwLen);
//    return lpszPath;
//}

void refreshIcon()  //zxlwin
{
	// 解决windows下自动更新后图标不改变的bug
	SHChangeNotify(0x8000000, 0x1000, 0, 0);
	SendMessageTimeout(HWND_BROADCAST, WM_SETTINGCHANGE, 0, NULL, SMTO_ABORTIFHUNG, 100, 0);
}
#endif // WIN32

inline QString getMAC()
{
	QList<QNetworkInterface> list = QNetworkInterface::allInterfaces();
	QString MAC = "";
	if (list.size() != 0) {
		MAC = list[0].hardwareAddress();
	}
	return MAC;
}

inline QString getUrlData(QString url)
{
	QString allData = "mac=" + getMAC() + "&version=" + SSC_WALLET_VERSION;
#ifdef _DEBUG
	std::string urlEncode = allData.toUtf8().toPercentEncoding().toStdString();
#endif // _DEBUG
	return url + "?" + allData.toUtf8().toPercentEncoding().toBase64();
}
inline bool uploadData(QString url)
{
	QNetworkAccessManager manager;
	QNetworkReply *reply = manager.get(QNetworkRequest(QUrl(url)));
	QByteArray responseData;
	QEventLoop eventLoop;
	QObject::connect(&manager, SIGNAL(finished(QNetworkReply *)), &eventLoop, SLOT(quit()));
	eventLoop.exec();
	responseData = reply->readAll();
	qDebug() << "reply->error()" << reply->error();
	if (QNetworkReply::NoError != reply->error())
	{
		return false;
	}
	return true;
}

inline QByteArray getPostData()
{
	QJsonObject jsonObj;
	jsonObj.insert("MAC", getMAC());
	jsonObj.insert("version", SSC_WALLET_VERSION);
	QJsonDocument doc(jsonObj);
	QByteArray postData = doc.toJson();
	return postData;
}
inline bool uploadPostData(QString url, QByteArray data)
{
	QNetworkAccessManager manager;

	QNetworkRequest network_request;
	network_request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");
	network_request.setUrl(url);

	if (url.startsWith("https")) {
		QSslConfiguration config;
		config.setPeerVerifyMode(QSslSocket::VerifyNone);
		config.setProtocol(QSsl::TlsV1_0);
		network_request.setSslConfiguration(config);
	}
	QByteArray post_data;
	post_data.append("data=" + data);

	QNetworkReply *reply = manager.post(network_request, post_data);

	QByteArray responseData;
	QEventLoop eventLoop;
	QObject::connect(&manager, SIGNAL(finished(QNetworkReply *)), &eventLoop, SLOT(quit()));
	eventLoop.exec();
	responseData = reply->readAll();
	//qDebug() << "reply->error()" << reply->error();
	if (QNetworkReply::NoError != reply->error())
	{
		return false;
	}
	return true;
}

void runToolAsAdmin()
{
#ifdef WIN32
	QString app_path = QCoreApplication::applicationDirPath();
	QString path = app_path + "/" + UPDATE_TOOL_NAME;
	std::string install_tool(path.toStdString());
	SHELLEXECUTEINFOA shExecInfo;
	shExecInfo.cbSize = sizeof(SHELLEXECUTEINFOA);
	shExecInfo.fMask = NULL;
	shExecInfo.hwnd = NULL;
	shExecInfo.lpVerb = "runas";
	shExecInfo.lpFile = install_tool.c_str();

	QString params = "install";
	if (DataMgr::getInstance()->getLanguage() == "English") {
		params = "install en";
	}
	//writeLog("params " + params);
	shExecInfo.lpParameters = params.toStdString().c_str();

	shExecInfo.lpDirectory = NULL;
	shExecInfo.nShow = SW_MAXIMIZE;
	shExecInfo.hInstApp = NULL;
	ShellExecuteExA(&shExecInfo);
	/*
	cross-platform
	#elif defined(Q_WS_X11)
	QDesktopServices::openUrl(QUrl::fromLocalFile(strPathExe));
	*/
#endif
}

void writeLogMain(QString log)
{
	QFile file("./SSC.log");
	//方式：Append为追加，WriteOnly，ReadOnly
	if (!file.open(QIODevice::Append | QIODevice::Text)) {
		return;
	}
	QTextStream out(&file);
	out << log << endl;
	out.flush();
	file.close();
}

int main(int argc, char *argv[])
{
	qputenv("QT_AUTO_SCREEN_SCALE_FACTOR", "1");

#if (QT_VERSION >= QT_VERSION_CHECK(5, 6, 0))
	QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
	QApplication a(argc, argv);
	a.setWindowIcon(QIcon("pic2/SSC.ico"));
#ifdef WIN32
	refreshIcon();  //zxlwin
	SetUnhandledExceptionFilter(TopLevelExceptionFilter);  //zxlwin
#endif

	if (checkOnly() == false)  return 0;    // 防止程序多次启动  //zxlwin

	DataMgr::getDataMgr();

	QSettings config(QCoreApplication::applicationDirPath() + "/" + VERSION_CONFIG, QSettings::IniFormat);
	if (config.value("download").toBool()) {
		QString app_path = QCoreApplication::applicationDirPath();
		QProcess::startDetached(app_path + "/" + UPDATE_TOOL_NAME, QStringList() << "install" << DataMgr::getInstance()->getConfigPath());
		//writeLogMain(result ? "successed" : "failed");
		RpcMgr::deleteInstance();
		a.quit();
		return 0;
	}

	RpcMgr::getInstance();

	Frame frame;
	Goopal::getInstance()->mainFrame = &frame;   // 一个全局的指向主窗口的指针


	//双屏
	//typedef struct{
	//	int screen_no;
	//	QRect rect;
	//}SCREEN;
	//SCREEN g_screens;
	//QDesktopWidget *desktop = QApplication::desktop();
	//int screen_count = desktop->screenCount();
	//int prim_screen = desktop->primaryScreen();

	//if (screen_count > 1)
	//{
	//	g_screens.rect = desktop->screenGeometry(prim_screen + (screen_count - 1));
	//	desktop->resize(g_screens.rect.width(), g_screens.rect.height());
	//	desktop->move(desktop->screenGeometry(prim_screen + (screen_count - 2)).width(), 0);
	//}

	frame.show();
	a.installEventFilter(&frame);


	//QString urlData = getUrlData("http://127.0.0.1/upload/");
	//uploadData(urlData);
	//QByteArray postData = getPostData();
	//uploadPostData("https://api.achain.com/wallets/report/", postData);//统计钱包用户的mac地址和版本
	//uploadPostData("https://www.baidu.com/", postData);

	a.setStyle("Windows");

	

	int result = a.exec();
	//Goopal::getInstance()->quit();

	RpcMgr::deleteInstance();
	DataMgr::deleteDataMgr();
	DLOG_QT_WALLET_FUNCTION_END;
	return result;
}
