#include <QDebug>

#include "titlebar.h"
#include "ui_titlebar.h"
#include "debug_log.h"
#include <QPainter>
#include "setdialog.h"
#include "consoledialog.h"
#include "goopal.h"
#include "newsdialog.h"
#include "commondialog.h"
#include "datamgr.h"

TitleBar::TitleBar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TitleBar)
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;

    ui->setupUi(this);    

    setAutoFillBackground(true);
    QPalette palette;
    palette.setColor(QPalette::Background , QColor(229,229,229));
    setPalette(palette);

//    ui->transferBtn->setStyleSheet("QToolButton{background-image:url(pic2/transfer.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}");
    ui->newsBtn2->setStyleSheet(QString("QToolButton{background-image:url(%1pic2/newsNum.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;color:white;}").arg(DataMgr::getDataMgr()->getWorkPath()));
    ui->newsBtn->setStyleSheet(QString("QToolButton{background-image:url(%1pic2/news.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}").arg(DataMgr::getDataMgr()->getWorkPath()));
    ui->newsBtn->hide();
    ui->newsBtn2->hide();

    ui->minBtn->setStyleSheet(QString("QToolButton{background-image:url(%1pic2/minimize.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}"
                              "QToolButton:hover{background-image:url(%2pic2/minimize_hover.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}").arg(DataMgr::getDataMgr()->getWorkPath()).arg(DataMgr::getDataMgr()->getWorkPath()));
    ui->closeBtn->setStyleSheet(QString("QToolButton{background-image:url(%1pic2/close.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}"
                                "QToolButton:hover{background-image:url(%2pic2/close_hover.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}").arg(DataMgr::getDataMgr()->getWorkPath()).arg(DataMgr::getDataMgr()->getWorkPath()));

	ui->menuBtn->setStyleSheet(QString("QToolButton{background-image:url(%1pic2/setBtn.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}"
		"QToolButton:hover{background-image:url(%2pic2/set.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}").arg(DataMgr::getDataMgr()->getWorkPath()).arg(DataMgr::getDataMgr()->getWorkPath()));

    ui->divLineLabel->setPixmap(QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/divLine.png"));
    ui->divLineLabel->setScaledContents(true);

   // connect( Goopal::getInstance(), SIGNAL(jsonDataUpdated(QString)), this, SLOT(jsonDataUpdated(QString)));

    timer = new QTimer(this);
    connect( timer, SIGNAL(timeout()), this, SLOT(onTimeOut()));
    timer->setInterval(10000);
    timer->start();

    onTimeOut();
	setFontPixelSize();
    DLOG_QT_WALLET_FUNCTION_END;
}

TitleBar::~TitleBar()
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;

    delete ui;

    DLOG_QT_WALLET_FUNCTION_END;
}

void TitleBar::on_minBtn_clicked()
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;

//    if( Goopal::getInstance()->minimizeToTray)
	if (false)
    {
        emit tray();
    }
    else
    {  
        emit minimum();
    }

    DLOG_QT_WALLET_FUNCTION_END;
}

void TitleBar::on_closeBtn_clicked()
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;

    //if( Goopal::getInstance()->closeToMinimize)
	if (false)
    {
        emit tray();
    }
    else
    {

		if (DataMgr::getInstance()->showPrivateTips) {
			CommonDialog commonDialog(CommonDialog::OkOnly);
			commonDialog.setText(tr("Keep your private key properly before closing SelfSell Wallet"));
			commonDialog.showTips();
			bool choice = commonDialog.pop();

			if(choice) {
				DataMgr::getInstance()->showPrivateTips = false;
				DataMgr::getInstance()->getSettings()->setValue("/settings/showPrivateTips", false);

			} else {
				DataMgr::getInstance()->showPrivateTips = true;
			}
		}

		CommonDialog commonDialog(CommonDialog::OkAndCancel);
		commonDialog.setText( tr( "Close SelfSell Wallet?"));
		bool choice = commonDialog.pop();

		if( choice) {
			emit closeGOP();
		} else {
			return;
		}
    }

    DLOG_QT_WALLET_FUNCTION_END;
}

