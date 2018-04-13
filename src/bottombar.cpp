#include "bottombar.h"
#include "ui_bottombar.h"
#include "consoledialog.h"
#include "goopal.h"
#include "debug_log.h"
#include "commontip.h"
#include "peerinfodialog.h"
#include "control/myprogressbar.h"
#include "commondialog.h"
#include "extra/dynamicmove.h"
#include "datamgr.h"

#include <QPainter>
#include <QTimer>
#include <QMovie>
#include <QMouseEvent>

BottomBar::BottomBar(QWidget *parent) :
    QWidget(parent),
    timerForHide(NULL),
    isMoving(false),
    ui(new Ui::BottomBar)
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;
    ui->setupUi(this);

    myProgressBar = new MyProgressBar(this);
    connect( myProgressBar, SIGNAL(valueChanged(int)), this, SLOT(onProgressBarValueChanged(int)));
    myProgressBar->move(16,16);
    myProgressBar->hide();

    setMouseTracking(true);
    setAutoFillBackground(true);
    QPalette palette;
    palette.setColor(QPalette::Background, QColor(255,255,255));
    setPalette(palette);

    mouseInsideOrNot = false;
    timerForHide = new QTimer(this);
    timerForHide->setInterval(2000);
    connect(timerForHide, SIGNAL(timeout()), this, SLOT(ontimerForHideOut()));
    timerForHide->start();

    ui->warningLabel->hide();
    ui->warningLabel2->hide();

    ui->warningLabel->setPixmap( QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/warning.png") );
	ui->promptlabel->setText(tr("No data to be synchronized!"));
	
    connectionTip = new CommonTip;

    ui->signalBtn->installEventFilter(this);
    ui->signalBtn->setStyleSheet("background:transparent;");

    ui->lockBtn->setIcon(QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/lockBtn.png"));
    ui->lockBtn->setIconSize(QSize(10,13));
    ui->lockBtn->setStyleSheet("background:transparent");

	connect(DataMgr::getInstance(), &DataMgr::onGetInfo, this, &BottomBar::getInfo);
	setFontPixelSize();
    DLOG_QT_WALLET_FUNCTION_END;
}

BottomBar::~BottomBar()
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;
    delete ui;
    DLOG_QT_WALLET_FUNCTION_END;
}

void BottomBar::setFontPixelSize()
{
	QFont font = ui->warningLabel2->font();
	font.setPixelSize(12);
	ui->warningLabel2->setFont(font);
	ui->promptlabel->setFont(font);
}

void BottomBar::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setBrush(QColor(88,93,103));
    painter.setPen(QColor(88,93,103));
    painter.drawRect(QRect(0,0,827,40));
}

