#include "transferconfirmdialog.h"
#include "ui_transferconfirmdialog.h"
#include "goopal.h"
#include "debug_log.h"
#include "datamgr.h"
#include "rpcmgr.h"

TransferConfirmDialog::TransferConfirmDialog(QString address, QString amount, QString fee, QString remark, QWidget *parent) :
    QDialog(parent),
    address(address),
    amount(amount),
    fee(fee),
    remark(remark),
    yesOrNo(false),
    ui(new Ui::TransferConfirmDialog)
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;
    ui->setupUi(this);

	setParent(Goopal::getInstance()->mainFrame);
    setAttribute(Qt::WA_TranslucentBackground, true);
    setWindowFlags(Qt::FramelessWindowHint);

    ui->widget->setObjectName("widget");
    ui->widget->setStyleSheet("#widget {background-color:rgba(10, 10, 10,100);}");
    ui->containerWidget->setObjectName("containerwidget");
    ui->containerWidget->setStyleSheet("#containerwidget{background-color: rgb(246, 246, 246);border:1px groove rgb(180,180,180);}");
	if (address.length() >= 60) {
		address = address.mid(0, 60) + "\r\n" + address.mid(60, address.length());
	} else {
		ui->addressLabel->setGeometry(QRect(240, 100, 521, 21));
	}
	ui->addressLabel->setText(address);
	ui->addressLabel->setMaximumWidth(480);
    ui->amountLabel->setText( "<body><B>" + amount + "</B>" + " "+DataMgr::getCurrentAssetType()+"</body>");
    ui->feeLabel->setText( "<body><font color=#409AFF>" + fee + "</font>" + " SSC</body>");
    ui->remarkLabel->setText( remark);
    ui->okBtn->setStyleSheet("QToolButton{background-color:#f49f17;color:#ffffff;border:0px solid rgb(64,153,255);border-radius:3px;}"
                             "QToolButton:hover{background-color:#ffc362;}"
                             "QToolButton:disabled{background-color:#cecece;}");
    ui->okBtn->setText(tr("Ok"));
    ui->cancelBtn->setStyleSheet("QToolButton{background-color:#ffffff;color:#282828;border:1px solid #62a9f8;border-radius:3px;}"
                                 "QToolButton:hover{color:#62a9f8;}");
    ui->cancelBtn->setText(tr("Cancel"));
    ui->pwdLineEdit->setStyleSheet("color:black;border:1px solid #CCCCCC;border-radius:3px;");
    ui->pwdLineEdit->setPlaceholderText( tr("Enter login password"));
    ui->pwdLineEdit->setTextMargins(8,0,0,0);
    ui->pwdLineEdit->setContextMenuPolicy(Qt::NoContextMenu);
    ui->pwdLineEdit->setFocus();
    //if( amount.toDouble() < 1000) {
    //    ui->pwdLabel->hide();
    //    ui->pwdLineEdit->hide();
    //} else {
        ui->okBtn->setEnabled(false);
    //}
		setFontPixelSize();
	
    DLOG_QT_WALLET_FUNCTION_END;
}

TransferConfirmDialog::~TransferConfirmDialog()
{
    delete ui;
//  Goopal::getInstance()->removeCurrentDialogVector(this);
}

void TransferConfirmDialog::setFontPixelSize()
{
	QFont font = ui->label->font();
	font.setPixelSize(16);
	ui->label->setFont(font);

	font = ui->label_2->font();
	font.setPixelSize(13);
	ui->label_2->setFont(font);
	ui->label_3->setFont(font);
	ui->label_4->setFont(font);
	ui->label_5->setFont(font);

	font = ui->addressLabel->font();
	font.setPixelSize(12);
	ui->addressLabel->setFont(font);
	ui->amountLabel->setFont(font);
	ui->feeLabel->setFont(font);
	ui->pwdLabel->setFont(font);
	ui->remarkLabel->setFont(font);
	ui->tipLabel1->setFont(font);
	ui->tipLabel2->setFont(font);

	font = ui->pwdLineEdit->font();
	font.setPixelSize(12);
	ui->pwdLineEdit->setFont(font);

	font = ui->okBtn->font();
	font.setPixelSize(12);
	ui->okBtn->setFont(font);
	ui->cancelBtn->setFont(font);
}

bool TransferConfirmDialog::pop()
{
    ui->pwdLineEdit->grabKeyboard();
    move(0,0);
    exec();

    return yesOrNo;
}

void TransferConfirmDialog::on_okBtn_clicked()
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;

    //if( amount.toDouble() < 1000)
    //{
    //    yesOrNo = true;
    //    close();

    //} else {

        if( ui->pwdLineEdit->text().isEmpty()) return;

        QString str = "wallet_check_passphrase " + ui->pwdLineEdit->text() + "\n";
		Misc::write(str, RpcMgr::getInstance()->currentProcess());
		QString result = Misc::read(RpcMgr::getInstance()->currentProcess());

        if( result.mid(0,4) == "true") {
            yesOrNo = true;
            close();
        } else if( result.mid(0,5) == "false") {
            ui->tipLabel1->setPixmap(QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/wrong.png"));
            ui->tipLabel2->setText("<body><font style=\"font-size:12px\" color=#FF8880>" + tr("Wrong password!") + "</font></body>" );
            return;
        } else if( result.mid(0,5) == "20015") {
            ui->tipLabel1->setPixmap(QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/wrong.png"));
            ui->tipLabel2->setText("<body><font style=\"font-size:12px\" color=#FF8880>" + tr("At least 8 letters!") + "</font></body>" );
            return;
        }
    //}


    DLOG_QT_WALLET_FUNCTION_END;
}

void TransferConfirmDialog::on_cancelBtn_clicked()
{
    yesOrNo = false;
    close();
}

void TransferConfirmDialog::on_pwdLineEdit_textChanged(const QString &arg1)
{
    if( arg1.indexOf(' ') > -1) {
        ui->pwdLineEdit->setText( ui->pwdLineEdit->text().remove(' '));
        return;
    }

    if( arg1.isEmpty()) {
        ui->okBtn->setEnabled(false);
    } else {
        ui->okBtn->setEnabled(true);
    }
}
