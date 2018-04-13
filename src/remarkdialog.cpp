#include "remarkdialog.h"
#include "ui_remarkdialog.h"
#include "goopal.h"
#include <QTextStream>
#include <QDebug>
#include "debug_log.h"

RemarkDialog::RemarkDialog(QString address, QWidget *parent) :
    QDialog(parent),
    name(address),
    ui(new Ui::RemarkDialog)
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;
    ui->setupUi(this);

//    Goopal::getInstance()->appendCurrentDialogVector(this);
	setParent(Goopal::getInstance()->mainFrame);

    setAttribute(Qt::WA_TranslucentBackground, true);
    setWindowFlags(Qt::FramelessWindowHint);

    ui->widget->setObjectName("widget");
    ui->widget->setStyleSheet("#widget {background-color:rgba(10, 10, 10,100);}");
    ui->containerWidget->setObjectName("containerwidget");
    ui->containerWidget->setStyleSheet("#containerwidget{background-color: rgb(246, 246, 246);border:1px groove rgb(180,180,180);}");


    ui->okBtn->setStyleSheet("QToolButton{background-color:#f49f17;color:#ffffff;border:0px solid rgb(64,153,255);border-radius:3px;}"
                             "QToolButton:hover{background-color:#ffc362;}");
    ui->okBtn->setText(tr("Ok"));

    ui->cancelBtn->setStyleSheet("QToolButton{background-color:#ffffff;color:#282828;border:1px solid #62a9f8;border-radius:3px;}"
                                 "QToolButton:hover{color:#62a9f8;}");
    ui->cancelBtn->setText(tr("Cancel"));

    ui->remarkLineEdit->setStyleSheet("color:black;border:1px solid #CCCCCC;border-radius:3px;");
    ui->remarkLineEdit->setTextMargins(8,0,0,0);

    ui->remarkLineEdit->setFocus();
	setFontPixelSize();
    DLOG_QT_WALLET_FUNCTION_END;
}

RemarkDialog::~RemarkDialog()
{
    delete ui;
//    Goopal::getInstance()->removeCurrentDialogVector(this);
}

void RemarkDialog::setFontPixelSize()
{
	QFont font = ui->label->font();
	font.setPixelSize(12);
	ui->label->setFont(font);

	font = ui->okBtn->font();
	font.setPixelSize(12);
	ui->okBtn->setFont(font);
	ui->cancelBtn->setFont(font);

	font = ui->remarkLineEdit->font();
	font.setPixelSize(12);
	ui->remarkLineEdit->setFont(font);
}

void RemarkDialog::pop()
{
//    QEventLoop loop;
//    show();
//    ui->remarkLineEdit->grabKeyboard();
//    connect(this,SIGNAL(accepted()),&loop,SLOT(quit()));
//    loop.exec();  //进入事件 循环处理，阻塞

    move(0,0);
    exec();
}

void RemarkDialog::on_okBtn_clicked()
{
	/*
    DLOG_QT_WALLET_FUNCTION_BEGIN;
    if( !Goopal::getInstance()->contactsFile->open(QIODevice::ReadWrite))
    {
        qDebug() << "contact.dat not exist";
        return;
    }

    QByteArray ba = QByteArray::fromBase64( Goopal::getInstance()->contactsFile->readAll());
    ba += (name + '=' + ui->remarkLineEdit->text() + ";").toUtf8();
    ba = ba.toBase64();
   // Goopal::getInstance()->contactsFile->resize(0);
    QTextStream ts(Goopal::getInstance()->contactsFile);
    ts << ba;

   // Goopal::getInstance()->contactsFile->close();

    close();
//    emit accepted();
*/
    DLOG_QT_WALLET_FUNCTION_END;
}

void RemarkDialog::on_cancelBtn_clicked()
{
    close();
//    emit accepted();
}
