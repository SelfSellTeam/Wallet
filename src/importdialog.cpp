#include "importdialog.h"
#include "ui_importdialog.h"
#include "goopal.h"
#include "commondialog.h"
#include "namedialog.h"
#include "control/shadowwidget.h"
#include "datamgr.h"

#include <QDir>
#include <QFileDialog>
#include <QDebug>
#include <QFile>

ImportDialog::ImportDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ImportDialog)
{
    ui->setupUi(this);

//    Goopal::getInstance()->appendCurrentDialogVector(this);

    setParent(Goopal::getInstance()->mainFrame);

    setAttribute(Qt::WA_TranslucentBackground, true);
    setWindowFlags(Qt::FramelessWindowHint);

    ui->widget->setObjectName("widget");
    ui->widget->setStyleSheet("#widget {background-color:rgba(10, 10, 10,100);}");

    ui->containerWidget->setObjectName("containerWidget");
    ui->containerWidget->setStyleSheet("#containerWidget{background-color: rgb(246, 246, 246);border:1px groove rgb(180,180,180);}");
	
	//connect( Goopal::getInstance(), SIGNAL(jsonDataUpdated(QString)), this, SLOT(jsonDataUpdated(QString)));

    ui->importBtn->setEnabled(false);

    ui->importBtn->setStyleSheet("QToolButton{background-color:#469cfc;color:#ffffff;border:0px solid rgb(64,153,255);border-radius:3px;}"
                                 "QToolButton:hover{background-color:#62a9f8;}"
                                 "QToolButton:disabled{background-color:#cecece;}");
    ui->cancelBtn->setStyleSheet("QToolButton{background-color:#ffffff;color:#282828;border:1px solid #62a9f8;border-radius:3px;}"
                                 "QToolButton:hover{color:#62a9f8;}");

    ui->privateKeyLineEdit->setStyleSheet("color:black;border:1px solid #CCCCCC;border-radius:3px;");
    ui->privateKeyLineEdit->setTextMargins(8,0,0,0);
    ui->privateKeyLineEdit->setFocus();

    shadowWidget = new ShadowWidget(this);
    shadowWidget->init(this->size());
    shadowWidget->hide();

	connect(DataMgr::getInstance(), &DataMgr::onWalletImportRegisterPrivateKey, this, &ImportDialog::walletImportRegisterPrivateKey);
	connect(DataMgr::getInstance(), &DataMgr::onWalletImportPrivateKey, this, &ImportDialog::walletImportPrivateKey);
	setFontPixelSize();
}

ImportDialog::~ImportDialog()
{
    delete ui;
//    Goopal::getInstance()->removeCurrentDialogVector(this);
}

void ImportDialog::setFontPixelSize()
{
	QFont font = ui->label->font();
	font.setPixelSize(12);
	ui->label->setFont(font);

	font = ui->privateKeyLineEdit->font();
	font.setPixelSize(13);
	ui->privateKeyLineEdit->setFont(font);

	font = ui->pathBtn->font();
	font.setPixelSize(12);
	ui->pathBtn->setFont(font);
	ui->importBtn->setFont(font);
	ui->cancelBtn->setFont(font);


}


void ImportDialog::pop()
{
//    QEventLoop loop;
//    show();
//    ui->privateKeyLineEdit->grabKeyboard();
//    connect(this,SIGNAL(accepted()),&loop,SLOT(quit()));
//    loop.exec();  //进入事件 循环处理，阻塞

    move(0,0);
    exec();
}

void ImportDialog::on_cancelBtn_clicked()
{
    close();
    qDebug() << "on_cancelBtn_clicked";
//    emit accepted();
}

void ImportDialog::on_pathBtn_clicked()
{
    QString file = QFileDialog::getOpenFileName(this, tr("Choose your private key file."),"","(*.gkey)");
#ifdef WIN32
    file.replace("/","\\");
#endif // WIN32 //zxlrun
    ui->privateKeyLineEdit->setText(file);
}

void ImportDialog::on_importBtn_clicked()
{
    // 如果输入框中是 私钥文件的地址
    if( ui->privateKeyLineEdit->text().contains(".gkey") ) {
        QFile file( ui->privateKeyLineEdit->text());
        if( file.open(QIODevice::ReadOnly)) {

            QByteArray ba = QByteArray::fromBase64( file.readAll());
            QString str(ba);

            QString temp("");
            //zxltabDataMgr::getInstance()->importRegisterPrivateKey(str, QString(""), false, false);
            DataMgr::getInstance()->importRegisterPrivateKey(str, temp, false, false);

            ui->importBtn->setEnabled(false);
            shadowWidget->show();

            file.close();
            return;
        } else {
            CommonDialog commonDialog(CommonDialog::OkOnly);
            commonDialog.setText( tr("Wrong file path."));
            commonDialog.pop();
            return;
        }
    } else {

		// 如果输入框中是 私钥
        QString text(ui->privateKeyLineEdit->text());
        QString str("");
        //zxltabDataMgr::getInstance()->importRegisterPrivateKey(ui->privateKeyLineEdit->text(), QString(""), false, false);
        DataMgr::getInstance()->importRegisterPrivateKey(text, str, false, false);
		ui->importBtn->setEnabled(false);
		shadowWidget->show();
    }

}

