#include <QPainter>
#include <QMouseEvent>
#include <QUrl>
#include <QDesktopServices>

#include "setdialog.h"
#include "ui_setdialog.h"
#include "goopal.h"
#include "debug_log.h"
#include "commondialog.h"
#include "datamgr.h"
#include "frame.h"
#include "waitingpage.h"


#define SETDIALOG_BUTTON_SELECTED   "QToolButton{font: 125 \"微软雅黑\";background-color:#e9e9e9;color:#353535;border:0px;}"
#define SETDIALOG_BUTTON_UNSELECTED "QToolButton{font: \"微软雅黑\";background-color:#f6f6f6;color:#353535;border:0px;}"

SetDialog::SetDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SetDialog),
    waitingPage(nullptr)
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

    ui->containerWidget->installEventFilter(this);

    on_generalBtn_clicked();

	ui->lockTimeSpinBox->setValue(QString::number(DataMgr::getInstance()->lockMinutes).toInt());

    if(DataMgr::getInstance()->notProduce)
    {
        ui->nolockCheckBox->setChecked(true);
        ui->lockTimeSpinBox->setEnabled(false);
    }
    else
    {
        ui->nolockCheckBox->setChecked(false);
        ui->lockTimeSpinBox->setEnabled(true);
    }

    ui->voteCheckBox->setChecked( DataMgr::getInstance()->getSettings()->value("/settings/voteOrNot").toBool());

	QString language = DataMgr::getInstance()->getSettings()->value("/settings/language").toString();;
    if( language == "Simplified Chinese")
    {
        ui->languageComboBox->setCurrentIndex(1);
    }
    else if( language == "English")
    {
        ui->languageComboBox->setCurrentIndex(0);
    }
    else
    {
        //ui->languageComboBox->setCurrentIndex(1);
    }

	ui->minimizeCheckBox->setChecked(false);
	ui->closeCheckBox->setChecked(false); 


    ui->closeBtn->setStyleSheet(QString("QToolButton{background-image:url(%1pic2/close3.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}").arg(DataMgr::getDataMgr()->getWorkPath()));

    ui->saveBtn->setStyleSheet("QToolButton{background-color:#469cfc;color:#ffffff;border:0px solid rgb(64,153,255);border-radius:3px;}"
                               "QToolButton:hover{background-color:#62a9f8;}");
    ui->saveBtn->setText(tr("Save"));

    ui->resyncBtn->setStyleSheet("QToolButton{background-color:#469cfc;color:#ffffff;border:0px solid rgb(64,153,255);border-radius:3px;}"
                               "QToolButton:hover{background-color:#62a9f8;}");

    ui->scanBtn->setStyleSheet("QToolButton{background-color:#469cfc;color:#ffffff;border:0px solid rgb(64,153,255);border-radius:3px;}"
                               "QToolButton:hover{background-color:#62a9f8;}");
#ifdef WIN32
    ui->languageComboBox->setStyleSheet(QString("QComboBox {border: 1px solid gray;border-radius: 3px;padding: 1px 2px 1px 8px;min-width: 5em;}"
                                    "QComboBox::drop-down {subcontrol-origin: padding;subcontrol-position: top right;width: 20px;"
                                                           "border-left-width: 1px;border-left-color: darkgray;border-left-style: solid;"
                                                           "border-top-right-radius: 3px;border-bottom-right-radius: 3px;}"
                                    "QComboBox::down-arrow {image: url(%1pic2/comboBoxArrow.png);}").arg(DataMgr::getDataMgr()->getWorkPath())
                                    );
#else
    ui->languageComboBox->setStyleSheet(QString(
                                   "QComboBox {"
                                        "background-color: rgba(47, 47, 53, 10);"
                                        "background-repeat: no-repeat; "
                                        "selection-background-color: rgb(85, 85, 255); "
                                        "selection-color: rgb(255, 255, 255); "
                                   "}"
                                    "QComboBox::drop-down {background-color: rgba(47, 47, 53, 10);}"
                                    "QComboBox::down-arrow {image: url(%1pic2/comboBoxArrow.png);}"
                                            ).arg(DataMgr::getDataMgr()->getWorkPath())
                                    );
