#include <QDebug>
#include <QPainter>
#include <QTimer>
#include <QMouseEvent>
#include <QScrollBar>
#include <QTextItem>
#include <QtCore/qmath.h>

#include "mainpage.h"
#include "ui_mainpage.h"
#include "goopal.h"
#include "debug_log.h"
#include "namedialog.h"
#include "deleteaccountdialog.h"
#include "identitycellwidget.h"
#include "accountcellwidget.h"
#include "exportdialog.h"
#include "importdialog.h"
#include "commondialog.h"
#include "showcontentdialog.h"
#include "incomecellwidget.h"
#include "dialog/chooseexportdialog.h"
#include "control/rightclickmenudialog.h"
#include "control/chooseaddaccountdialog.h"
#include "dialog/renamedialog.h"
#include "control/accountdetailwidget.h"
#include "waitingpage.h"

#include "rpcmgr.h"
#include "datamgr.h"

MainPage::MainPage(QWidget *parent) :
    QWidget(parent),
    hasDelegateOrNot(false),
    refreshOrNot(true),
    detailOrNot(false),
    currentAccountIndex(-1),
    waitingPage(nullptr),
    ui(new Ui::MainPage)
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;

    ui->setupUi(this);

    setAutoFillBackground(true);
    QPalette palette;
    palette.setColor(QPalette::Background, QColor(255,255,255));
    setPalette(palette);

    ui->accountTableWidget->installEventFilter(this);
    ui->accountTableWidget->setSelectionMode(QAbstractItemView::NoSelection);
    ui->accountTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->accountTableWidget->setFocusPolicy(Qt::NoFocus);
    ui->accountTableWidget->setShowGrid(false);
    ui->accountTableWidget->setFrameShape(QFrame::NoFrame);
    ui->accountTableWidget->setMouseTracking(true);
    previousColorRow = 0;
    ui->accountTableWidget->horizontalHeader()->setSectionsClickable(false);
    ui->accountTableWidget->horizontalHeader()->setStyleSheet("QHeaderView{background:transparent;}"
                                                              "QHeaderView::section{background-color:white;border:0px solid #ffffff;}");
    ui->accountTableWidget->horizontalHeader()->setFixedHeight(35);
    ui->accountTableWidget->horizontalHeader()->setVisible(true);
    ui->accountTableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);

    for( int i = 0; i < 3; i++) {
        QTableWidgetItem* columnHeaderItem = ui->accountTableWidget->horizontalHeaderItem(i);// 获得水平方向表头的Item对象
        columnHeaderItem->setTextColor(QColor(134,134,134)); // 设置文字颜色
    }

    ui->accountTableWidget->setColumnWidth(0,152);
    ui->accountTableWidget->setColumnWidth(1,431);
    ui->accountTableWidget->setColumnWidth(2,178);

	QString language = DataMgr::getInstance()->getSettings()->value("/settings/language").toString();
    if( language.isEmpty()) {
        retranslator("English");
    } else {
        retranslator(language);
    }

    // 由于首页是第一个页面，第一次打开先等待x秒钟 再 updateAccountList
    QTimer::singleShot(500, this, SLOT(refresh()));

    ui->accountTableWidget->hide();

    ui->loadingWidget->setGeometry(0,93,827,448);
    ui->loadingLabel->move(314,101);

    ui->initLabel->hide();

    detailWidget = new AccountDetailWidget( this);
    connect( detailWidget, SIGNAL(back()), this, SLOT(hideDetailWidget()));
    connect( detailWidget, SIGNAL(showAccountPage(QString)), this, SIGNAL(openAccountPage(QString)));
    connect( detailWidget, SIGNAL(showTransferPage(QString)), this, SIGNAL(showTransferPage(QString)));
    connect( detailWidget, SIGNAL(upgrade(QString)), this, SIGNAL(showUpgradePage(QString)));
    connect( detailWidget, SIGNAL(applyDelegate(QString)), this, SIGNAL(showApplyDelegatePage(QString)));

    detailWidget->move(827,93);
    detailWidget->raise();
    detailWidget->show();

    QLabel* addAccountBtnLabel = new QLabel(ui->addAccountBtn);
    addAccountBtnLabel->setGeometry(23,12,12,12);
    //addAccountBtnLabel->setPixmap(QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/addAccount_icon.png"));
    //saddAccountBtnLabel->show();
    //ui->addAccountBtn->setStyleSheet("QToolButton{background-color:#469cfc;color:#ffffff;border:0px solid rgb(64,153,255);border-radius:3px;}"
    //                           "QToolButton:hover{background-color:#62a9f8;}");
	ui->addAccountBtn->setStyleSheet("QToolButton{background-color:#f49f17;color:#ffffff;border:0px solid rgb(64,153,255);border-radius:3px;}"
		"QToolButton:hover{background-color:#ffc362;}");

	connect(DataMgr::getInstance(), &DataMgr::onWalletAccountCreate, this, &MainPage::walletAccountCreate);
	connect(DataMgr::getInstance(), &DataMgr::onBalance, this, &MainPage::totalBalance);
    ui->label->hide();
	setFontPixelSize();
    DLOG_QT_WALLET_FUNCTION_END;
}

