//#include "identitycellwidget.h"
//#include "ui_identitycellwidget.h"
//#include "goopal.h"
//#include "rpcthread.h"
//#include "commondialog.h"
//#include "chooseupgradedialog.h"
//#include <QDebug>

//IdentityCellWidget::IdentityCellWidget(QString name, QWidget *parent) :
//    QWidget(parent),
//    accountName(name),
//    produceOrNot(false),
//    ui(new Ui::IdentityCellWidget)
//{
//    ui->setupUi(this);

//    connect( Goopal::getInstance(), SIGNAL(jsonDataUpdated(QString)), this, SLOT(jsonDataUpdated(QString)));

//    ui->produceBtn->hide();

//    retranslator();

//    ui->upgradeBtn->setToolTip( tr("Click to become a delegate or register."));
//    ui->alreadyUpgradeBtn->setToolTip( tr("Click to become a delegate."));

//    // 如果是已注册账户
//    if( Goopal::getInstance()->registerMapValue(accountName) != "NO"
//            && !Goopal::getInstance()->registerMapValue(accountName).isEmpty())
//    {
//        // 如果是代理
//        if( Goopal::getInstance()->delegateAccountList.indexOf(accountName) != -1)
//        {
//            ui->alreadyUpgradeBtn->hide();
//            ui->upgradeBtn->hide();

////            RpcThread* rpcThread = new RpcThread;
////            connect(rpcThread,SIGNAL(finished()),rpcThread,SLOT(deleteLater()));
////            rpcThread->setLogin("a","b");
////            rpcThread->setWriteData( toJsonFormat( "id_wallet_get_delegate_statue_" + accountName, "wallet_get_delegate_statue", QStringList() << accountName ));
////            rpcThread->start();
//            Goopal::getInstance()->postRPC( toJsonFormat( "id_wallet_get_delegate_statue_" + accountName, "wallet_get_delegate_statue", QStringList() << accountName ));

//            if( !Goopal::getInstance()->jsonDataValue("id_wallet_get_delegate_statue_" + accountName).isEmpty())
//            {
//                jsonDataUpdated("id_wallet_get_delegate_statue_" + accountName);
//            }


//        }
//        else // 如果不是代理
//        {
//            ui->delegateLabel->hide();
//            ui->upgradeBtn->hide();
//        }
//    }
//    else  // 如果账户未升级
//    {
//        ui->alreadyUpgradeBtn->hide();
//        ui->delegateLabel->hide();
//    }



//}

//IdentityCellWidget::~IdentityCellWidget()
//{
//    delete ui;
//}

//void IdentityCellWidget::jsonDataUpdated(QString id)
//{
//    if( id != "id_wallet_get_delegate_statue_" + accountName)  return;

//    QString result = Goopal::getInstance()->jsonDataValue(id);
//    if( result == "\"result\":false")
//    {
//        produceOrNot = false;

//        mutexForDelegateList.lock();
//        QStringList singleList = Goopal::getInstance()->delegateList.filter( "\"name\":\"" + accountName + "\"");
//        mutexForDelegateList.unlock();
//        if( singleList.size() == 0) return;

//        int pos = singleList.at(0).indexOf("\"index\":") + 8;
//        int rank = singleList.at(0).mid(pos).toInt();
//        if( rank < 100) // 前99位代理才显示出块开关
//        {
//            ui->produceBtn->show();
//            ui->produceBtn->setStyleSheet("QToolButton{background-image:url(pic2/delegate_not_producing.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}");
//        }
//        else
//        {
//            ui->produceBtn->hide();
//        }

//    }
//    else if( result == "\"result\":true")
//    {
//        produceOrNot = true;
//        ui->produceBtn->show();
//        ui->produceBtn->setStyleSheet("QToolButton{background-image:url(pic2/delegate.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}");
//    }
//}

//void IdentityCellWidget::on_produceBtn_clicked()
//{
//    CommonDialog commmonDialog(CommonDialog::OkAndCancel);
//    if( produceOrNot)
//    {
//        commmonDialog.setText( tr("Sure to stop producing blocks?"));
//    }
//    else
//    {
//        commmonDialog.setText( tr("Sure to start producing blocks?"));
//    }

//    emit stopRefresh();
//    if( !commmonDialog.pop())
//    {
//        emit startRefresh();
//        return;
//    }
//    emit startRefresh();

//    RpcThread* rpcThread = new RpcThread;
//    connect(rpcThread,SIGNAL(finished()),rpcThread,SLOT(deleteLater()));
//    rpcThread->setLogin("a","b");
//    if( produceOrNot)
//    {
//        produceOrNot = false;

