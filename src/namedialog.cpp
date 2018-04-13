#include "namedialog.h"
#include "ui_namedialog.h"
#include "debug_log.h"
#include "goopal.h"
#include "gop_common_define.h"
#include "datamgr.h"
#include "commondialog.h"
#include <QMovie>

NameDialog::NameDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NameDialog)
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;
    ui->setupUi(this);

//  Goopal::getInstance()->appendCurrentDialogVector(this);
	
	setParent(Goopal::getInstance()->mainFrame);

    setAttribute(Qt::WA_TranslucentBackground, true);
    setWindowFlags(Qt::FramelessWindowHint);

    ui->widget->setObjectName("widget");
    ui->widget->setStyleSheet("#widget {background-color:rgba(10, 10, 10,100);}");
    ui->containerWidget->setObjectName("containerwidget");
    ui->containerWidget->setStyleSheet("#containerwidget{background-color: rgb(246, 246, 246);border:1px groove rgb(180,180,180);}");

    yesOrNO = true;

    ui->nameLineEdit->setStyleSheet("color:black;border:1px solid #CCCCCC;border-radius:3px;");
    ui->nameLineEdit->setPlaceholderText( tr("Begins with a letter"));
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

	ui->checkBtn->setStyleSheet("QToolButton{background-color:#ffffff;color:#282828;border:1px solid #62a9f8;border-radius:3px;}"
								"QToolButton:hover{color:#62a9f8;}");
	ui->checkBtn->setText(tr("Check"));

    QRegExp regx("[a-z][a-z0-9]+$");
    QValidator *validator = new QRegExpValidator(regx, this);
    ui->nameLineEdit->setValidator( validator );

    ui->nameLineEdit->setFocus();

    gif = new QMovie(DataMgr::getDataMgr()->getWorkPath() + "pic2/loading2.gif");
    gif->setScaledSize( QSize(18,18));
    ui->gifLabel->setMovie(gif);
    gif->start();
    ui->gifLabel->hide();

	send_time = 0;
	connect(DataMgr::getInstance(), &DataMgr::onBlockChainGetAccount, this, &NameDialog::getBlockchainAccount);
	setFontPixelSize();
    DLOG_QT_WALLET_FUNCTION_END;
}

NameDialog::~NameDialog()
{
    delete ui;
}


void NameDialog::setFontPixelSize()
{
	QFont font = ui->label_2->font();
	font.setPixelSize(12);
	ui->label_2->setFont(font);

	font = ui->addressNameTipLabel1->font();
	font.setPixelSize(12);
	ui->addressNameTipLabel1->setFont(font);
	ui->addressNameTipLabel2->setFont(font);
	ui->gifLabel->setFont(font);

	font = ui->checkBtn->font();
	font.setPixelSize(12);
	ui->checkBtn->setFont(font);
	ui->okBtn->setFont(font);
	ui->cancelBtn->setFont(font);

	font = ui->label->font();
	font.setPixelSize(20);
	ui->label->setFont(font);

	font = ui->nameLineEdit->font();
	font.setPixelSize(12);
	ui->nameLineEdit->setFont(font);
}
void NameDialog::on_okBtn_clicked()
{
	//最多添加ACHAIN_ACCOUNT_MAX个用户
	if (DataMgr::getInstance()->getAccountInfo()->size() < ACHAIN_ACCOUNT_MAX)
	{
		yesOrNO = true;
	}
	else
	{
		yesOrNO = false;
		CommonDialog tipDialog(CommonDialog::OkOnly);
		tipDialog.setText(tr("Max Account num is 50!"));
		tipDialog.pop();
	}
	close();
}

void NameDialog::on_cancelBtn_clicked()
{
    yesOrNO = false;
    close();
}

QString NameDialog::pop()
{
    ui->nameLineEdit->grabKeyboard();

    move(0,0);
    exec();

    if( yesOrNO == true) {
        return ui->nameLineEdit->text();
    } else {
        return "";
    }
}

bool isExistInWallet(QString);

void NameDialog::on_checkBtn_clicked()
{
	QString addrName = ui->nameLineEdit->text();

	if (addrName.isEmpty()) {
		ui->okBtn->setEnabled(false);
		ui->addressNameTipLabel1->setPixmap(QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/wrong.png"));
		ui->addressNameTipLabel2->setText("<body><font style=\"font-size:12px\" color=#FF8880>" + tr("Name can not be empty!") + "</font></body>");
		return;
	}

	if (ADDRNAME_MAX_LENGTH < addrName.size()) {

		ui->okBtn->setEnabled(false);
        ui->addressNameTipLabel1->setPixmap(QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/wrong.png"));
		ui->addressNameTipLabel2->setText("<body><font style=\"font-size:12px\" color=#FF8880>" + tr("More than 63 characters!") + "</font></body>");

		return;
	}

	//检查地址名是否在钱包内已经存在
	if (isExistInWallet(addrName)) {
		ui->okBtn->setEnabled(false);
        ui->addressNameTipLabel1->setPixmap(QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/wrong.png"));
		ui->addressNameTipLabel2->setText("<body><font style=\"font-size:12px\" color=#FF8880>" + tr("This name has been used") + "</font></body>");
		return;
	}

	DataMgr::getInstance()->blockChainGetAccount(addrName);
	send_time++;
	ui->gifLabel->show();
}

void NameDialog::on_nameLineEdit_textChanged(const QString &arg1)
{
   /* if( arg1.isEmpty()) {
        ui->okBtn->setEnabled(false);
        ui->addressNameTipLabel1->setPixmap(QPixmap(""));
        ui->addressNameTipLabel2->setText("" );
        return;
    }

    QString addrName = arg1;

    if( ADDRNAME_MAX_LENGTH < addrName.size() ) {

        ui->okBtn->setEnabled(false);
        ui->addressNameTipLabel1->setPixmap(QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/wrong.png"));
        ui->addressNameTipLabel2->setText("<body><font style=\"font-size:12px\" color=#FF8880>" + tr("More than 63 characters!") + "</font></body>" );

        return;
    }

    //检查地址名是否在钱包内已经存在
    if( isExistInWallet(addrName) ) {
        ui->okBtn->setEnabled(false);
        ui->addressNameTipLabel1->setPixmap(QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/wrong.png"));
        ui->addressNameTipLabel2->setText("<body><font style=\"font-size:12px\" color=#FF8880>" + tr( "This name has been used") + "</font></body>" );
        return;
    }

	DataMgr::getInstance()->blockChainGetAccount(addrName);
	send_time++;
    ui->gifLabel->show();*/
}

void NameDialog::on_nameLineEdit_returnPressed()
{
    if( !ui->okBtn->isEnabled())  
		return;

    on_okBtn_clicked();
}

void NameDialog::getBlockchainAccount(QString result)
{
    //如果跟当前输入框中的内容不一样，则是过时的rpc返回，不用处理
	//需要所有下发的全部返回后才能认为结束
	send_time--;
	ui->gifLabel->hide();
	if( result == "\"result\":null" && send_time == 0) {
		ui->okBtn->setEnabled(true);
        ui->addressNameTipLabel1->setPixmap(QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/correct.png"));
		ui->addressNameTipLabel2->setText("<body><font style=\"font-size:12px\" color=#67B667>" + tr( "You can use this name") + "</font></body>" );
	} else {
		ui->okBtn->setEnabled(false);
        ui->addressNameTipLabel1->setPixmap(QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/wrong.png"));
		ui->addressNameTipLabel2->setText("<body><font style=\"font-size:12px\" color=#FF8880>" + tr( "This name has been used") + "</font></body>" );
	}
}
