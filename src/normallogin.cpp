#include <QPainter>
#include <QKeyEvent>
#include <QDebug>
#ifdef WIN32 
#include <windows.h>
#endif //zxlwin
#ifdef Q_OS_MACOS || Q_OS_MAC32 || Q_OS_MAC64
#include <ApplicationServices/ApplicationServices.h>
#endif
#include "normallogin.h"
#include "ui_normallogin.h"
#include "goopal.h"
#include "debug_log.h"
#include "commondialog.h"
#include "datamgr.h"

NormalLogin::NormalLogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NormalLogin)
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;

    ui->setupUi(this);

    chances = 5;

    setAutoFillBackground(true);
    QPalette palette;
    palette.setBrush(QPalette::Background, QBrush(QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/bg.png")));
    setPalette(palette);
    ui->logoLabel->setPixmap(QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/SSCWallet.png"));
//    ui->pwdLineEdit->setStyleSheet("color:white;background:transparent;border-width:0;border-style:outset;");
    ui->pwdLineEdit->setStyleSheet(
                "QLineEdit {color:white;background:transparent;border-width:0;border-style:outset;}"
                "QLineEdit:focus {color:white;background:transparent;border-width:3;border-style:none;}"
                );
   // ui->pwdLineEdit->setFocus();
    ui->pwdLineEdit->setContextMenuPolicy(Qt::NoContextMenu);
    ui->pwdLineEdit->setAttribute(Qt::WA_InputMethodEnabled, false);

//  ui->enterBtn->setIcon(QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/arrow.png"));
    ui->enterBtn->setStyleSheet(QString("QToolButton{background-image:url(%1pic2/arrow.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}"
                                        "QToolButton:hover{background-image:url(%2pic2/arrow_hover.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}"
                                        ).arg(DataMgr::getDataMgr()->getWorkPath()).arg(DataMgr::getDataMgr()->getWorkPath())
                                );

    QFont font = ui->loginLabel->font();
    font.setPixelSize(12);
    ui->loginLabel->setFont(font);

    font = ui->tipLabel->font();
    font.setPixelSize(12);
    ui->tipLabel->setFont(font);

//  ui->minBtn->setIcon(QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/minimize.png"));
//  ui->minBtn->setIconSize(QSize(14,14));
    ui->minBtn->setStyleSheet(QString("QToolButton{background-image:url(%1pic2/minimize2.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}"
                              "QToolButton:hover{background-image:url(%2pic2/minimize_hover.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}").arg(DataMgr::getDataMgr()->getWorkPath()).arg(DataMgr::getDataMgr()->getWorkPath()));
//    ui->closeBtn->setIcon(QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/close.png"));
//    ui->closeBtn->setIconSize(QSize(14,14));
    ui->closeBtn->setStyleSheet(QString("QToolButton{background-image:url(%1pic2/close2.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}"
                                "QToolButton:hover{background-image:url(%2pic2/close_hover.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}").arg(DataMgr::getDataMgr()->getWorkPath()).arg(DataMgr::getDataMgr()->getWorkPath()));


   // ui->textLabel->setPixmap(QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/Achain-Wallet.png"));

    ui->versionLabel->setText(QString("Ver.") + SSC_WALLET_VERSION);

#ifdef WIN32
    if( GetKeyState(VK_CAPITAL) ) {  //zxlwin
        ui->tipLabel->setText( tr("Caps lock opened!") );
    }
#endif // WIN32

#ifdef Q_OS_MACOS || Q_OS_MAC32 || Q_OS_MAC64
    bool wasCapsLockDown = CGEventSourceKeyState(kCGEventSourceStateHIDSystemState, 57);
    if (wasCapsLockDown)
        ui->tipLabel->setText(tr("Caps lock opened!"));
#endif

    timerForLockTime = new QTimer(this);
    connect(timerForLockTime, SIGNAL(timeout()), this, SLOT(checkLock()));
    timerForLockTime->start(1000);

    checkLock();

//    connect( Goopal::getInstance(),SIGNAL(jsonDataUpdated(QString)),this,SLOT(pwdConfirmed(QString)));
 //   connect( Goopal::getInstance(),SIGNAL(jsonDataUpdated(QString)),this,SLOT(pwdConfirmed(QString)));
	connect(DataMgr::getInstance(), &DataMgr::onWalletUnlock, this, &NormalLogin::pwdConfirmed);
	setFontPixelSize();
    DLOG_QT_WALLET_FUNCTION_END;
}

NormalLogin::~NormalLogin()
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;

    delete ui;

    DLOG_QT_WALLET_FUNCTION_END;
}

void NormalLogin::setFontPixelSize()
{
	QFont font = ui->versionLabel->font();
	font.setPixelSize(12);
	ui->versionLabel->setFont(font);
	ui->versionLabel_2->setFont(font);

	font = ui->chanceLabel->font();
	font.setPixelSize(12);
	ui->chanceLabel->setFont(font);
	ui->loginLabel->setFont(font);
	ui->tipLabel->setFont(font);
	ui->pwdLabel2_2->setFont(font);

	font = ui->pwdLineEdit->font();
	font.setPixelSize(12);
	ui->pwdLineEdit->setFont(font);
}


void NormalLogin::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPen pen;
    pen.setColor(QColor(137,176,226));
    pen.setStyle(Qt::SolidLine);
    pen.setWidth(1);
    painter.setPen(pen);
    painter.drawLine(QPoint(370,372),QPoint(596,372));
}