#endif // WIN32//zxlrun
//                "QComboBox::drop-down {"
//                        "background-color: rgba(47, 47, 53, 10);"
//                "}"
//                "QComboBox::down-arrow { image: url(%1pic2/assetComboxArrow.png);}").arg(DataMgr::getDataMgr()->getWorkPath())
//              );
    ui->confirmBtn->setStyleSheet("QToolButton{background-color:#cecece;color:#ffffff;border:0px solid rgb(64,153,255);border-radius:3px;}");
    ui->confirmBtn->setText(tr("Modify"));
    ui->confirmBtn->setEnabled(false);

    ui->oldPwdLineEdit->setStyleSheet("color:black;border:1px solid #CCCCCC;border-radius:3px;");
    ui->oldPwdLineEdit->setTextMargins(8,0,0,0);
    ui->oldPwdLineEdit->setContextMenuPolicy(Qt::NoContextMenu);
    ui->newPwdLineEdit->setStyleSheet("color:black;border:1px solid #CCCCCC;border-radius:3px;");
    ui->newPwdLineEdit->setTextMargins(8,0,0,0);
    ui->newPwdLineEdit->setContextMenuPolicy(Qt::NoContextMenu);
    ui->confirmPwdLineEdit->setStyleSheet("color:black;border:1px solid #CCCCCC;border-radius:3px;");
    ui->confirmPwdLineEdit->setTextMargins(8,0,0,0);
    ui->confirmPwdLineEdit->setContextMenuPolicy(Qt::NoContextMenu);

    ui->oldPwdLineEdit->setAttribute(Qt::WA_InputMethodEnabled, false);
    ui->newPwdLineEdit->setAttribute(Qt::WA_InputMethodEnabled, false);
    ui->confirmPwdLineEdit->setAttribute(Qt::WA_InputMethodEnabled, false);
    ui->lockTimeSpinBox->setAttribute(Qt::WA_InputMethodEnabled, false);

    ui->voteCheckBox->setStyleSheet(QString("QCheckBox::indicator{ image:url(%1pic2/checkBox_unchecked.png); }"
                                    "QCheckBox::indicator:checked{ image:url(%2pic2/checkBox_checked.png); }").arg(DataMgr::getDataMgr()->getWorkPath()).arg(DataMgr::getDataMgr()->getWorkPath()));
    ui->minimizeCheckBox->setStyleSheet(QString("QCheckBox::indicator{ image:url(%1pic2/checkBox_unchecked.png); }"
                                    "QCheckBox::indicator:checked{ image:url(%2pic2/checkBox_checked.png); }").arg(DataMgr::getDataMgr()->getWorkPath()));
    ui->closeCheckBox->setStyleSheet(QString("QCheckBox::indicator{ image:url(%1pic2/checkBox_unchecked.png); }"
                                    "QCheckBox::indicator:checked{ image:url(%2pic2/checkBox_checked.png); }").arg(DataMgr::getDataMgr()->getWorkPath()).arg(DataMgr::getDataMgr()->getWorkPath()));
    ui->nolockCheckBox->setStyleSheet(QString("QCheckBox::indicator{ image:url(%1pic2/checkBox_unchecked.png); }"
                                    "QCheckBox::indicator:checked{ image:url(%2pic2/checkBox_checked.png); }").arg(DataMgr::getDataMgr()->getWorkPath()).arg(DataMgr::getDataMgr()->getWorkPath()));

	ui->label_5->hide();
	//ui->label_6->hide();
	//ui->languageComboBox->hide();
	ui->minimizeCheckBox->hide();
	ui->closeCheckBox->hide();
	ui->voteCheckBox->hide();
	ui->resyncBtn->hide();
	ui->scanBtn->hide();
	ui->networkBtn->hide();
	connect(DataMgr::getInstance(), &DataMgr::onWalletChangePassphrase, this, &SetDialog::walletChangePassword);
	connect(this, &SetDialog::refreshCombobox, (Frame*)Goopal::getInstance()->mainFrame, &Frame::refreshCombobox);
	setFontPixelSize();
    DLOG_QT_WALLET_FUNCTION_END;
}