MainPage::~MainPage()
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;

    if(waitingPage != nullptr)
        delete waitingPage;

    qDebug() << "Main Page destroy";
    delete ui;

    DLOG_QT_WALLET_FUNCTION_END;
}

QString toThousandFigure( int);

void MainPage::importAccount()
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;

    ImportDialog importDialog;
    connect(&importDialog,SIGNAL(accountImported()),this,SLOT(refresh()));
    importDialog.pop();

    emit refreshAccountInfo();
    DLOG_QT_WALLET_FUNCTION_END;
}

void MainPage::addAccount()
{
    NameDialog nameDialog;
    QString name = nameDialog.pop();

    if (!name.isEmpty()) {
        DataMgr::getInstance()->walletAccountCreate(name);
        newAccountName = name;

        waitingPage = new WaitingPage(Goopal::getInstance()->mainFrame);
        waitingPage->setAttribute(Qt::WA_DeleteOnClose);
        waitingPage->move(0, 0);
        waitingPage->show();
    }
}

void MainPage::updateAccountList()
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;
	
	QStringList accountList = DataMgr::getInstance()->getAccountInfo()->keys();
    if( accountList.size() == 0)  // 如果还没有账户
    {
        ui->initLabel->show();
        ui->accountTableWidget->hide();
        ui->loadingWidget->hide();
        return;
    } else {
        ui->initLabel->hide();
        ui->accountTableWidget->show();
        ui->loadingWidget->show();
    }

    int posOfNormalAccount   = 0;
	int size = DataMgr::getInstance()->getAccountInfo()->size();

	ui->accountTableWidget->setRowCount(size);

	for( int i = 0; i < size; i++) {
        QString accountName = accountList.at(i); // 如果是普通账户
        int rowNum = 0;
        rowNum = posOfNormalAccount;
		posOfNormalAccount++;

        ui->accountTableWidget->setRowHeight(rowNum,57);
		AccountCellWidget *accountCellWidget = static_cast<AccountCellWidget*>(ui->accountTableWidget->cellWidget(rowNum, 0)); 
		if (accountCellWidget == NULL){
			accountCellWidget = new AccountCellWidget(rowNum,0);
			connect(accountCellWidget, SIGNAL(cellEnter(int,int)), this, SLOT(on_accountTableWidget_cellEntered(int,int)));
			accountCellWidget->setName(accountName);
			ui->accountTableWidget->setCellWidget(rowNum,0, accountCellWidget);
		}
		accountCellWidget->setName(accountName);

        QTableWidgetItem* item1= ui->accountTableWidget->itemAt(rowNum, 1);
		QString address = DataMgr::getInstance()->getAccountInfo()->value(accountName).address;
		if (item1 == NULL) {
			item1 = new QTableWidgetItem(address);
			item1->setText(address);
			ui->accountTableWidget->setItem(rowNum, 1, item1);
		}
		item1->setText(address);
		
        QTableWidgetItem* item2= ui->accountTableWidget->itemAt(rowNum, 2);

		QString balance;
		//if (DataMgr::getInstance()->getCurrentAssetType() == COMMONASSET) {
			//balance = DataMgr::getInstance()->getAccountInfo()->value(accountName).balance;
			balance = DataMgr::getInstance()->walletCurBalanceByAccountname(accountName);
            QString tempBalance = balance.mid(0, balance.indexOf(' '));
            tempBalance.remove(',');
            double dValue = tempBalance.toDouble();
            if (dValue < 0.00000001 && dValue > -0.00000001)
            {
                balance = "0";
            }
            else
            {
                balance.remove(" ACT");
            }
		//} else {
		//	balance = DataMgr::getInstance()->getAccountTokenBalance(accountName, DataMgr::getInstance()->getCurrentAssetType());
			//balance = balance +  " " + DataMgr::getInstance()->getCurrentAssetType();
		//}

        double balanceValue = balance.toDouble();
        QString balanceNew = checkZero(balanceValue);
        if (item2 == NULL)
        {
            item2 = new QTableWidgetItem(balanceNew);
            item2->setText(balanceNew);
            ui->accountTableWidget->setItem(rowNum, 2, item2);
        }
        item2->setText(balanceNew);
        qDebug() << "MainPage" << balanceNew;

        if( rowNum == currentAccountIndex)
        {
            AccountCellWidget* cellWidget = static_cast<AccountCellWidget*>( ui->accountTableWidget->cellWidget(currentAccountIndex,0) );
            cellWidget->setBackgroundColor( 245,248,248,150);
            for( int i = 1; i < 3; i++)
            {                                                
                ui->accountTableWidget->item(currentAccountIndex,i)->setBackgroundColor(QColor(245,248,248,150));
            }
        }
    }
	ui->accountTableWidget->show();
    ui->loadingWidget->hide();
	
    DLOG_QT_WALLET_FUNCTION_END;
}