void BottomBar::updateNumOfConnections(QString result)
{

    int pos = result.indexOf("\"network_num_connections\"") + 26;
    QString num = result.mid( pos, result.indexOf("," , pos) - pos);
    numOfConnections = num.toInt();

    if( numOfConnections >= 4)
    {
        ui->signalBtn->setIcon( QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/signal4.png"));
        ui->signalBtn->setIconSize(QSize(24,20));
    }
    else if( numOfConnections == 3)
    {
        ui->signalBtn->setIcon( QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/signal3.png"));
        ui->signalBtn->setIconSize(QSize(24,20));
    }
    else if( numOfConnections == 2)
    {
        ui->signalBtn->setIcon( QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/signal2.png"));
        ui->signalBtn->setIconSize(QSize(24,20));
    }
    else if( numOfConnections == 1)
    {
        ui->signalBtn->setIcon( QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/signal1.png"));
        ui->signalBtn->setIconSize(QSize(24,20));
    }
    else
    {
        ui->signalBtn->setIcon( QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/signal0.png"));
        ui->signalBtn->setIconSize(QSize(24,20));    
    }

    if( numOfConnections > 0)
    {
        myProgressBar->show();
        ui->syncLabel->show();
		ui->promptlabel->show();
        ui->warningLabel->hide();
        ui->warningLabel2->hide();
    } else {
        myProgressBar->hide();
        ui->syncLabel->hide();
		ui->promptlabel->hide();
        //ui->warningLabel->show();
        //ui->warningLabel2->show();
    }

}

void BottomBar::on_signalBtn_clicked()
{
//	PeerInfoDialog peerInfoDialog;
//  peerInfoDialog.pop();

}

void BottomBar::retranslator()
{
    ui->retranslateUi(this);
}

void BottomBar::getInfo(QString result)
{
	if( result.isEmpty() )  return;
	
	updateNumOfConnections(result);

    int pos = result.indexOf( "\"blockchain_head_block_age\":") + 28;
    QString seconds = result.mid( pos, result.indexOf("\"blockchain_head_block_timestamp\":") - pos - 1);

    int pos2 = result.indexOf( "\"blockchain_head_block_num\":") + 28;
    QString num = result.mid( pos2, result.indexOf("\"blockchain_head_block_age\":") - pos2 - 1);

    if( seconds.toInt() < 0)  seconds = "0";
    int numToSync = seconds.toInt()/ 10;


    ui->syncLabel->setText( num + " / " + QString::number( num.toInt() + numToSync) );
    if (0 == numToSync) {
        myProgressBar->setValue(100);
    }
    else {
        myProgressBar->setValue( num.toDouble() / ( num.toDouble() + numToSync) * 100);
    }

    int pos3 = result.indexOf( "\"wallet_scan_progress\":") + 23;
    QString scanProgress = result.mid( pos3, result.indexOf(",\"wallet_block_production_enabled\":") - pos3);

    scanProgress.remove('\"');
    double scanPercent = scanProgress.toDouble();
}

bool BottomBar::eventFilter(QObject *watched, QEvent *e)
{
    if( watched == ui->signalBtn)
    {
        if( e->type() == QEvent::ToolTip)
        {
            connectionTip->setText( " " + QString::number(numOfConnections) + tr(" nodes connected"));
            connectionTip->move( ui->signalBtn->mapToGlobal( QPoint( -20 ,-20)));
            connectionTip->show();
            return true;
        }
        else if( e->type() == QEvent::Leave)
        {
            connectionTip->hide();
            return true;
        }
    }

    return QWidget::eventFilter(watched,e);
}

void BottomBar::enterEvent(QEvent *e)
{
    mouseInsideOrNot = true;
    timerForHide->stop();
}

void BottomBar::leaveEvent(QEvent *e)
{
    if( myProgressBar->value() == 100)
    {
        mouseInsideOrNot = false;
        if( timerForHide)
        {
            timerForHide->start();
        }
    }
}

void BottomBar::dynamicShow()
{
    if( isMoving)  return;
    isMoving = true;
    DynamicMove* dynamicMove = new DynamicMove( this, QPoint(133,540), 20, 10, this);
    connect( dynamicMove, SIGNAL(moveEnd()), this, SLOT(moveEnd()));
    dynamicMove->start();
}

void BottomBar::dynamicHide()
{
    if( isMoving)  return;
    isMoving = true;
    DynamicMove* dynamicMove = new DynamicMove( this, QPoint(133,580), 20, 10, this);
    connect( dynamicMove, SIGNAL(moveEnd()), this, SLOT(moveEnd()));
    dynamicMove->start();
}

void BottomBar::ontimerForHideOut()
{
    if( !mouseInsideOrNot && myProgressBar->value() == 100 )
    {
        dynamicHide();
    }
}

void BottomBar::onProgressBarValueChanged(int value)
{
    if( value == 100 ) {
        if( timerForHide) {
            timerForHide->start();
        }
		ui->promptlabel->setText(tr("Complete Data synchronization!"));
    }
	else
	{
		ui->promptlabel->setText(tr("Synchronizing data!"));
	}
}

void BottomBar::on_lockBtn_clicked()
{
    qDebug() << "BottomBar::on_lockBtn_clicked ";
    emit lock();
}

void BottomBar::moveEnd()
{
    isMoving = false;
}


void BottomBar::refresh()
{
	DataMgr::getInstance()->getInfo();
}
