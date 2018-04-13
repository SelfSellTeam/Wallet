#include "peerinfodialog.h"
#include "ui_peerinfodialog.h"
#include "goopal.h"
#include "addnodedialog.h"
#include "ipcellwidget.h"
#include "commondialog.h"
#include "datamgr.h"

#include <QDebug>
#include <QDateTime>
#include <QMovie>
#include <QTimer>
#include <QMouseEvent>

PeerInfoDialog::PeerInfoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PeerInfoDialog)
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


//    connect( Goopal::getInstance(), SIGNAL(jsonDataUpdated(QString)), this, SLOT(jsonDataUpdated(QString)));

    gif = new QMovie(DataMgr::getDataMgr()->getWorkPath() + "pic2/refresh.gif");
    connect(gif,SIGNAL(frameChanged(int)),this,SLOT( gifPlayOnce(int)));
    ui->gifLabel->setMovie(gif);
    ui->gifLabel->hide();

    refresh();

    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(refresh()));
    timer->start(20000);


    ui->closeBtn->setStyleSheet(QString("QToolButton{background-image:url(%1pic2/close3.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}").arg(DataMgr::getDataMgr()->getWorkPath()));
    ui->addNodeBtn->setStyleSheet("QToolButton{background:transparent;color:rgb(107,150,216)}");

    ui->peerInfoTableWidget->setSelectionMode(QAbstractItemView::NoSelection);
    ui->peerInfoTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->peerInfoTableWidget->setFocusPolicy(Qt::NoFocus);
    ui->peerInfoTableWidget->setColumnWidth(0,170);
    ui->peerInfoTableWidget->setColumnWidth(1,150);
    ui->peerInfoTableWidget->setColumnWidth(2,82);
    ui->peerInfoTableWidget->setColumnWidth(3,70);
    ui->peerInfoTableWidget->setShowGrid(false);
//    ui->peerInfoTableWidget->setStyleSheet("QTableView::item { border-bottom: 1px dashed rgb(180,180,180); }");
    ui->peerInfoTableWidget->setFrameShape(QFrame::NoFrame);
    ui->peerInfoTableWidget->setMouseTracking(true);

    ui->peerInfoTableWidget->horizontalHeader()->setSectionsClickable(false);
    ui->peerInfoTableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section{background:transparent;}");
    ui->peerInfoTableWidget->horizontalHeader()->setFixedHeight(34);
    ui->peerInfoTableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);

    for( int i = 0; i < 4; i++)
    {
        QTableWidgetItem* columnHeaderItem = ui->peerInfoTableWidget->horizontalHeaderItem(i);// 获得水平方向表头的Item对象
        columnHeaderItem->setTextColor(QColor(134,134,134)); // 设置文字颜色
    }

    ui->refreshBtn->setStyleSheet(QString("QToolButton{background-image:url(%1pic2/refresh.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}"
                                  "QToolButton:hover{background-image:url(%2pic2/refresh_hover.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}").arg(DataMgr::getDataMgr()->getWorkPath()).arg(DataMgr::getDataMgr()->getWorkPath()));

    setStyleSheet("QScrollBar:vertical"
                                                       "{"
                                                       "width:8px;"
                                                       "background:rgba(0,0,0,0%);"
                                                       "margin:0px,0px,0px,0px;"
                                                       "padding-top:2px;"
                                                       "padding-bottom:3px;"
                                                       "}"
                                                       "QScrollBar::handle:vertical"
                                                       "{"
                                                       "width:8px;"
                                                       "background:rgba(130,137,143,20%);"
                                                       " border-radius:4px;"
                                                       "min-height:20;"
                                                       "}"
                                                       "QScrollBar::handle:vertical:hover"
                                                       "{"
                                                       "width:8px;"
                                                       "background:rgba(130,137,143,100%);"
                                                       " border-radius:4px;"
                                                       "min-height:20;"
                                                       "}"
                                                       "QScrollBar::add-line:vertical"
                                                       "{"
                                                       "height:9px;width:8px;"
                                                       "border-image:url(:/images/a/3.png);"
                                                       "subcontrol-position:bottom;"
                                                       "}"
                                                       "QScrollBar::sub-line:vertical"
                                                       "{"
                                                       "height:9px;width:8px;"
                                                       "border-image:url(:/images/a/1.png);"
                                                       "subcontrol-position:top;"
                                                       "}"
                                                       "QScrollBar::add-line:vertical:hover"
                                                       "{"
                                                       "height:9px;width:8px;"
                                                       "border-image:url(:/images/a/4.png);"
                                                       "subcontrol-position:bottom;"
                                                       "}"
                                                       "QScrollBar::sub-line:vertical:hover"
                                                       "{"
                                                       "height:9px;width:8px;"
                                                       "border-image:url(:/images/a/2.png);"
                                                       "subcontrol-position:top;"
                                                       "}"
                                                       "QScrollBar::add-page:vertical,QScrollBar::sub-page:vertical"
                                                       "{"
                                                       "background:rgba(0,0,0,0%);"
                                                       "border-radius:4px;"
                                                       "}"
                                                       );
}