void NormalLogin::on_enterBtn_clicked()
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;

    if( ui->pwdLineEdit->text().isEmpty() ) {
        ui->tipLabel->setText( tr("Empty!") );
        return;
    }

    if( ui->pwdLineEdit->text().size() < 8) {
        ui->tipLabel->setText( tr("At least 8 letters!") );
        ui->pwdLineEdit->clear();
        return;
    }
	
    QString str(ui->pwdLineEdit->text());
    //zxltabDataMgr::getInstance()->walletUnlock(99999999, ui->pwdLineEdit->text());
    DataMgr::getInstance()->walletUnlock(99999999, str);
    emit showShadowWidget();
    ui->pwdLineEdit->setEnabled(false);

    DLOG_QT_WALLET_FUNCTION_END;
}


void NormalLogin::on_pwdLineEdit_returnPressed()
{
    on_enterBtn_clicked();
}

void NormalLogin::on_minBtn_clicked()
{
//    if( Goopal::getInstance()->minimizeToTray)
	if (false) {
        emit tray();
    } else {
        emit minimum();
        //showMinimized();
        //QWidget::hide();
    }
}

void NormalLogin::on_closeBtn_clicked()
{
    //qDebug() << Goopal::getInstance()->closeToMinimize;
    //if( Goopal::getInstance()->closeToMinimize)
	if (false)
    {
        emit tray();
    }
    else
    {
        CommonDialog commonDialog(CommonDialog::OkAndCancel);
        commonDialog.setText( tr( "Close SelfSell Wallet?"));
        bool choice = commonDialog.pop();

        if( choice)
        {
            emit closeGOP();
        }
        else
        {
            return;
        }

    }
}

void NormalLogin::on_pwdLineEdit_textChanged(const QString &arg1)
{
    if( !arg1.isEmpty())
    {
        ui->tipLabel->clear();
    }

    if( arg1.indexOf(' ') > -1)
    {
        ui->pwdLineEdit->setText( ui->pwdLineEdit->text().remove(' '));
    }
}