SetDialog::~SetDialog()
{
    qDebug() << "setdialog delete";
    delete ui;
}

void SetDialog::pop()
{
    move(0,0);
    exec();
}

void SetDialog::setFontPixelSize()
{
	QFont font = ui->label->font();
	font.setPixelSize(22);
	ui->label->setFont(font);

	font = ui->generalBtn->font();
	font.setPixelSize(16);
	ui->generalBtn->setFont(font);
	ui->safeBtn->setFont(font);
	ui->networkBtn->setFont(font);

	//font = ui->label_2->font();
	//font.setPointSize(12);
	
	font = ui->label_3->font();
	font.setPixelSize(14);
	ui->label_3->setFont(font);
	ui->label_6->setFont(font);
	ui->label_2->setFont(font);

	font = ui->lockTimeSpinBox->font();
	font.setPixelSize(12);
	ui->lockTimeSpinBox->setFont(font);

	font = ui->nolockCheckBox->font();
	font.setPixelSize(14);
	ui->nolockCheckBox->setFont(font);

	font = ui->label_5->font();
	font.setPixelSize(12);
	ui->label_5->setFont(font);

	font = ui->voteCheckBox->font();
	font.setPixelSize(12);
	ui->voteCheckBox->setFont(font);
	ui->minimizeCheckBox->setFont(font);
	ui->closeCheckBox->setFont(font);

	font = ui->languageComboBox->font();
	font.setPixelSize(12);
	ui->languageComboBox->setFont(font);

	font = ui->saveBtn->font();
	font.setPixelSize(12);
	ui->saveBtn->setFont(font);

	font = ui->label_7->font();
	font.setPixelSize(14);
	ui->label_7->setFont(font);
	ui->label_8->setFont(font);
	ui->label_9->setFont(font);

	font = ui->oldPwdLineEdit->font();
	font.setPixelSize(12);
	ui->oldPwdLineEdit->setFont(font);
	ui->newPwdLineEdit->setFont(font);
	ui->confirmPwdLineEdit->setFont(font);

	font = ui->confirmBtn->font();
	font.setPixelSize(12);
	ui->confirmBtn->setFont(font);
}

bool SetDialog::eventFilter(QObject *watched, QEvent *e)
{
    if( watched == ui->containerWidget)
    {
        if( e->type() == QEvent::Paint)
        {
            QPainter painter(ui->containerWidget);
            painter.setPen(QColor(204,204,204));
            painter.drawLine(QPoint(0,65), QPoint(629,65));

            return true;
        }
    }

    return QWidget::eventFilter(watched,e);
}

void SetDialog::on_closeBtn_clicked()
{
    close();
}

void SetDialog::on_saveBtn_clicked()
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;

    DataMgr::getInstance()->lockMinutes = ui->lockTimeSpinBox->value();
    DataMgr::getInstance()->getSettings()->setValue("/settings/lockMinutes", DataMgr::getInstance()->lockMinutes);
    if( ui->nolockCheckBox->isChecked()) {
		DataMgr::getInstance()->notProduce = true;
    } else {
        DataMgr::getInstance()->notProduce = false;
    }
	
	DataMgr::getInstance()->getSettings()->setValue("/settings/notAutoLock", DataMgr::getInstance()->notProduce);

	if (ui->languageComboBox->currentIndex() == 0)      //设置钱包语言
	{
        QString str("English");
        //zxltabDataMgr::getDataMgr()->setLanguage(tr("English"));
        DataMgr::getDataMgr()->setLanguage(str);
		DataMgr::getDataMgr()->getSettings()->setValue("/settings/language", "English");
	}
	else if (ui->languageComboBox->currentIndex() == 1)
	{
        QString str("Simplified Chinese");
        //zxltabDataMgr::getDataMgr()->setLanguage(tr("Simplified Chinese"));
        DataMgr::getDataMgr()->setLanguage(str);
		DataMgr::getDataMgr()->getSettings()->setValue("/settings/language", "Simplified Chinese");
	}

    emit settingSaved();
	DataMgr::getInstance()->getSettings()->sync();

	emit refreshCombobox();

    close();

    DLOG_QT_WALLET_FUNCTION_END;
}