PeerInfoDialog::~PeerInfoDialog()
{
    qDebug() << "PeerInfoDialog delete";

    delete ui;
//    Goopal::getInstance()->removeCurrentDialogVector(this);
}

void PeerInfoDialog::pop()
{
//    QEventLoop loop;
//    show();
//    connect(this,SIGNAL(accepted()),&loop,SLOT(quit()));
//    loop.exec();  //进入事件 循环处理，阻塞

    move(0,0);
    exec();
}

void PeerInfoDialog::on_refreshBtn_clicked()
{
    ui->gifLabel->show();
    ui->refreshBtn->hide();
    gif->start();

    refresh();
}

void PeerInfoDialog::jsonDataUpdated(QString id)
{
	/*
    if( id == "id_network_get_peer_info")
    {

        QString result = Goopal::getInstance()->jsonDataValue(id);

        QStringList strList = result.split("{\"addr\":");
        strList.removeFirst();

        int size = strList.size();

        QString blockedIps = Goopal::getInstance()->jsonDataValue("id_network_get_blocked_ips");
        blockedIps.remove("\"result\":[");
        blockedIps.remove("]");

        int numOfBlocked = 0;
        QStringList blockedIpsList;
        if( blockedIps.contains("\""))
        {
            blockedIpsList = blockedIps.split(",");
            numOfBlocked = blockedIpsList.size();
        }

        ui->peerInfoTableWidget->setRowCount( size + numOfBlocked );

        int i = 0;
        foreach (QString str, strList)
        {
            ui->peerInfoTableWidget->setRowHeight( i, 37);

            QString addr =      str.mid(1, str.indexOf("\"", 1) - 1);
            IpCellWidget* ipCellWidget = new IpCellWidget( addr, false);
            connect( ipCellWidget, SIGNAL(blockSet(QString,bool)), this, SLOT(setBlockOrNot(QString,bool)));

            ui->peerInfoTableWidget->setCellWidget( i, 0, ipCellWidget);

            int pos = str.indexOf( "\"conntime\":") + 12;
            QString conntime =  str.mid( pos, str.indexOf("\"", pos) - pos);
            conntime.replace(QString("T"),QString(" "));
            QDateTime time = QDateTime::fromString(conntime, "yyyy-MM-dd hh:mm:ss");
            time = time.addSecs(28800);       // 时间加8小时

            QString connectTime = time.toString("yyyy-MM-dd hh:mm");
            ui->peerInfoTableWidget->setItem( i, 1, new QTableWidgetItem( connectTime) );

            int deltaTime   = QDateTime::currentDateTime().toTime_t() - time.toTime_t();
            int hours       = deltaTime / 3600;
            int minutes     = ( deltaTime - hours * 3600) / 60;
            QString lastTime;
            if( hours == 0)
            {
                lastTime = QString::number( minutes) + "m";
            }
            else
            {
                lastTime = QString::number( hours)  + "h" + QString::number( minutes) + "m";
            }
            ui->peerInfoTableWidget->setItem( i, 2, new QTableWidgetItem( lastTime) );

            ui->peerInfoTableWidget->setItem( i, 3, new QTableWidgetItem( tr("normal node") ) );

            i++;
        }

        foreach (QString str, blockedIpsList)
        {
            ui->peerInfoTableWidget->setRowHeight( i, 37);

            QString addr =      str.mid(1, str.indexOf("\"", 1) - 1);
            IpCellWidget* ipCellWidget = new IpCellWidget( addr, true);
            connect( ipCellWidget, SIGNAL(blockSet(QString,bool)), this, SLOT(setBlockOrNot(QString,bool)));

            ui->peerInfoTableWidget->setCellWidget( i, 0, ipCellWidget);

            QTableWidgetItem* item1 = new QTableWidgetItem( "--");
            item1->setTextColor(QColor(153,153,153));
            ui->peerInfoTableWidget->setItem( i, 1, item1 );

            QTableWidgetItem* item2 = new QTableWidgetItem( "--");
            item2->setTextColor(QColor(153,153,153));
            ui->peerInfoTableWidget->setItem( i, 2, item2 );

            QTableWidgetItem* item3 = new QTableWidgetItem( tr("in blacklist") );
            item3->setTextColor(QColor(153,153,153));
            ui->peerInfoTableWidget->setItem( i, 3, item3 );
            i++;
        }

        if( strList.size() != 0)
        {
            int pos = strList.at(0).indexOf( "\"addrlocal\":") + 13;
            QString addrLocal = strList.at(0).mid( pos, strList.at(0).indexOf("\"", pos) - pos);
            Goopal::getInstance()->localIP = addrLocal;
            ui->localIPLabel->setText( addrLocal);
        }
        else
        {
            ui->localIPLabel->setText( Goopal::getInstance()->localIP);
        }


        ui->numLabel->setText( QString::number( strList.size()) );

        return;
    }
	*/
}

