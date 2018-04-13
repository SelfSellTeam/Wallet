#include "exportdialog.h"
#include "ui_exportdialog.h"
#include "goopal.h"
#include "commondialog.h"

#include <QDir>
#include <QFileDialog>
#include <QDebug>
#include <QFile>

#include "datamgr.h"
#include "rpcmgr.h"

ExportDialog::ExportDialog( QString name, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ExportDialog),
    accountName(name)
{
    ui->setupUi(this);

    setParent(Goopal::getInstance()->mainFrame);

    setAttribute(Qt::WA_TranslucentBackground, true);
    setWindowFlags(Qt::FramelessWindowHint);

    ui->widget->setObjectName("widget");
    ui->widget->setStyleSheet("#widget {background-color:rgba(10, 10, 10,100);}");
    ui->containerWidget->setObjectName("containerwidget");
    ui->containerWidget->setStyleSheet("#containerwidget{background-color: rgb(246, 246, 246);border:1px groove rgb(180,180,180);}");
    ui->export_hintLabel->setText(tr("Make sure keep the private key properly"));
    ui->export_nameLabel->setText(tr("Export private key to:"));

#ifdef WIN32
    exportPath = QDir::currentPath().replace("/", "\\");
    ui->pathLineEdit->setText(exportPath + "\\" + accountName + ".gkey");
#else
    exportPath = QDir::homePath() + "/Documents/AchainWallet";
    ui->pathLineEdit->setText(exportPath + "/" + accountName + ".gkey");
#endif // WIN32 //zxlrun

    ui->exportBtn->setStyleSheet("QToolButton{background-color:#469cfc;color:#ffffff;border:0px solid rgb(64,153,255);border-radius:3px;}"
                                 "QToolButton:hover{background-color:#62a9f8;}");
    ui->cancelBtn->setStyleSheet("QToolButton{background-color:#ffffff;color:#282828;border:1px solid #62a9f8;border-radius:3px;}"
                                 "QToolButton:hover{color:#62a9f8;}");

    ui->pathLineEdit->setStyleSheet("color:black;border:1px solid #CCCCCC;border-radius:3px;");
    ui->pathLineEdit->setTextMargins(8,0,0,0);
	connect(DataMgr::getInstance(), &DataMgr::onWalletDumpAccountPrivateKey, this, &ExportDialog::walletDumpAccountPrivateKey);
	setFontPixelSize();
}

ExportDialog::~ExportDialog()
{
    delete ui;
}

void ExportDialog::setFontPixelSize()
{
	QFont font = ui->pathLineEdit->font();
	font.setPixelSize(12);
	ui->pathLineEdit->setFont(font);

	font = ui->pathBtn->font();
	font.setPixelSize(12);
	ui->pathBtn->setFont(font);
	ui->exportBtn->setFont(font);
	ui->cancelBtn->setFont(font);
}

void ExportDialog::pop()
{
    move(0,0);
    exec();

}

void ExportDialog::on_pathBtn_clicked()
{
    QString file = QFileDialog::getExistingDirectory(this,tr( "Select path"));
    if( !file.isEmpty())
    {
#ifdef WIN32
        file.replace("/","\\");
        ui->pathLineEdit->setText( file + "\\" + accountName + ".gkey");
#else
        ui->pathLineEdit->setText( file + "/" + accountName + ".gkey");
#endif // WIN32 //zxlrun
    }
}

void ExportDialog::on_cancelBtn_clicked()
{
    close();
}

void ExportDialog::getPrivateKey()
{
	DataMgr::getInstance()->walletDumpAccountPrivateKey(accountName, 0);
}

void ExportDialog::on_exportBtn_clicked()
{
    if( !ui->pathLineEdit->text().endsWith(".gkey"))
    {
        CommonDialog commonDialog(CommonDialog::OkOnly);
        commonDialog.setText(tr("Wrong file format!"));
        commonDialog.pop();
        return;
    }

    getPrivateKey();
}

void ExportDialog::walletDumpAccountPrivateKey(QString result)
{
	if( result.mid(0,8) == "\"error\":") {
		qDebug() << "wallet_dump_account_private_key " + accountName + " ERROR: " + result;
	} else {
		privateKey = result.mid(10,51);
		QByteArray ba = privateKey.toUtf8();

        QDir exportDir(exportPath);
        if (!exportDir.exists())
            exportDir.mkdir(exportPath);

        QFile file(ui->pathLineEdit->text());

		QString fName = file.fileName();
#ifdef WIN332
		fName.replace("/","\\");
		fName = fName.mid( fName.lastIndexOf("\\") + 1);
#else
        fName = fName.mid( fName.lastIndexOf("/") + 1);
#endif // WIN32 //zxlrun

		if( file.exists())
		{
			CommonDialog tipDialog(CommonDialog::OkAndCancel);
			tipDialog.setText( fName + tr( " already exists!\nCover it or not?") );
			if ( !tipDialog.pop())  return;
		}

		if( !file.open(QIODevice::WriteOnly))
		{
			qDebug() << "privatekey file open " + fName + " ERROR";

			CommonDialog tipDialog(CommonDialog::OkOnly);
			tipDialog.setText( tr( "Wrong path!") );
			tipDialog.pop();
			return;
		}

		file.resize(0);
		QTextStream ts( &file);
		ts << ba.toBase64();
		file.close();
		close();

		CommonDialog tipDialog(CommonDialog::OkOnly);
		tipDialog.setText( tr("Export succeeded!     ") );
		tipDialog.pop();

		//QString path = ui->pathLineEdit->text();
		//path.replace( "/", "\\");
		//path = path.left( path.lastIndexOf("\\") );

		//QProcess::startDetached("explorer \"" + path + "\"");
	}
}
