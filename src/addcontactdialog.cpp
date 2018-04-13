#include "addcontactdialog.h"
#include "ui_addcontactdialog.h"
#include "datamgr.h"
#include "goopal.h"
#include <QDebug>
#include <QMovie>

AddContactDialog::AddContactDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddContactDialog)
{
    ui->setupUi(this);

//    Goopal::getInstance()->appendCurrentDialogVector(this);
    setParent(Goopal::getInstance()->mainFrame);

    setAttribute(Qt::WA_TranslucentBackground, true);
    setWindowFlags(Qt::FramelessWindowHint);

    ui->widget->setObjectName("widget");
    ui->widget->setStyleSheet("#widget {background-color:rgba(10, 10, 10,100);}");
    ui->containerWidget->setObjectName("containerwidget");
    ui->containerWidget->setStyleSheet("#containerwidget{background-color: rgb(246, 246, 246);border:1px groove rgb(180,180,180);}");

   // connect( Goopal::getInstance(), SIGNAL(jsonDataUpdated(QString)), this, SLOT(jsonDataUpdated(QString)));

    QRegExp regx("[a-zA-Z0-9\-\.\ \n]+$");
    QValidator *validator = new QRegExpValidator(regx, this);
    ui->addressLineEdit->setValidator( validator );

    ui->addressLineEdit->setStyleSheet("color:black;border:1px solid #CCCCCC;border-radius:3px;");
    ui->addressLineEdit->setTextMargins(8,0,0,0);
    ui->addressLineEdit->setPlaceholderText( tr("Please enter an account address or a registered account name."));
    ui->addressLineEdit->setAttribute(Qt::WA_InputMethodEnabled, false);

    ui->remarkLineEdit->setStyleSheet("color:black;border:1px solid #CCCCCC;border-radius:3px;");
    ui->remarkLineEdit->setTextMargins(8,0,0,0);

    ui->okBtn->setStyleSheet("QToolButton{background-color:#f49f17;color:#ffffff;border:0px solid rgb(64,153,255);border-radius:3px;}"
                               "QToolButton:hover{background-color:#ffc362;}"
                               "QToolButton:disabled{background-color:#cecece;}");
    ui->okBtn->setEnabled(false);
    ui->cancelBtn->setStyleSheet("QToolButton{background-color:#ffffff;color:#282828;border:1px solid #62a9f8;border-radius:3px;}"
                                 "QToolButton:hover{color:#62a9f8;}");

    ui->addressLineEdit->setFocus();

    gif = new QMovie(DataMgr::getDataMgr()->getWorkPath() + "pic2/loading2.gif");
    gif->setScaledSize( QSize(18,18));
    ui->gifLabel->setMovie(gif);
    gif->start();
    ui->gifLabel->hide();
	setFontPixelSize();
	
}

AddContactDialog::~AddContactDialog()
{
    delete ui;
//    Goopal::getInstance()->removeCurrentDialogVector(this);
}

void AddContactDialog::setFontPixelSize()
{
	QFont font = ui->contactLabel2->font();
	font.setPixelSize(16);
	ui->contactLabel2->setFont(font);

	font = ui->label->font();
	font.setPixelSize(13);
	ui->label->setFont(font);
	ui->label_2->setFont(font);

	font = ui->addressLineEdit->font();
	font.setPixelSize(13);
	ui->addressLineEdit->setFont(font);
	ui->remarkLineEdit->setFont(font);

	font = ui->label_3->font();
	font.setPixelSize(12);
	ui->label_3->setFont(font);
}
void AddContactDialog::pop()
{
//    QEventLoop loop;
//    show();
//    connect(this,SIGNAL(accepted()),&loop,SLOT(quit()));
//    loop.exec();  //进入事件 循环处理，阻塞

    move(0,0);
    exec();
}

void AddContactDialog::on_cancelBtn_clicked()
{
    close();
//    emit accepted();
}

