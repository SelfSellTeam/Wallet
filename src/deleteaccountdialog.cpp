#include "deleteaccountdialog.h"
#include "ui_deleteaccountdialog.h"
#include "goopal.h"
#include "debug_log.h"

#include <QDebug>
#include <QFocusEvent>

DeleteAccountDialog::DeleteAccountDialog(QString name , QWidget *parent) :
    QDialog(parent),
    accountName(name),
    yesOrNo( false),
    ui(new Ui::DeleteAccountDialog)
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


    ui->pwdLineEdit->setStyleSheet("color:black;border:1px solid #CCCCCC;border-radius:3px;");
    ui->pwdLineEdit->setPlaceholderText( tr("Login password"));
    ui->pwdLineEdit->setTextMargins(8,0,0,0);
    ui->pwdLineEdit->setAttribute(Qt::WA_InputMethodEnabled, false);


    ui->okBtn->setStyleSheet("QToolButton{background-color:#469cfc;color:#ffffff;border:0px solid rgb(64,153,255);border-radius:3px;}"
                             "QToolButton:hover{background-color:#62a9f8;}"
                             "QToolButton:disabled{background-color:#cecece;}");
    ui->okBtn->setText(tr("Ok"));

    ui->cancelBtn->setStyleSheet("QToolButton{background-color:#ffffff;color:#282828;border:1px solid #62a9f8;border-radius:3px;}"
                                 "QToolButton:hover{color:#62a9f8;}");
    ui->cancelBtn->setText(tr("Cancel"));

    ui->okBtn->setEnabled(false);

    ui->pwdLineEdit->setFocus();

    DLOG_QT_WALLET_FUNCTION_END;
}

DeleteAccountDialog::~DeleteAccountDialog()
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;
    delete ui;
//    Goopal::getInstance()->removeCurrentDialogVector(this);
    DLOG_QT_WALLET_FUNCTION_END;
}

void DeleteAccountDialog::on_okBtn_clicked()
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;
	/*
    if( ui->pwdLineEdit->text().isEmpty()) return;

    QString str = "wallet_check_passphrase " + ui->pwdLineEdit->text() + "\n";
    Goopal::getInstance()->write( str);
    QString result = Goopal::getInstance()->read();

    if( result.mid(0,4) == "true")
    {
        if( Goopal::getInstance()->delegateAccountList.contains(accountName))
        {
            Goopal::getInstance()->write( "wallet_delegate_set_block_production " + accountName + " false\n");
            qDebug() << "wallet_delegate_set_block_production " << Goopal::getInstance()->read();
        }
        Goopal::getInstance()->write( "wallet_account_delete " + accountName + "\n");
        QString result = Goopal::getInstance()->read();

        if( result.mid(0,4) == "true")
        {
            Goopal::getInstance()->deleteAccountInConfigFile( accountName);
            Goopal::getInstance()->addressMapRemove( accountName);
            Goopal::getInstance()->balanceMapRemove( accountName);
            Goopal::getInstance()->registerMapRemove( accountName);
            Goopal::getInstance()->delegateAccountList.removeAll( accountName);

        }

        yesOrNo = true;
        close();
//        emit accepted();
    }
    else if( result.mid(0,5) == "false")
    {
        ui->tipLabel1->setPixmap(QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/wrong.png"));
        ui->tipLabel2->setText("<body><font style=\"font-size:12px\" color=#FF8880>" + tr("Wrong Password!") + "</font></body>" );
    }
    else if( result.mid(0,5) == "20015")
    {
        ui->tipLabel1->setPixmap(QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/wrong.png"));
        ui->tipLabel2->setText("<body><font style=\"font-size:12px\" color=#FF8880>" + tr("At least 8 letters!") + "</font></body>" );
    }
	*/
    DLOG_QT_WALLET_FUNCTION_END;
}

void DeleteAccountDialog::on_cancelBtn_clicked()
{
    yesOrNo = false;
    close();
//    emit accepted();
}

void DeleteAccountDialog::on_pwdLineEdit_textChanged(const QString &arg1)
{
    if( arg1.indexOf(' ') > -1)
    {
        ui->pwdLineEdit->setText( ui->pwdLineEdit->text().remove(' '));
        return;
    }

    if( arg1.isEmpty())
    {
        ui->okBtn->setEnabled(false);
    }
    else
    {
        ui->okBtn->setEnabled(true);
    }

    ui->tipLabel1->setPixmap(QPixmap(""));
    ui->tipLabel2->setText("");
}

bool DeleteAccountDialog::pop()
{
    ui->pwdLineEdit->grabKeyboard();

//    QEventLoop loop;
//    show();
//    connect(this,SIGNAL(accepted()),&loop,SLOT(quit()));
//    loop.exec();  //进入事件 循环处理，阻塞

    move(0,0);
    exec();

    return yesOrNo;
}

void DeleteAccountDialog::on_pwdLineEdit_returnPressed()
{
    on_okBtn_clicked();
}