void SetDialog::on_nolockCheckBox_clicked()
{
    if(ui->nolockCheckBox->isChecked())
    {
        ui->lockTimeSpinBox->setEnabled(false);
    }
    else
    {
        ui->lockTimeSpinBox->setEnabled(true);
    }
}

void SetDialog::on_lockTimeSpinBox_valueChanged(const QString &arg1)
{
    if( arg1.startsWith('0') || arg1.isEmpty())
    {
        ui->lockTimeSpinBox->setValue(1);
    }
}

void SetDialog::on_generalBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->generalBtn->setStyleSheet(SETDIALOG_BUTTON_SELECTED);
    ui->safeBtn->setStyleSheet(SETDIALOG_BUTTON_UNSELECTED);
    ui->networkBtn->setStyleSheet(SETDIALOG_BUTTON_UNSELECTED);
}

void SetDialog::on_safeBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->generalBtn->setStyleSheet(SETDIALOG_BUTTON_UNSELECTED);
    ui->safeBtn->setStyleSheet(SETDIALOG_BUTTON_SELECTED);
    ui->networkBtn->setStyleSheet(SETDIALOG_BUTTON_UNSELECTED);
}

void SetDialog::on_networkBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui->generalBtn->setStyleSheet(SETDIALOG_BUTTON_UNSELECTED);
    ui->safeBtn->setStyleSheet(SETDIALOG_BUTTON_UNSELECTED);
    ui->networkBtn->setStyleSheet(SETDIALOG_BUTTON_SELECTED);
}

void SetDialog::on_confirmBtn_clicked()
{
    ui->tipLabel3->clear();
    QString text(ui->oldPwdLineEdit->text());
    QString text2(ui->newPwdLineEdit->text());
    //zxltabDataMgr::getInstance()->walletChangePassphrase(ui->oldPwdLineEdit->text(), ui->newPwdLineEdit->text());
    DataMgr::getInstance()->walletChangePassphrase(text, text2);

    waitingPage = new WaitingPage(Goopal::getInstance()->mainFrame);
    waitingPage->setAttribute(Qt::WA_DeleteOnClose);
    waitingPage->move(0, 0);
    waitingPage->show();

	CommonDialog commonDialog(CommonDialog::OkOnly);
	commonDialog.setText(tr("Change password success!"));
	commonDialog.pop();
}

void SetDialog::on_newPwdLineEdit_textChanged(const QString &arg1)
{
    if( arg1.indexOf(' ') > -1)
    {
        ui->newPwdLineEdit->setText( ui->newPwdLineEdit->text().remove(' '));
        return;
    }

    if( arg1.isEmpty())
    {
        ui->tipLabel->setText("");
        ui->confirmBtn->setEnabled(false);
        ui->confirmBtn->setStyleSheet("QToolButton{background-color:#cecece;color:#ffffff;border:0px solid rgb(64,153,255);border-radius:3px;}");

        return;
    }

    if( ui->newPwdLineEdit->text().length() < 8)
    {
        ui->tipLabel->setText(tr("at least 8 letters"));
        ui->confirmBtn->setEnabled(false);
        ui->confirmBtn->setStyleSheet("QToolButton{background-color:#cecece;color:#ffffff;border:0px solid rgb(64,153,255);border-radius:3px;}");

        return;
    }
    else
    {
        ui->tipLabel->clear();
    }

    if( ui->confirmPwdLineEdit->text().isEmpty())
    {
        ui->tipLabel2->clear();
        ui->confirmBtn->setEnabled(false);
        ui->confirmBtn->setStyleSheet("QToolButton{background-color:#cecece;color:#ffffff;border:0px solid rgb(64,153,255);border-radius:3px;}");

        return;
    }

    if( ui->newPwdLineEdit->text() == ui->confirmPwdLineEdit->text())
    {
        ui->tipLabel2->clear();
        ui->confirmBtn->setEnabled(true);
        ui->confirmBtn->setStyleSheet("QToolButton{background-color:#469cfc;color:#ffffff;border:0px solid rgb(64,153,255);border-radius:3px;}"
                                      "QToolButton:hover{background-color:#62a9f8;}");

    }
    else
    {
        ui->tipLabel2->setText(tr("not consistent"));
        ui->confirmBtn->setEnabled(false);
        ui->confirmBtn->setStyleSheet("QToolButton{background-color:#cecece;color:#ffffff;border:0px solid rgb(64,153,255);border-radius:3px;}");

    }
}