void MainPage::on_addAccountBtn_clicked()
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;

    ChooseAddAccountDialog* chooseAddAccountDialog = new ChooseAddAccountDialog(this);
    chooseAddAccountDialog->move( ui->addAccountBtn->mapToGlobal( QPoint(0,-75) ) );
    connect( chooseAddAccountDialog, SIGNAL(newAccount()), this, SLOT( addAccount()));
    connect( chooseAddAccountDialog, SIGNAL(importAccount()), this, SLOT( importAccount()));
    //chooseAddAccountDialog->exec();//zxlrun
    chooseAddAccountDialog->setModal(false);
    chooseAddAccountDialog->show();


    DLOG_QT_WALLET_FUNCTION_END;
}

void MainPage::on_accountTableWidget_cellClicked(int row, int column)
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;

    AccountCellWidget* cellWidget = static_cast<AccountCellWidget*>( ui->accountTableWidget->cellWidget(row,0) );
    showDetailWidget(cellWidget->accountName);

    if( currentAccountIndex >= 0 && currentAccountIndex != row) {
        AccountCellWidget* cellWidget2 = static_cast<AccountCellWidget*>( ui->accountTableWidget->cellWidget(currentAccountIndex,0) );
        cellWidget2->setBackgroundColor( 255,255,255);
        for( int i = 1; i < 3; i++) {
            ui->accountTableWidget->item(currentAccountIndex,i)->setBackgroundColor(QColor(255,255,255));
        }
    }

    cellWidget->setBackgroundColor( 245,248,248,150);

    for( int i = 1; i < 3; i++) {
        ui->accountTableWidget->item(row,i)->setBackgroundColor(QColor(245,248,248,150));
    }

    currentAccountIndex = row;

    DLOG_QT_WALLET_FUNCTION_END;
}


void MainPage::on_accountTableWidget_cellEntered(int row, int column)
{
    if( !detailOrNot)  // 如果不显示详情
    {
        if( ui->accountTableWidget->rowCount() > 0) {
            AccountCellWidget* cellWidget = static_cast<AccountCellWidget*>( ui->accountTableWidget->cellWidget(previousColorRow,0) );
            cellWidget->setBackgroundColor( 255,255,255);
            for( int i = 1; i < 3; i++) {
                ui->accountTableWidget->item(previousColorRow,i)->setBackgroundColor(QColor(255,255,255));
            }
        }

        AccountCellWidget* cellWidget = static_cast<AccountCellWidget*>( ui->accountTableWidget->cellWidget(row,0) );
        cellWidget->setBackgroundColor( 245,248,248);
        for( int i = 1; i < 3; i++) {
            ui->accountTableWidget->item(row,i)->setBackgroundColor(QColor(245,248,248));
        }

        previousColorRow = row;
    } else {
        if( ui->accountTableWidget->rowCount() > 0 && currentAccountIndex != previousColorRow ) {
            AccountCellWidget* cellWidget = static_cast<AccountCellWidget*>( ui->accountTableWidget->cellWidget(previousColorRow,0) );
            cellWidget->setBackgroundColor( 255,255,255);
            for( int i = 1; i < 3; i++) {
                ui->accountTableWidget->item(previousColorRow,i)->setBackgroundColor(QColor(255,255,255));
            }
        }

        if( currentAccountIndex != row ) {
            AccountCellWidget* cellWidget = static_cast<AccountCellWidget*>( ui->accountTableWidget->cellWidget(row,0) );
            cellWidget->setBackgroundColor( 245,248,248);
            for( int i = 1; i < 3; i++) {
                ui->accountTableWidget->item(row,i)->setBackgroundColor(QColor(245,248,248));
            }
        }

        previousColorRow = row;
    }
}

