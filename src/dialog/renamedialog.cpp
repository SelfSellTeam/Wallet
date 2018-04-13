#include "renamedialog.h"
#include "ui_renamedialog.h"
#include "../goopal.h"
#include "../gop_common_define.h"
#include "datamgr.h"

#include <QDebug>
#include <QMovie>

RenameDialog::RenameDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RenameDialog)
{
    ui->setupUi(this);

//    Goopal::getInstance()->appendCurrentDialogVector(this);
	  setParent(Goopal::getInstance()->mainFrame);

 //   connect( Goopal::getInstance(), SIGNAL(jsonDataUpdated(QString)), this, SLOT(jsonDataUpdated(QString)));

    setAttribute(Qt::WA_TranslucentBackground, true);
    setWindowFlags(Qt::FramelessWindowHint);

    ui->widget->setObjectName("widget");
    ui->widget->setStyleSheet("#widget {background-color:rgba(10, 10, 10,100);}");
    ui->containerWidget->setObjectName("containerwidget");
    ui->containerWidget->setStyleSheet("#containerwidget{background-color: rgb(246, 246, 246);border:1px groove rgb(180,180,180);}");

    ui->nameLineEdit->setStyleSheet("color:black;border:1px solid #CCCCCC;border-radius:3px;");
    ui->nameLineEdit->setPlaceholderText( tr("Beginning with letter,letters or numbers"));
    ui->nameLineEdit->setTextMargins(8,0,0,0);
    ui->nameLineEdit->setAttribute(Qt::WA_InputMethodEnabled, false);


    ui->okBtn->setStyleSheet("QToolButton{background-color:#f49f17;color:#ffffff;border:0px solid rgb(64,153,255);border-radius:3px;}"
                             "QToolButton:hover{background-color:#ffc362;}"
                             "QToolButton:disabled{background-color:#cecece;}");
    ui->okBtn->setText(tr("Ok"));
    ui->okBtn->setEnabled(false);

    ui->cancelBtn->setStyleSheet("QToolButton{background-color:#ffffff;color:#282828;border:1px solid #62a9f8;border-radius:3px;}"
                                 "QToolButton:hover{color:#62a9f8;}");
    ui->cancelBtn->setText(tr("Cancel"));

    QRegExp regx("[a-z][a-z0-9]+$");
    QValidator *validator = new QRegExpValidator(regx, this);
    ui->nameLineEdit->setValidator( validator );

    ui->nameLineEdit->setFocus();

    gif = new QMovie(DataMgr::getDataMgr()->getWorkPath() + "pic2/loading2.gif");
    gif->setScaledSize( QSize(18,18));
    ui->gifLabel->setMovie(gif);
    gif->start();
    ui->gifLabel->hide();
	setFontPixelSize();
}

RenameDialog::~RenameDialog()
{
    delete ui;
//    Goopal::getInstance()->removeCurrentDialogVector(this);
}

void RenameDialog::setFontPixelSize()
{
	QFont font = ui->label->font();
	font.setPixelSize(16);
	ui->label->setFont(font);

	font = ui->label_2->font();
	font.setPixelSize(12);
	ui->label_2->setFont(font);
	ui->label_3->setFont(font);

	font = ui->nameLineEdit->font();
	font.setPixelSize(12);
	ui->nameLineEdit->setFont(font);

	font = ui->okBtn->font();
	font.setPixelSize(12);
	ui->okBtn->setFont(font);
	ui->cancelBtn->setFont(font);
}

void RenameDialog::on_okBtn_clicked()
{
    yesOrNO = true;
    close();
//    emit accepted();
}

void RenameDialog::on_cancelBtn_clicked()
{
    yesOrNO = false;
    close();
//    emit accepted();
}

QString RenameDialog::pop()
{
//    QEventLoop loop;
//    show();
//    connect(this,SIGNAL(accepted()),&loop,SLOT(quit()));
//    loop.exec();  //进入事件 循环处理，阻塞

    move(0,0);
    exec();

    if( yesOrNO == true)
    {
        return ui->nameLineEdit->text();
    }
    else
    {
        return "";
    }
}

bool isExistInWallet(QString);

void RenameDialog::on_nameLineEdit_textChanged(const QString &arg1)
{
    if( arg1.isEmpty())
    {
        ui->okBtn->setEnabled(false);
        ui->addressNameTipLabel1->setPixmap(QPixmap(""));
        ui->addressNameTipLabel2->setText("" );
        return;
    }

    QString addrName = arg1;

    if( ADDRNAME_MAX_LENGTH < addrName.size() )
    {

        ui->okBtn->setEnabled(false);
        ui->addressNameTipLabel1->setPixmap(QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/wrong.png"));
        ui->addressNameTipLabel2->setText("<body><font style=\"font-size:12px\" color=#FF8880>" + tr("More than 63 characters!") + "</font></body>" );

        return;
    }


    //检查地址名是否在钱包内已经存在
    if( isExistInWallet(addrName) )
    {
        ui->okBtn->setEnabled(false);
        ui->addressNameTipLabel1->setPixmap(QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/wrong.png"));
        ui->addressNameTipLabel2->setText("<body><font style=\"font-size:12px\" color=#FF8880>" + tr( "This name has been used") + "</font></body>" );
        return;
    }

 //   Goopal::getInstance()->postRPC( toJsonFormat( "id_blockchain_get_account_" + addrName, "blockchain_get_account", QStringList() << addrName ));
    ui->gifLabel->show();
}

void RenameDialog::on_nameLineEdit_returnPressed()
{
    if( !ui->okBtn->isEnabled())  return;

    on_okBtn_clicked();
}

void RenameDialog::jsonDataUpdated(QString id)
{
    if( id.mid(0,26) == "id_blockchain_get_account_")
    {
        // 如果跟当前输入框中的内容不一样，则是过时的rpc返回，不用处理
        if( id.mid(26) != ui->nameLineEdit->text())  return;
		QString result = ""; //Goopal::getInstance()->jsonDataValue(id);
        ui->gifLabel->hide();

        if( result == "\"result\":null")
        {
            ui->okBtn->setEnabled(true);
            ui->addressNameTipLabel1->setPixmap(QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/correct.png"));
            ui->addressNameTipLabel2->setText("<body><font style=\"font-size:12px\" color=#67B667>" + tr( "You can use this name") + "</font></body>" );
        }
        else
        {
            ui->okBtn->setEnabled(false);
            ui->addressNameTipLabel1->setPixmap(QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/wrong.png"));
            ui->addressNameTipLabel2->setText("<body><font style=\"font-size:12px\" color=#FF8880>" + tr( "This name has been used") + "</font></body>" );
        }

        return;
    }

}