void TitleBar::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setBrush(QColor(40,46,53));
    painter.setPen(QColor(40,46,53));
    painter.drawRect(QRect(0,0,132,37));
}

void TitleBar::setFontPixelSize()
{
	QFont font = ui->consoleBtn->font();
	font.setPixelSize(12);
	ui->consoleBtn->setFont(font);
}
void TitleBar::on_menuBtn_clicked()
{
//    SetDialog* setDialog = new SetDialog;
//    Goopal::getInstance()->currentDialog = setDialog;
//    connect(setDialog,SIGNAL(settingSaved()),this,SLOT(saved()));
//    connect(setDialog,SIGNAL(destroyed()),this,SIGNAL(hideShadowWidget()));
//    emit showShadowWidget();
//    setDialog->setModal(true);
//    setDialog->setAttribute(Qt::WA_DeleteOnClose);
//    setDialog->show();

    SetDialog setDialog;
    connect(&setDialog,SIGNAL(settingSaved()),this,SLOT(saved()));
    connect(&setDialog,SIGNAL(resync()),this,SIGNAL(resync()));
    connect(&setDialog,SIGNAL(scan()),this,SIGNAL(scan()));
    setDialog.pop();

}

void TitleBar::saved()
{
    emit settingSaved();
}

void TitleBar::retranslator()
{
    ui->retranslateUi(this);
}

void TitleBar::jsonDataUpdated(QString id)
{
	/*
    if( id == "id_blockchain_list_pending_transactions")
    {
        QString pendingTransactions = Goopal::getInstance()->jsonDataValue(id);
        // 查询一遍 config中记录的交易ID
        mutexForConfigFile.lock();
        Goopal::getInstance()->configFile->beginGroup("/recordId");
        QStringList keys = Goopal::getInstance()->configFile->childKeys();
        Goopal::getInstance()->configFile->endGroup();

        int numOfNews = 0;
        foreach (QString key, keys)
        {
            if( Goopal::getInstance()->configFile->value("/recordId/" + key).toInt() == 2)
            {
                // 失效的交易
                continue;
            }

            if( !pendingTransactions.contains(key))  // 如果不在pending区, 看看是否在链上
            {

//                RpcThread* rpcThread = new RpcThread;
//                connect(rpcThread,SIGNAL(finished()),rpcThread,SLOT(deleteLater()));
//                //    rpcThread->setLogin("a","b");
//                rpcThread->setWriteData( toJsonFormat( "id_blockchain_get_pretty_transaction_" + key, "blockchain_get_pretty_transaction", QStringList() << key << "true" ));
//                rpcThread->start();
                Goopal::getInstance()->postRPC( toJsonFormat( "id_blockchain_get_pretty_transaction_" + key, "blockchain_get_pretty_transaction", QStringList() << key << "true" ));
            }

            if( Goopal::getInstance()->configFile->value("/recordId/" + key).toInt() == 1)
            {
                numOfNews++;
                ui->newsBtn2->setText( QString::number( numOfNews));
                ui->newsBtn2->show();
                ui->newsBtn->show();
            }
        }
        mutexForConfigFile.unlock();

        if( numOfNews == 0)
        {
            ui->newsBtn->hide();
            ui->newsBtn2->hide();
            ui->newsBtn2->setText( QString::number( numOfNews));
        }

        return;
    }

    if( id.mid(0,36) == "id_blockchain_get_pretty_transaction")
    {

        QString result = Goopal::getInstance()->jsonDataValue(id);

        if( result.mid(0,22).contains("exception") || result.mid(0,22).contains("error"))
        {
            // 若不在pending区也不在链上  则为失效交易  recordId置为2
            mutexForConfigFile.lock();

            Goopal::getInstance()->configFile->setValue("/recordId/" + id.right(40), 2);

            mutexForConfigFile.unlock();

            return;
        }
        else   //  如果已经被打包进区块，则将config中记录置为1
        {
            mutexForConfigFile.lock();

            Goopal::getInstance()->configFile->setValue("/recordId/" + id.right(40), 1);

            mutexForConfigFile.unlock();
        }

        return;
    }
	*/
}