//        mutexForDelegateList.lock();
//        QStringList singleList = Goopal::getInstance()->delegateList.filter( "\"name\":\"" + accountName + "\"");
//        mutexForDelegateList.unlock();
//        if( singleList.size() == 0) return;
//        int pos = singleList.at(0).indexOf("\"index\":") + 8;
//        int rank = singleList.at(0).mid(pos).toInt();
//        if( rank < 100) // 前99位代理才显示出块开关
//        {
//            ui->produceBtn->setStyleSheet("QToolButton{background-image:url(pic2/delegate_not_producing.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}");
//        }
//        else
//        {
//            ui->produceBtn->hide();
//        }

//        rpcThread->setWriteData( toJsonFormat( "id_wallet_delegate_set_block_production", "wallet_delegate_set_block_production", QStringList() << accountName << "false" ));
//        rpcThread->setWriteData( toJsonFormat( "id_wallet_get_delegate_statue_" + accountName, "wallet_get_delegate_statue", QStringList() << accountName ));
//    }
//    else
//    {
//        produceOrNot = true;
//        ui->produceBtn->setStyleSheet("QToolButton{background-image:url(pic2/delegate.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}");
//        rpcThread->setWriteData( toJsonFormat( "id_wallet_delegate_set_block_production", "wallet_delegate_set_block_production", QStringList() << accountName << "true" ));
//        rpcThread->setWriteData( toJsonFormat( "id_wallet_get_delegate_statue_" + accountName, "wallet_get_delegate_statue", QStringList() << accountName ));
//        rpcThread->setWriteData( toJsonFormat( "id_wallet_set_transaction_scanning", "wallet_set_transaction_scanning", QStringList() << "true" ));
//        rpcThread->setWriteData( toJsonFormat( "id_scan_identitycellwidget", "scan", QStringList() << "0" ));
//    }
//    rpcThread->start();
//}

//void IdentityCellWidget::on_upgradeBtn_clicked()
//{
//    if( Goopal::getInstance()->configFile->contains("applyingForDelegateAccount/" + accountName) )
//    {
//        CommonDialog commonDialog(CommonDialog::OkOnly);
//        commonDialog.setText( tr("Delegate application is being confirmed.") );
//        emit stopRefresh();
//        commonDialog.pop();
//        emit startRefresh();
//        return;
//    }

//    if( Goopal::getInstance()->configFile->contains("registeringAccount/" + accountName) )
//    {
//        CommonDialog commonDialog(CommonDialog::OkOnly);
//        commonDialog.setText( tr("Registering application is being confirmed.") );
//        emit stopRefresh();
//        commonDialog.pop();
//        emit startRefresh();
//        return;
//    }

//    ChooseUpgradeDialog chooseUpgradeDialog;
//    emit stopRefresh();
//    int choice = chooseUpgradeDialog.pop();
//    emit startRefresh();
//    switch (choice)
//    {
//    case 0:
//        emit showUpgradePage(accountName);
//        break;
//    case 1:
//        emit showApplyDelegatePage(accountName);
//        break;
//    case 2:
//        break;
//    default:
//        break;
//    }


//}

//void IdentityCellWidget::on_alreadyUpgradeBtn_clicked()
//{
//    if( Goopal::getInstance()->configFile->contains("applyingForDelegateAccount/" + accountName) )
//    {
//        CommonDialog commonDialog(CommonDialog::OkOnly);
//        commonDialog.setText( tr("Delegate application is being confirmed.") );
//        emit stopRefresh();
//        commonDialog.pop();
//        emit startRefresh();
//        return;
//    }

//    emit showApplyDelegatePage(accountName);
//}

//void IdentityCellWidget::retranslator()
//{
//    ui->retranslateUi(this);

//    QString language = Goopal::getInstance()->language;
//    if( language.isEmpty() || language == "Simplified Chinese")
//    {
//        ui->upgradeBtn->setStyleSheet("QToolButton{background-image:url(pic2/unupgradedAccount.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}");
//        ui->alreadyUpgradeBtn->setStyleSheet("QToolButton{background-image:url(pic2/upgradedAccount.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}");

//    }
//    else
//    {
//        ui->upgradeBtn->setStyleSheet("QToolButton{background-image:url(pic2/unupgradedAccount_En.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}");
//        ui->alreadyUpgradeBtn->setStyleSheet("QToolButton{background-image:url(pic2/upgradedAccount_En.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}");
//    }
//}