int tableWidgetPosToRow(QPoint pos, QTableWidget* table);

void MainPage::refresh()
{
    qDebug() << "mainpage refresh";
    if( !refreshOrNot) return;

    updateAccountList();
    updateTotalBalance();
    updateDelegateSalary();

    setAssertType();

    detailWidget->setAccount( detailWidget->accountName);
}

void MainPage::walletAccountCreate(QString result)
{
    if(waitingPage != nullptr)
    {
        delete waitingPage;
        waitingPage = nullptr;
    }

	if (result.startsWith("\"result\":"))   // 创建账号成功
	{
		CommonDialog commonDialog(CommonDialog::OkAndCancel);
		commonDialog.setText( tr( "Add account success, save private key now?"));
		bool choice = commonDialog.pop();
        if (choice) {
			ExportDialog exportDialog(newAccountName);
			exportDialog.pop();
		}
		emit newAccount();
	} else if (result.startsWith("\"error\":")) {

    }
}

void MainPage::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setPen(QPen(QColor(207,207,207),Qt::SolidLine));
    painter.setBrush(QBrush(QColor(229,229,229),Qt::SolidPattern));
    painter.drawRect(-1,-1,828,92);

}

void MainPage::retranslator(QString language)
{
    ui->retranslateUi(this);

    if( language == "Simplified Chinese") {
		ui->addAccountBtn->setStyleSheet(QString("QToolButton{background-image:url(%1pic2/addAccount.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;background-color:rgb(229,229,229);}"
			"QToolButton:hover{background-image:url(%2pic2/addAccount_hover.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;background-color:rgb(229,229,229);}").arg(DataMgr::getDataMgr()->getWorkPath()).arg(DataMgr::getDataMgr()->getWorkPath()));

    }else if( language == "English") {
        ui->addAccountBtn->setStyleSheet(QString("QToolButton{background-image:url(%1pic2/addAccount_En.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;background-color:rgb(229,229,229);}"
                                         "QToolButton:hover{background-image:url(%2pic2/addAccount_hover_En.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;background-color:rgb(229,229,229);}").arg(DataMgr::getDataMgr()->getWorkPath()).arg(DataMgr::getDataMgr()->getWorkPath()));

    }
}

void MainPage::jsonDataUpdated(QString id)
{
    if( id.mid(0,37) == "id_wallet_delegate_pay_balance_query_")
    {
		QString result;// = Goopal::getInstance()->jsonDataValue(id);

        int pos = result.indexOf("\"pay_balance\":") + 14;
        QString payBal = result.mid( pos, result.indexOf("}", pos) - pos );
        payBal.remove("\"");
//        Goopal::getInstance()->delegateSalaryMap.insert(id.mid(37), payBal.toInt() / 100000.0);
        return;
    }

    if( id == "id_wallet_delegate_withdraw_pay")
    {
		QString result = ""; //Goopal::getInstance()->jsonDataValue(id);
        if( result.mid(0,9) == "\"result\":")
        {
            CommonDialog commonDialog(CommonDialog::OkOnly);
            commonDialog.setText( tr("Withdraw succeeded!") );
            commonDialog.pop();

            refresh();
        }
        else if( result.mid(0,8) == "\"error\":")
        {
            CommonDialog commonDialog(CommonDialog::OkOnly);
            commonDialog.setText( tr("Withdraw failed!") );
            commonDialog.pop();
        }

        return;
    }

}