void TitleBar::onTimeOut()
{
//    RpcThread* rpcThread = new RpcThread;
//    connect(rpcThread,SIGNAL(finished()),rpcThread,SLOT(deleteLater()));
//    rpcThread->setWriteData( toJsonFormat( "id_blockchain_list_pending_transactions", "blockchain_list_pending_transactions", QStringList() << "" ));
//    rpcThread->start();


//    Goopal::getInstance()->postRPC( toJsonFormat( "id_blockchain_list_pending_transactions", "blockchain_list_pending_transactions", QStringList() << "" ));

	/*
   Goopal::getInstance()->configFile->beginGroup("/applyingForDelegateAccount");
    QStringList keys = Goopal::getInstance()->configFile->childKeys();
    Goopal::getInstance()->configFile->endGroup();
    foreach (QString key, keys)
    {
        // 如果申请代理的recordId 被删除了 或者被确认了（=1）或者失效了（=2） 则 删除applyingForDelegateAccount的记录
        if( !Goopal::getInstance()->configFile->contains("/recordId/" + Goopal::getInstance()->configFile->value("/applyingForDelegateAccount/" + key).toString())
            ||  Goopal::getInstance()->configFile->value("/recordId/" + Goopal::getInstance()->configFile->value("/applyingForDelegateAccount/" + key).toString()).toInt() != 0 )
        {
            Goopal::getInstance()->configFile->remove("/applyingForDelegateAccount/" + key);
        }
    }

    Goopal::getInstance()->configFile->beginGroup("/registeringAccount");
    keys = Goopal::getInstance()->configFile->childKeys();
    Goopal::getInstance()->configFile->endGroup();
    foreach (QString key, keys)
    {
        // 如果注册升级的recordId 被删除了 或者被确认了（=1）或者失效了（=2） 则 删除registeringAccount的记录
        if( !Goopal::getInstance()->configFile->contains("/recordId/" + Goopal::getInstance()->configFile->value("/registeringAccount/" + key).toString())
            ||  Goopal::getInstance()->configFile->value("/recordId/" + Goopal::getInstance()->configFile->value("/registeringAccount/" + key).toString()).toInt() != 0 )
        {
            Goopal::getInstance()->configFile->remove("/registeringAccount/" + key);
        }
    }
	*/
}

void TitleBar::on_newsBtn_clicked()
{
    if( ui->newsBtn2->text().toInt() == 0)
    {
        CommonDialog commonDialog(CommonDialog::OkOnly);
        commonDialog.setText( tr("No news!") );
        commonDialog.pop();
        return;
    }

    NewsDialog newsDialog;
    connect(&newsDialog, SIGNAL(showAccountPage(QString)), this, SIGNAL(showAccountPage(QString)));
//    emit showShadowWidget();
    newsDialog.pop();
//    emit hideShadowWidget();
    onTimeOut();
}

void TitleBar::on_newsBtn2_clicked()
{
    on_newsBtn_clicked();
}

void TitleBar::on_consoleBtn_clicked()
{
//    ConsoleDialog* consoleDialog = new ConsoleDialog;
//    Goopal::getInstance()->currentDialog = consoleDialog;
//    connect(consoleDialog,SIGNAL(destroyed()),this,SIGNAL(hideShadowWidget()));
//    emit showShadowWidget();
//    consoleDialog->setModal(true);
//    consoleDialog->setAttribute(Qt::WA_DeleteOnClose);
//    consoleDialog->show();

    ConsoleDialog consoleDialog;
    consoleDialog.pop();

}