void AddContactDialog::on_addressLineEdit_textChanged(const QString &arg1)
{
    ui->addressLineEdit->setText( ui->addressLineEdit->text().remove(" "));
    ui->addressLineEdit->setText( ui->addressLineEdit->text().remove("\n"));
    if( ui->addressLineEdit->text().isEmpty())
    {
        ui->tipLabel->setText("");
        ui->tipLabel2->setPixmap(QPixmap(""));
        return;
    }

    if( ui->addressLineEdit->text().mid(0,3) == "GOP")
    {
        ui->tipLabel->setText("");
        ui->tipLabel2->setPixmap(QPixmap(""));
        ui->okBtn->setEnabled(true);
        return;
    }

    QString str;
    if( ui->addressLineEdit->text().toInt() == 0)   // 防止输入数字
    {
        str = ui->addressLineEdit->text();
    }
    else
    {
        str = "WRONG";
    }

//    RpcThread* rpcThread = new RpcThread;
//    connect(rpcThread,SIGNAL(finished()),rpcThread,SLOT(deleteLater()));
////    rpcThread->setLogin("a","b");
//    rpcThread->setWriteData( toJsonFormat( "id_blockchain_get_account", "blockchain_get_account", QStringList() << str ));
//    rpcThread->start();

  //  Goopal::getInstance()->postRPC( toJsonFormat( "id_blockchain_get_account", "blockchain_get_account", QStringList() << str ));
    ui->gifLabel->show();
}

void AddContactDialog::jsonDataUpdated(QString id)
{
    if( id != "id_blockchain_get_account")  return;

	QString result ;// = Goopal::getInstance()->jsonDataValue(id);
    ui->gifLabel->hide();

    if( result == "\"result\":null")
    {
        ui->tipLabel->setText(tr("Invalid address"));
        ui->tipLabel2->setPixmap(QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/wrong.png"));
        ui->okBtn->setEnabled(false);
    }
    else
    {
        ui->tipLabel->setText(tr("<body><font color=green>Valid address</font></body>"));
        ui->tipLabel2->setPixmap(QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/correct.png"));
        ui->okBtn->setEnabled(true);
    }

}

void AddContactDialog::on_okBtn_clicked()
{
    if( ui->addressLineEdit->text().simplified().isEmpty())
    {
        ui->tipLabel->setText(tr("can not be empty"));
        ui->tipLabel2->setPixmap(QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/wrong.png"));
        return;
    }

//    if( !Goopal::getInstance()->contactsFile->open(QIODevice::ReadWrite))
	if (true)
    {
        qDebug() << "contact.dat not exist";
        return;
    }


//    QByteArray ba = QByteArray::fromBase64( Goopal::getInstance()->contactsFile->readAll());
 //   QString str(ba);
    QString str("");

    QStringList strList = str.split(";");
    strList.removeLast();
    foreach (QString ss, strList)
    {
        if( (ss.mid(0, ss.indexOf('=')) == ui->addressLineEdit->text())
//             && ss.mid( ss.indexOf('=') + 1) ==  ui->remarkLineEdit->text()
          )
        {
            ui->tipLabel->setText(tr("Already existes"));
            ui->tipLabel2->setPixmap(QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/wrong.png"));
//            Goopal::getInstance()->contactsFile->close();
            return;
        }
    }

	/*
    ba += ui->addressLineEdit->text().toUtf8() + '=' + ui->remarkLineEdit->text().toUtf8() + QString(";").toUtf8();
    ba = ba.toBase64();
    Goopal::getInstance()->contactsFile->resize(0);
    QTextStream ts(Goopal::getInstance()->contactsFile);
    ts << ba;

    Goopal::getInstance()->contactsFile->close();
	*/
    close();
//    emit accepted();
}

void AddContactDialog::on_remarkLineEdit_textChanged(const QString &arg1)
{
    QString remark = arg1;
    if( remark.contains("=") || remark.contains(";"))
    {
        remark.remove("=");
        remark.remove(";");
        ui->remarkLineEdit->setText( remark);
    }
}