void NormalLogin::pwdConfirmed(QString result)
{
	emit hideShadowWidget();
	ui->pwdLineEdit->setEnabled(true);
	ui->pwdLineEdit->setFocus();

	if( result == "\"result\":null") {
		emit login();
		disconnect(DataMgr::getInstance(), &DataMgr::onWalletUnlock, this, &NormalLogin::pwdConfirmed);
		this->close();
	} else {
		ui->tipLabel->setText(tr("Wrong password!"));
		ui->pwdLineEdit->clear();

		chances--;
		qDebug() << "chances : " << chances;
		if( chances < 1) {
			/*
			if( lockTime() == 0)  // 如果没有 locktime文件 则创建
			{
				qDebug() << "walletConfigPath: " << Goopal::getInstance()->walletConfigPath;
				QFile file(Goopal::getInstance()->walletConfigPath + "/locktime");
				qDebug()  << "file open : " <<   file.open(QIODevice::WriteOnly);
				file.close();
			}
			*/
			//checkLock();
		}
	}
	return;
}

int NormalLogin::lockTime()
{
    QFileInfo fileInfo;
  //  fileInfo.setFile(Goopal::getInstance()->walletConfigPath + "/locktime");

    if( fileInfo.exists())
    {
        QDateTime createdTime = fileInfo.lastModified();
        int deltaTime = QDateTime::currentDateTime().toTime_t() - createdTime.toTime_t();

        if( deltaTime < PWD_LOCK_TIME)
        {
//            ui->tipLabel->setText( tr("Please try after ") + QString::number( PWD_LOCK_TIME - deltaTime) + "s");
            return PWD_LOCK_TIME - deltaTime;
        }
        else
        {
//            qDebug() << "remove locktime file :" << QFile::remove(Goopal::getInstance()->walletConfigPath + "/locktime");
            return 0;
        }

    }
    else
    {
        return 0;
    }
}

void NormalLogin::checkLock()
{
    int timeLeft = lockTime();
    if( timeLeft > 0)
    {
        ui->pwdLineEdit->setEnabled(false);
        ui->enterBtn->setEnabled(false);

        if( timeLeft > 3600)
        {
            int hours   = timeLeft / 3600;
            int minutes = (timeLeft - 3600 * hours) / 60;
            ui->tipLabel->setText( tr("Please try after ") + QString::number( hours) + tr(" hours ") +
                                   QString::number( minutes) + tr(" minutes ") + tr(".  "));
        }
        else if( timeLeft > 60)
        {
            int minutes = timeLeft / 60;
            ui->tipLabel->setText( tr("Please try after ") + QString::number( minutes) + tr(" minutes ") + tr(".  "));
        }
        else
        {
            ui->tipLabel->setText( tr("Please try after ") + QString::number( timeLeft) + tr(" seconds ") + tr(".  "));
        }

        ui->pwdLineEdit->clear();
        return;
    }
    else
    {
        ui->pwdLineEdit->setEnabled(true);
        ui->enterBtn->setEnabled(true);
        if( ui->tipLabel->text().startsWith( tr("Please try after ")))
        {
            ui->tipLabel->clear();
        }
    }
}

void NormalLogin::keyPressEvent(QKeyEvent *e)
{
    QWidget::keyPressEvent(e);

    if(e->key() == Qt::Key_CapsLock)
    {
#ifdef WIN32
        if(GetKeyState(VK_CAPITAL) == -127)
        {
            ui->tipLabel->setText( tr("Caps lock opened!") );
        }
        else
        {
            ui->tipLabel->setText( tr("Caps lock closed!") );
        }
#endif // WIN32

#ifdef Q_OS_MACOS || Q_OS_MAC32 || Q_OS_MAC64
        ui->tipLabel->setText(tr("Caps lock opened!"));
#endif
    }
}

void NormalLogin::keyReleaseEvent(QKeyEvent *e)
{
    QWidget::keyReleaseEvent(e);

    if(e->key() == Qt::Key_CapsLock)
    {
#ifdef Q_OS_MACOS || Q_OS_MAC32 || Q_OS_MAC64
        ui->tipLabel->setText(tr("Caps lock closed!"));
#endif
    }
}