void MainPage::totalBalance(QString result)
{
    double totalBalance = 0;
    int pos = result.indexOf("[[0,") + 4;
    while (pos != -1 + 4) {
        QString amount = result.mid( pos, result.indexOf("]", pos ) - pos ) ;
        amount.remove("\""); // 太大的数字可能会用字符串表示，加了引号
        totalBalance += amount.toDouble() / 100000;
        pos = result.indexOf("[[0,", pos) + 4;
    }
    ui->totalBalanceLabel->setText( "<body><font style=\"font-size:26px\" color=#000000>" + checkZero(totalBalance)
                                    + "</font><font style=\"font-size:12px\" color=#000000>"
                                    + " " + DataMgr::getInstance()->getCurrentAssetType() +"</font></body>" );
    ui->totalBalanceLabel->adjustSize();
    ui->totalBalanceLabel->move(772-ui->totalBalanceLabel->width(), 30);
    ui->label->move(682-ui->totalBalanceLabel->width(),42);
    ui->label->show();
}

void MainPage::updateTotalBalance()
{
    double totalBalance = 0;
	foreach(CommonAccountInfo account, *(DataMgr::getInstance()->getAccountInfo())){
		QString balance;
		balance = DataMgr::getInstance()->walletCurBalanceByAccountinfo(account);
		//balance = balance.mid(0, balance.indexOf(' '));
		//balance.remove(',');
		totalBalance += balance.toDouble();
	}
	/*if (DataMgr::getCurrentAssetType() == COMMONASSET) {

        foreach (CommonAccountInfo account , *(DataMgr::getInstance()->getAccountInfo())){
            QString balance;
            balance = account.balance;
            balance = balance.mid(0, balance.indexOf(' '));
            balance.remove(',');
            totalBalance += balance.toDouble();
        }
//zxlfor
//        QMap<QString, CommonAccountInfo>* accountInfo = DataMgr::getInstance()->getAccountInfo();
//        for(QMap<QString, CommonAccountInfo>::iterator iter = accountInfo->begin();
//            iter != accountInfo->end();
//            ++iter) {
//            QString balance;
//            balance = iter->balance;
//            balance = balance.mid(0, balance.indexOf(' '));
//            balance.remove(',');
//            totalBalance += balance.toDouble();
//        }
	} else {
        foreach (CommonAccountInfo account , *(DataMgr::getInstance()->getAccountInfo())){
            QString balance = DataMgr::getInstance()->getAccountTokenBalance(account.name, DataMgr::getCurrentAssetType());
            totalBalance += balance.toDouble();
        }
//zxlfor
//        QMap<QString, CommonAccountInfo>* accountInfo = DataMgr::getInstance()->getAccountInfo();
//        for(QMap<QString, CommonAccountInfo>::iterator iter = accountInfo->begin();
//            iter != accountInfo->end();
//            ++iter) {
//            QString balance = DataMgr::getInstance()->getAccountTokenBalance(iter->name, DataMgr::getCurrentAssetType());
//            totalBalance += balance.toDouble();
//        }
	}*/

    ui->totalBalanceLabel->setText("<body><font style=\"font-size:26px\" color=#000000>" + checkZero(totalBalance)
                                   + "</font><font style=\"font-size:12px\" color=#000000>"
                                    +" "+ DataMgr::getInstance()->getCurrentAssetType() +"</font></body>" );
    ui->totalBalanceLabel->adjustSize();
    ui->totalBalanceLabel->move(772-ui->totalBalanceLabel->width(), 30);
    ui->label->move(682-ui->totalBalanceLabel->width(),42);
    ui->label->show();

 } 
void MainPage::updateDelegateSalary()
{
	/*
    foreach (QString name, Goopal::getInstance()->delegateAccountList)
    {
        Goopal::getInstance()->postRPC( toJsonFormat( "id_wallet_delegate_pay_balance_query_" + name, "wallet_delegate_pay_balance_query", QStringList() << name ));
    }
	*/
}

