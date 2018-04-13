#include "addnodedialog.h"
#include "ui_addnodedialog.h"
#include "goopal.h"

AddNodeDialog::AddNodeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddNodeDialog)
{
    ui->setupUi(this);

    setWindowFlags(Qt::FramelessWindowHint);
    setStyleSheet("#AddNodeDialog{background-color: rgb(246, 246, 246);border:1px groove rgb(180,180,180);}");

    ui->addBtn->setStyleSheet("QToolButton{background-color:#469cfc;color:#ffffff;border:0px solid rgb(64,153,255);border-radius:3px;}"
                             "QToolButton:hover{background-color:#62a9f8;}"
                              "QToolButton:disabled{background-color:#cecece;}");
    ui->addBtn->setEnabled(false);

    ui->cancelBtn->setStyleSheet("QToolButton{background-color:#ffffff;color:#282828;border:1px solid #62a9f8;border-radius:3px;}"
                                 "QToolButton:hover{color:#62a9f8;}");

    ui->ipLineEdit->setStyleSheet("color:black;border:1px solid #CCCCCC;border-radius:3px;");
    ui->ipLineEdit->setTextMargins(8,0,0,0);
    ui->ipLineEdit->setAttribute(Qt::WA_InputMethodEnabled, false);


    ui->portLineEdit->setStyleSheet("color:black;border:1px solid #CCCCCC;border-radius:3px;");
    ui->portLineEdit->setTextMargins(8,0,0,0);
    ui->portLineEdit->setAttribute(Qt::WA_InputMethodEnabled, false);


    QRegExp regx("[0-9\.]+$");
    QValidator *validator = new QRegExpValidator(regx, this);
    ui->ipLineEdit->setValidator( validator );

    QRegExp regx2("[0-9]+$");
    QValidator *validator2 = new QRegExpValidator(regx2, this);
    ui->portLineEdit->setValidator( validator2 );
}

AddNodeDialog::~AddNodeDialog()
{
    delete ui;
}

void AddNodeDialog::on_cancelBtn_clicked()
{
    close();
}

void AddNodeDialog::on_addBtn_clicked()
{
//    RpcThread* rpcThread = new RpcThread;
//    connect(rpcThread,SIGNAL(finished()),rpcThread,SLOT(deleteLater()));
//    rpcThread->setWriteData( toJsonFormat( "id_addnode", "addnode", QStringList() << ui->ipLineEdit->text() + ":" + ui->portLineEdit->text() << "add" ));
//    rpcThread->start();

 //   Goopal::getInstance()->postRPC( toJsonFormat( "id_addnode", "addnode", QStringList() << ui->ipLineEdit->text() + ":" + ui->portLineEdit->text() << "add" ));

    close();
}

void AddNodeDialog::on_portLineEdit_returnPressed()
{
    on_addBtn_clicked();
}

void AddNodeDialog::on_ipLineEdit_textChanged(const QString &arg1)
{
    if( !arg1.isEmpty() && !ui->portLineEdit->text().isEmpty())
    {
        ui->addBtn->setEnabled(true);
    }
    else
    {
        ui->addBtn->setEnabled(false);
    }

}

void AddNodeDialog::on_portLineEdit_textChanged(const QString &arg1)
{
    if( !arg1.isEmpty() && !ui->ipLineEdit->text().isEmpty())
    {
        ui->addBtn->setEnabled(true);
    }
    else
    {
        ui->addBtn->setEnabled(false);
    }
}
