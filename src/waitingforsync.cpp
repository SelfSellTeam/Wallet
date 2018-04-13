#include "waitingforsync.h"
#include "ui_waitingforsync.h"
#include "goopal.h"
#include "debug_log.h"
#include "commondialog.h"
#include <QTimer>
#include <QDebug>
#include <QMovie>
#include <QDesktopServices>
#include "datamgr.h"
#include "rpcmgr.h"

WaitingForSync::WaitingForSync(QWidget *parent) :
    QWidget(parent),
    updateOrNot(false),
    synced(false),
    ui(new Ui::WaitingForSync)
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;
    ui->setupUi(this);

    setAutoFillBackground(true);
	timer = new QTimer(this);
	connect(timer,SIGNAL(timeout()),this,SLOT(updateInfo()));
	timer->start(5000);
	connect(DataMgr::getInstance(), &DataMgr::onGetInfo, this, &WaitingForSync::infoUpdated);

    gif = new QMovie(DataMgr::getDataMgr()->getWorkPath() + "pic2/loading.gif");
    ui->gifLabel->setMovie(gif);
    ui->gifLabel->move(ui->gifLabel->x()-10, ui->gifLabel->y());
    gif->start();

    ui->minBtn->setStyleSheet(QString("QToolButton{background-image:url(%1pic2/minimize2.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}"
                              "QToolButton:hover{background-image:url(%2pic2/minimize_hover.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}").arg(DataMgr::getDataMgr()->getWorkPath()).arg(DataMgr::getDataMgr()->getWorkPath()));
    ui->closeBtn->setStyleSheet(QString("QToolButton{background-image:url(%1pic2/close2.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}"
                                "QToolButton:hover{background-image:url(%2pic2/close_hover.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}").arg(DataMgr::getDataMgr()->getWorkPath()).arg(DataMgr::getDataMgr()->getWorkPath()));

    ui->textLabel->setPixmap(QPixmap(""));
    ui->logoLabel->setPixmap(QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/SSCWallet.png"));

    ui->versionLabel->setText(QString("Ver.") + SSC_WALLET_VERSION);

	QPalette palette;
    palette.setBrush(QPalette::Background, QBrush(QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/bg.png")));

    setPalette(palette);

    ui->retranslateUi(this);
	setFontPixelSize();

    DLOG_QT_WALLET_FUNCTION_END;
}

WaitingForSync::~WaitingForSync()
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;
    delete ui;
    DLOG_QT_WALLET_FUNCTION_END;
}

void WaitingForSync::setFontPixelSize()
{
	QFont font = ui->versionLabel->font();
	font.setPixelSize(12);
	ui->versionLabel->setFont(font);
	ui->versionLabel_2->setFont(font);

	font = ui->loadingLabel->font();
	font.setPixelSize(12);
	ui->loadingLabel->setFont(font);

}
void WaitingForSync::updateInfo()
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;
	DataMgr::getInstance()->getInfo();

    DLOG_QT_WALLET_FUNCTION_END;
}

void WaitingForSync::on_minBtn_clicked()
{
	//    if( Goopal::getInstance()->minimizeToTray)
	if (false) {
		emit tray();
	} else {
		emit minimum();
	}
}

void WaitingForSync::on_closeBtn_clicked()
{
	CommonDialog commonDialog(CommonDialog::OkAndCancel);
	commonDialog.setText( tr( "Close SelfSell Wallet?"));
	bool choice = commonDialog.pop();

	if( choice) {
		emit closeGOP();
	} else {
		return;
	}
}

void WaitingForSync::blockchainStarted()
{
	updateInfo();
}

void WaitingForSync::updateBebuildInfo()
{
	QTextCodec* gbkCodec = QTextCodec::codecForName("GBK");
	QString str = gbkCodec->toUnicode(RpcMgr::getInstance()->currentProcess()->readAll());
	qDebug() << "updateBebuildInfo " << str;
	if (str.contains("Replaying blockchain... Approximately ") && !str.contains("Successfully replayed")) {
		QStringList strList = str.split("Replaying blockchain... Approximately ");
		QString percent = strList.last();
		percent = percent.mid(0, percent.indexOf("complete."));
		qDebug() << percent;
		ui->loadingLabel->setText(tr("Rebuilding... ") + percent);
	}
}

void WaitingForSync::infoUpdated(QString result)
{
	int pos = result.indexOf("\"blockchain_head_block_age\":") + 28;
	QString seconds = result.mid(pos, result.indexOf("\"blockchain_head_block_timestamp\":") - pos - 1);
	qDebug() << "info seconds : " << seconds;

	// 不管是否连上过节点 直接进入
	if ( /* seconds.toInt() != 0 && */!synced) {

		synced = true;
		timer->stop();
		emit sync();
	}
	return;
}