void MainPage::updatePending()
{

    DLOG_QT_WALLET_FUNCTION_BEGIN;
	/*
    mutexForPending.lock();

    if( !Goopal::getInstance()->pendingFile->open(QIODevice::ReadWrite))
	if (true)
    {
        qDebug() << "pending.dat not exist";
        return;
    }

    QByteArray ba = QByteArray::fromBase64( Goopal::getInstance()->pendingFile->readAll());
    QString str(ba);
    QStringList strList = str.split(";");
    strList.removeLast();

    mutexForAddressMap.lock();
	QStringList keys = {""};// Goopal::getInstance()->addressMap.keys();
    mutexForAddressMap.unlock();

    mutexForConfigFile.lock();
    //Goopal::getInstance()->configFile->beginGroup("recordId");
    QStringList recordKeys = Goopal::getInstance()->configFile->childKeys();
	//Goopal::getInstance()->configFile->endGroup();


    foreach (QString ss, strList)
    {
        QStringList sList = ss.split(",");

        if( !keys.contains( sList.at(1)) && keys.size() > 0)   // 如果账号被删除了， 删掉pending 中的记录   keys.size() 防止刚启动 addressmap为空
        {
            strList.removeAll( ss);
            continue;
        }
        // 如果config中recordId会被置为1， 则删除该记录
        if( Goopal::getInstance()->configFile->value("recordId/" + sList.at(0)).toInt() != 0 )
        {
            strList.removeAll( ss);
            continue;
        }

        // 如果config中recordId被删除了， 则删除该记录
        if( !Goopal::getInstance()->configFile->contains("recordId/" + sList.at(0)))
        {
            strList.removeAll( ss);
            continue;
        }

    }
    mutexForConfigFile.unlock();

    ba.clear();
    foreach (QString ss, strList)
    {
        ba += QString( ss + ";").toUtf8();
    }
    ba = ba.toBase64();
    //Goopal::getInstance()->pendingFile->resize(0);
    QTextStream ts(Goopal::getInstance()->pendingFile);
    ts << ba;
    //Goopal::getInstance()->pendingFile->close();

    mutexForPending.unlock();
	*/
    DLOG_QT_WALLET_FUNCTION_END;
}

//  tablewidget 从 pos 获取 item（每行第0个）
int tableWidgetPosToRow(QPoint pos, QTableWidget* table)
{
    int headerHeight = 35;
    int rowHeight = 57;

    // 获得当前滚动条的位置
    int scrollBarValue = table->verticalScrollBar()->sliderPosition();

    if( pos.y() < 35 || pos.y() > table->height()) {
        return -1;
    } else {
        int rowCount = qFloor( (pos.y() - headerHeight) / rowHeight) + scrollBarValue;
        return rowCount;
    }

}

bool MainPage::eventFilter(QObject *watched, QEvent *e)
{
    if( watched == ui->accountTableWidget) {
        if( e->type() == QEvent::ContextMenu) {
            QContextMenuEvent* contextMenuEvent = static_cast<QContextMenuEvent*>(e);
            int row = tableWidgetPosToRow(contextMenuEvent->pos() , ui->accountTableWidget);
            if( row == -1)    return false;

            AccountCellWidget* cellWidget = static_cast<AccountCellWidget*>(ui->accountTableWidget->cellWidget(row,0));

            if( cellWidget != NULL) {
                QString name = cellWidget->accountName;
                RightClickMenuDialog* rightClickMenuDialog = new RightClickMenuDialog( name, this);
                connect( rightClickMenuDialog, SIGNAL(transferFromAccount(QString)), this, SIGNAL(showTransferPage(QString)));
                connect( rightClickMenuDialog, SIGNAL(renameAccount(QString)), this, SLOT(renameAccount(QString)));
                connect( rightClickMenuDialog, SIGNAL(deleteAccount(QString)), this, SLOT(deleteAccount(QString)));

                QPoint pos = cellWidget->pos();
                QSize size = cellWidget->size();
                QPoint nPos(pos.x() + size.width() + ui->accountTableWidget->columnWidth(1)*0.6f, pos.y() + ui->accountTableWidget->rowHeight(row)*1.2f);
                rightClickMenuDialog->exec(ui->accountTableWidget->mapToGlobal(nPos));

                return true;
            }
        }
    }

    return QWidget::eventFilter(watched,e);
}

void MainPage::mousePressEvent(QMouseEvent *event)
{
    qDebug() << __FUNCTION__ << event;
}

void MainPage::setFontPixelSize()
{
	QFont font = ui->accountListLabel->font();
	font.setPixelSize(22);
	ui->accountListLabel->setFont(font);

	font = ui->label->font();
	font.setPixelSize(16);
	ui->label->setFont(font);

	font = ui->initLabel->font();
	font.setPixelSize(16);
	ui->initLabel->setFont(font);

	font = ui->loadingLabel->font();
	font.setPixelSize(16);
	ui->loadingLabel->setFont(font);

	font = ui->addAccountBtn->font();
	font.setPixelSize(16);
	ui->addAccountBtn->setFont(font);
}

