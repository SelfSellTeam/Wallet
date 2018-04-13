#include "commondialog.h"
#include "ui_commondialog.h"
#include <QDebug>
#include "debug_log.h"
#include "goopal.h"

CommonDialog::CommonDialog(commonDialogType type, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CommonDialog)
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;
    ui->setupUi(this);


    setParent(Goopal::getInstance()->mainFrame);
    move(Goopal::getInstance()->mainFrame->pos());

   // Goopal::getInstance()->appendCurrentDialogVector(this);

    setAttribute(Qt::WA_TranslucentBackground, true);
    setWindowFlags(Qt::FramelessWindowHint | Qt::Tool);

    ui->widget->setObjectName("widget");
    ui->widget->setStyleSheet("#widget{background-color:rgba(10, 10, 10,100);}");

	ui->checkBox->hide();

    ui->containerWidget->setObjectName("containerwidget");
    setStyleSheet("#containerwidget{background-color: rgb(246, 246, 246);border:1px groove rgb(180,180,180);}");

    yesOrNO = false;

    ui->okBtn->setStyleSheet("QToolButton{background-color:#f49f17;color:#ffffff;border:0px solid rgb(64,153,255);border-radius:3px;}"
                             "QToolButton:hover{background-color:#ffc362;}");
    ui->okBtn->setText(tr("Ok"));

    ui->cancelBtn->setStyleSheet("QToolButton{background-color:#ffffff;color:#282828;border:1px solid #62a9f8;border-radius:3px;}"
                                 "QToolButton:hover{color:#62a9f8;}");
    ui->cancelBtn->setText(tr("Cancel"));

    if( type == OkAndCancel)
    {
    }
    else if( type == OkOnly)
    {
        ui->cancelBtn->hide();
        ui->okBtn->move(101,96);
    }
    else if( type == YesOrNo)
    {
        ui->okBtn->setText(tr("Yes"));
        ui->cancelBtn->setText(tr("No"));
    }
	setFontPixelSize();

    DLOG_QT_WALLET_FUNCTION_END;
}

CommonDialog::~CommonDialog()
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;
    qDebug() << "CommonDialog  delete ";
    delete ui;
   // Goopal::getInstance()->removeCurrentDialogVector(this);
    DLOG_QT_WALLET_FUNCTION_END;
}
void CommonDialog::setFontPixelSize()
{
	QFont font = ui->textLabel->font();
	font.setPixelSize(12);
	ui->textLabel->setFont(font);

	font = ui->checkBox->font();
	font.setPixelSize(12);
	ui->checkBox->setFont(font);

}
void CommonDialog::on_okBtn_clicked()
{
    yesOrNO = true;
    close();
}

void CommonDialog::on_cancelBtn_clicked()
{
    yesOrNO = false;
    close();
}

bool CommonDialog::pop()
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;
    exec();
	if (!ui->checkBox->isHidden()) {
		return ui->checkBox->isChecked();
	}
    return yesOrNO;
}

void CommonDialog::setText(QString text)
{
    ui->textLabel->setText(text);
}

void CommonDialog::showTips()
{
	ui->checkBox->show();
}