void SetDialog::on_confirmPwdLineEdit_textChanged(const QString &arg1)
{
    if( arg1.indexOf(' ') > -1)
    {
        ui->confirmPwdLineEdit->setText( ui->confirmPwdLineEdit->text().remove(' '));
        return;
    }

    if( arg1.isEmpty())
    {
        ui->tipLabel2->setText("");
        ui->confirmBtn->setEnabled(false);
        ui->confirmBtn->setStyleSheet("QToolButton{background-color:#cecece;color:#ffffff;border:0px solid rgb(64,153,255);border-radius:3px;}");

        return;
    }

    if( ui->confirmPwdLineEdit->text().length() < 8)
    {
        ui->tipLabel2->setText(tr("not consistent"));
        ui->tipLabel2->setText(tr("at least 8 letters"));
        ui->confirmBtn->setEnabled(false);
        ui->confirmBtn->setStyleSheet("QToolButton{background-color:#cecece;color:#ffffff;border:0px solid rgb(64,153,255);border-radius:3px;}");

        return;
    }
    else
    {
        ui->tipLabel2->clear();
    }


    if( ui->newPwdLineEdit->text() == ui->confirmPwdLineEdit->text())
    {
        ui->confirmBtn->setEnabled(true);
        ui->confirmBtn->setStyleSheet("QToolButton{background-color:#469cfc;color:#ffffff;border:0px solid rgb(64,153,255);border-radius:3px;}"
                                      "QToolButton:hover{background-color:#62a9f8;}");

    }
    else
    {
        ui->tipLabel2->setText(tr("not consistent"));
        ui->confirmBtn->setEnabled(false);
        ui->confirmBtn->setStyleSheet("QToolButton{background-color:#cecece;color:#ffffff;border:0px solid rgb(64,153,255);border-radius:3px;}");

    }
}


void SetDialog::on_oldPwdLineEdit_textChanged(const QString &arg1)
{
    ui->tipLabel3->clear();

    if( arg1.indexOf(' ') > -1)
    {
        ui->oldPwdLineEdit->setText( ui->oldPwdLineEdit->text().remove( ' '));
    }
}

void SetDialog::on_linkBtn_clicked()
{
    QDesktopServices::openUrl( QUrl("www.selfsell.com"));
}

void SetDialog::on_resyncBtn_clicked()
{
    CommonDialog commonDialog(CommonDialog::OkAndCancel);
    commonDialog.setText( tr("Sure to restart the wallet and resync?<body><font color=#ff0000>(You should scan your wallet when resync already ended.)</font></body>"));
    if( commonDialog.pop())
    {
        emit resync();
        emit accept();
    }

}

void SetDialog::on_scanBtn_clicked()
{
    emit scan();

    CommonDialog commonDialog(CommonDialog::OkOnly);
    commonDialog.setText( tr("Already scanning in the background"));
    commonDialog.pop();
}

void SetDialog::walletChangePassword(QString result)
{
    if(waitingPage != nullptr)
    {
        delete waitingPage;
        waitingPage = nullptr;
    }

	if( result == "\"result\":null") {
		close();
	} else {
		ui->tipLabel3->setText( tr("Password Incorrect!"));
	}
}