void PeerInfoDialog::on_closeBtn_clicked()
{
    close();
//    emit accepted();
}

void PeerInfoDialog::on_addNodeBtn_clicked()
{
    AddNodeDialog addNodeDialog;
    addNodeDialog.exec();
}

void PeerInfoDialog::gifPlayOnce(int num)
{
    if( gif->frameCount() == num + 1)
    {
        gif->stop();
        ui->gifLabel->hide();
        ui->refreshBtn->show();
    }
}

void PeerInfoDialog::refresh()
{
   // Goopal::getInstance()->postRPC( toJsonFormat( "id_network_get_blocked_ips", "network_get_blocked_ips", QStringList() << "" ));
    //Goopal::getInstance()->postRPC( toJsonFormat( "id_network_get_peer_info", "network_get_peer_info", QStringList() << "" ));

}

void PeerInfoDialog::stopRefresh()
{
    timer->stop();
}

void PeerInfoDialog::startRefresh()
{
    timer->start(2000);
}

void PeerInfoDialog::setBlockOrNot(QString ip, bool blockOrNot)
{
    if( blockOrNot)
    {
        CommonDialog commonDialog(CommonDialog::OkAndCancel);
        commonDialog.setText( tr("Sure to add this node to the blacklist?"));
        bool yesOrNo = commonDialog.pop();

        if( yesOrNo)
        {
       //     Goopal::getInstance()->postRPC( toJsonFormat( "id_addnode", "addnode", QStringList() << ip << "block" ));
            refresh();
        }
        else
        {
            return;
        }
    }
    else
    {
        CommonDialog commonDialog(CommonDialog::OkAndCancel);
        commonDialog.setText( tr("Sure to remove this node from the blacklist?"));
        bool yesOrNo = commonDialog.pop();

        if( yesOrNo)
        {
       //     Goopal::getInstance()->postRPC( toJsonFormat( "id_addnode", "addnode", QStringList() << ip << "unblock" ));
            refresh();
        }
        else
        {
            return;
        }
    }
}

//void PeerInfoDialog::mousePressEvent(QMouseEvent *event)
//{

//    if(event->button() == Qt::LeftButton)
//     {
//          mouse_press = true;
//          //鼠标相对于窗体的位置（或者使用event->globalPos() - this->pos()）
//          move_point = event->pos();;
//     }
//}

//void PeerInfoDialog::mouseMoveEvent(QMouseEvent *event)
//{
//    //若鼠标左键被按下
//    if(mouse_press)
//    {
//        //鼠标相对于屏幕的位置
//        QPoint move_pos = event->globalPos();

//        //移动主窗体位置
//        this->move(move_pos - move_point);
//    }
//}

//void PeerInfoDialog::mouseReleaseEvent(QMouseEvent *)
//{
//    mouse_press = false;
//}

//void PeerInfoDialog::setVisible(bool visiable)
//{
//    QWidget::setVisible(visiable);
//}
