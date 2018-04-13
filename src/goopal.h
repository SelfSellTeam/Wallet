#ifndef GOOPAL_H
#define GOOPAL_H
#include <QObject>
#include <QMap>
#include <QSettings>
#include <QFile>
#include <QProcess>
#include <QMutex>
#include <QDialog>
#include <QNetworkReply>
#include <QNetworkAccessManager>

#include "outputmessage.h"

#define MODULE_GOOPAL "ACHAINDEVELOPMENTTOOL"
#define GOOPALURL "http://www.goopal.online"
//  密码输入错误5次后 锁定一段时间 (秒)
#define PWD_LOCK_TIME  7200
#define RPC_PORT 60010
#define BTN_SELECTED_STYLESHEET   "QPushButton{ background:white;font: 14px \"微软雅黑\";border: 0px solid #000000;border-bottom: 3px solid rgb(68,217,199);}"
#define BTN_UNSELECTED_STYLESHEET "QPushButton{ background:white;font: 14px \"微软雅黑\";border: 0px solid #000000;border-bottom: 3px solid rgb(233,233,240);}"
//#define HELP_HTML "https://www.achain.com/help/index.html"

class QTimer;
class QFrame;
class WorkerThreadManager;

static QMutex mutexForBalanceMap;
static QMutex mutexForAddressMap;
static QMutex mutexForRpcReceiveOrNot;
static QMutex mutexForCurrentProcess;

struct FileRecord
{
    enum FileType{ CONTRACT_FILE = 1, SCRIPT_FILE};  // 是合约文件还是脚本文件
    FileType type;
    QString path;   // 绝对路径
    bool newBuilt = false;  // 是否为新建   保存后置为false
};

struct AccountInfo
{
    enum ChainType{ TestChain = 1, FormalChain};
    ChainType type;
    QString name;
    QString address;
    QString balance;
    QString registerTime;
    QString ownerKey;
    bool isDelegate = false;
};

struct ContractInfo
{
    QString address;
    QString name;
    QString level;
    QString owner;
    QString ownerAddress;
    QString ownerName;
    QString state;
    QString description;
    QString balance;
    QStringList abiList;
    QStringList eventList;
};

struct ScriptInfo
{
    QString scriptId;
    QString description;
};

enum ChainType{ TestChain = 1, FormalChain};

template <class key,class value>
key getKeyByValue(QMap<key,value> m,value v);

class Goopal : public QObject
{
    Q_OBJECT

public:
    ~Goopal();
    static Goopal* getInstance();

	QFrame* mainFrame = NULL; // 指向主窗口的指针

private:

    Goopal();
    static Goopal* goo;

    class CGarbo // 它的唯一工作就是在析构函数中删除CSingleton的实例
    {
    public:
        ~CGarbo()
        {
            if (Goopal::goo)
                delete Goopal::goo;
        }
    };
    static CGarbo Garbo; // 定义一个静态成员，在程序结束时，系统会调用它的析构函数
};
#endif // GOOPAL_H

QString toJsonFormat(QString id, QString instruction, QStringList parameters);