void MainPage::showExportDialog(QString name)
{
    ExportDialog exportDialog(name);
    exportDialog.pop();
}

void MainPage::stopRefresh()
{
    refreshOrNot = false;
//    emit showShadowWidget();
}

void MainPage::startRefresh()
{
    refreshOrNot = true;
}

void MainPage::withdrawSalary(QString name, QString salary)
{
//    double amount = salary.toDouble() - 0.01;
//    if( amount > 0.000001)
//    {
//        CommonDialog commonDialog(CommonDialog::OkAndCancel);
//        commonDialog.setText( tr("Sure to withdraw your salary?"));
//        if( commonDialog.pop())
//        {
//            Goopal::getInstance()->postRPC( toJsonFormat( "id_wallet_delegate_withdraw_pay", "wallet_delegate_withdraw_pay",
//                                                          QStringList() << name <<  name << QString::number(amount) ));
//        }
//    }

}

void MainPage::renameAccount(QString name)
{
    RenameDialog renameDialog;
    QString newName = renameDialog.pop();
	
    if( !newName.isEmpty() && newName != name)
    {
		//TODO
//        Goopal::getInstance()->write("wallet_account_rename " + name + " " + newName + '\n');
		QString result = "";//Goopal::getInstance()->read(Goopal::getInstance()->currentProcess());
        qDebug() << result;
        if( result.mid(0,2) == "OK")
        {
			QSettings* setting = DataMgr::getInstance()->getSettings();
			setting->beginGroup("/accountInfo");
            QStringList keys = setting->childKeys();
            foreach (QString key, keys)
            {
                if( setting->value(key) == name)
                {
                    setting->setValue(key, newName);
                    break;
                }
            }
            setting->endGroup();
			/*
            Goopal::getInstance()->balanceMapInsert( newName, Goopal::getInstance()->balanceMapValue(name));
            Goopal::getInstance()->balanceMapRemove(name);
            Goopal::getInstance()->registerMapInsert( newName, Goopal::getInstance()->registerMapValue(name));
            Goopal::getInstance()->registerMapRemove(name);
            Goopal::getInstance()->addressMapInsert( newName, Goopal::getInstance()->addressMapValue(name));
            Goopal::getInstance()->addressMapRemove(name);
			*/
            detailWidget->accountName = newName;
            emit newAccount();

        }
        else
        {
            return;
        }
    }

}

void MainPage::deleteAccount(QString name)
{
    DeleteAccountDialog deleteACcountDialog( name);
    if( deleteACcountDialog.pop())
    {
        previousColorRow = 0;
        currentAccountIndex = -1;
        hideDetailWidget();
        refresh();
    }
}

void MainPage::showDetailWidget(QString name)
{
    detailOrNot = true;

    //ui->accountTableWidget->setGeometry(50,124,245,263);
	ui->accountTableWidget->setGeometry(QRect(50, 124, 245, 291));
    ui->accountTableWidget->setColumnWidth(0,131);
    ui->accountTableWidget->setColumnWidth(1,1);
    ui->accountTableWidget->setColumnWidth(2,103);

    //ui->addAccountBtn->move(153,422);
	ui->addAccountBtn->move(153, 450);

    detailWidget->setAccount(name);
    detailWidget->dynamicShow();
}

void MainPage::hideDetailWidget()
{
    detailOrNot = false;

    //ui->accountTableWidget->setGeometry(50,124,770,263);
	ui->accountTableWidget->setGeometry(QRect(50, 124, 770, 291));
    ui->accountTableWidget->setColumnWidth(0,152);
    ui->accountTableWidget->setColumnWidth(1,431);
    ui->accountTableWidget->setColumnWidth(2,178);

    ui->addAccountBtn->move(670,450);
	//addAccountBtn->setGeometry(QRect(670, 450, 120, 36));

    detailWidget->dynamicHide();
}

void MainPage::setAssertType()
{
    QTableWidgetItem *thirdHeadItem = ui->accountTableWidget->horizontalHeaderItem(2);
    if (NULL != thirdHeadItem)//获取表头
    {
        QString curText = thirdHeadItem->text();
        int sep = curText.indexOf('/');
        if (sep > 0)//根据资产类表头型设置
        {
            thirdHeadItem->setText(curText.left(sep + 1) + DataMgr::getInstance()->getCurrentAssetType());
        }
    }
}