void ImportDialog::walletImportRegisterPrivateKey(QString result)
{
	shadowWidget->hide();
	if (result.mid(0, 9) == "\"result\":") {
		ui->importBtn->setEnabled(true);


		QString name = result.mid(10, result.indexOf("\"", 10) - 10);
		if (accountNameAlreadyExisted(name)) {
			//  如果已存在该账号
			CommonDialog commonDialog(CommonDialog::OkOnly);
			commonDialog.setText(name + tr(" already existes"));
			commonDialog.pop();

		} else {
			mutexForAddressMap.lock();
			int size = DataMgr::getInstance()->getAccountInfo()->size();
			mutexForAddressMap.unlock();
			DataMgr::getInstance()->getSettings()->setValue(QString("/accountInfo/") + QString::fromLocal8Bit("账户") + toThousandFigure(size + 1), name);
			emit accountImported();

			CommonDialog commonDialog(CommonDialog::OkOnly);
			commonDialog.setText(tr(" Import success!    "));
			commonDialog.pop();

			DataMgr::getInstance()->walletRescanBlockchain();
			close();
		}

	} else if (result.mid(0, 8) == "\"error\":") {
		qDebug() << "import error: " << result;

		if (!result.contains("Unknown key! You must specify an account name!")) {
			// 如果不是未注册账户 是错误的私钥格式
			CommonDialog commonDialog(CommonDialog::OkOnly);
			commonDialog.setText(tr("Illegal private key!"));
			commonDialog.pop();

			ui->importBtn->setEnabled(true);
			return;
		}

		NameDialog nameDialog;
		QString name = nameDialog.pop();

		if (name.isEmpty())    // 如果取消 命名
		{
			ui->importBtn->setEnabled(true);
			return;
		}

		if (ui->privateKeyLineEdit->text().contains(".gkey"))  // 如果是路径
		{
			QFile file(ui->privateKeyLineEdit->text());
			if (file.open(QIODevice::ReadOnly)) {
				QByteArray ba = QByteArray::fromBase64(file.readAll());
				QString str(ba);

				DataMgr::getInstance()->walletImportPrivateKey(str, name, true, false);
				shadowWidget->show();

				file.close();
				return;
			} else {
				CommonDialog commonDialog(CommonDialog::OkOnly);
				commonDialog.setText(tr("Wrong file path."));
				commonDialog.pop();

				ui->importBtn->setEnabled(true);
				return;
			}
		} else {
			// 如果输入框中是 私钥
            QString text(ui->privateKeyLineEdit->text());
            //zxltabDataMgr::getInstance()->walletImportPrivateKey(ui->privateKeyLineEdit->text(), name, true, false);
            DataMgr::getInstance()->walletImportPrivateKey(text, name, true, false);
			shadowWidget->show();
			return;
		}
	}
}

void ImportDialog::walletImportPrivateKey(QString result)
{
	ui->importBtn->setEnabled(true);
	shadowWidget->hide();
	if( result.mid(0,9) == "\"result\":") {

		QString name = result.mid(10, result.indexOf("\"", 10) - 10);
		mutexForAddressMap.lock();

		int size = DataMgr::getInstance()->getAccountInfo()->size();
		mutexForAddressMap.unlock();

		DataMgr::getInstance()->getSettings() ->setValue( QString("/accountInfo/") + QString::fromLocal8Bit("账户") + toThousandFigure(size+1),name);
		emit accountImported();

		CommonDialog commonDialog(CommonDialog::OkOnly);
		commonDialog.setText(tr(" Import success!    ") );
		commonDialog.pop();

		DataMgr::getInstance()->walletRescanBlockchain();
		close();

	} else if( result.mid(0,8) == "\"error\":") {
		CommonDialog commonDialog(CommonDialog::OkOnly);
		commonDialog.setText( tr("Illegal private key!"));
		commonDialog.pop();
	}
}

QString toThousandFigure( int);

 bool ImportDialog::accountNameAlreadyExisted(QString name)
{
	return !DataMgr::getInstance()->getAccountAddr(name).isEmpty();
}

void ImportDialog::on_privateKeyLineEdit_textChanged(const QString &arg1)
{
    QString str = arg1.simplified();
    if( str.isEmpty()) {
        ui->importBtn->setEnabled(false);
    } else {
        ui->importBtn->setEnabled(true);
    }
}

void ImportDialog::on_privateKeyLineEdit_returnPressed()
{
    if( ui->importBtn->isEnabled()) {
        on_importBtn_clicked();
    }
}


