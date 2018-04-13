#include "newsdialog.h"
#include "ui_newsdialog.h"
#include "goopal.h"
#include "commondialog.h"
#include "datamgr.h"

#include <QDebug>
#include "misc.h"

NewsDialog::NewsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewsDialog)
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

//    Goopal::getInstance()->configFile->beginGroup("/recordId");
//    QStringList keys = Goopal::getInstance()->configFile->childKeys();
	/*
    foreach (QString key, keys)
    {
        if( Goopal::getInstance()->configFile->value(key).toInt() == 1)
        {
            recordIdList += key;
        }
    }
    Goopal::getInstance()->configFile->endGroup();
	*/


    page = 1;
    totalNum = recordIdList.count();
    ui->numLabel->setText( tr("News") + QString("(1/%0)").arg( totalNum));
    if( totalNum == 1)
    {
        ui->nextBtn->setText( tr("Close"));
    }

    showNews( recordIdList.at(page - 1));

    ui->closeBtn->setStyleSheet(QString("QToolButton{background-image:url(%1pic2/close3.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}").arg(DataMgr::getDataMgr()->getWorkPath()));
    ui->checkBtn->setStyleSheet("background:transparent;color: rgb(161, 160, 156);");
    ui->nextBtn->setStyleSheet("QToolButton{background-color:#f49f17;color:#ffffff;border:0px solid rgb(64,153,255);border-radius:3px;}"
                               "QToolButton:hover{background-color:#ffc362;}");
	setFontPixelSize();
}

NewsDialog::~NewsDialog()
{
    delete ui;
//    Goopal::getInstance()->removeCurrentDialogVector(this);
}

void NewsDialog::setFontPixelSize()
{
	QFont font = ui->label_2->font();
	font.setPixelSize(13);
	ui->label_2->setFont(font);
	ui->fromLabel->setFont(font);
	ui->label_3->setFont(font);
	ui->toLabel->setFont(font);
	ui->label_5->setFont(font);
	ui->amountLabel->setFont(font);
	ui->label_7->setFont(font);

	font = ui->checkBtn->font();
	font.setPixelSize(13);
	ui->checkBtn->setFont(font);
	ui->nextBtn->setFont(font);
}

void NewsDialog::pop()
{
//    QEventLoop loop;
//    show();
//    connect(this,SIGNAL(accepted()),&loop,SLOT(quit()));
//    loop.exec();  //进入事件 循环处理，阻塞

    move(0,0);
    exec();
}

void NewsDialog::on_nextBtn_clicked()
{
    page ++;

    if( page > totalNum)
    {
        close();
//        emit accepted();
        return;
    }
    else if( page == totalNum)
    {
        ui->nextBtn->setText( tr("Close"));
    }

    ui->numLabel->setText( tr("News") + QString("(%0/%1)").arg(page).arg( totalNum));
    showNews( recordIdList.at(page - 1));
}

void NewsDialog::on_closeBtn_clicked()
{
    if( page < totalNum)
    {
        CommonDialog commonDialog(CommonDialog::YesOrNo);
        commonDialog.setText( tr("Ignore all news?") );

        if( commonDialog.pop() )
        {

            int size = recordIdList.size();
            for( int i = page; i < size; i++)
            {
   //             Goopal::getInstance()->configFile->remove( "recordId/" + recordIdList.at( i));
            }

            close();
    //        emit accepted();
        }
        else
        {
            close();
    //        emit accepted();
        }

    }
    else
    {
        close();
//        emit accepted();
    }



}

void NewsDialog::showNews(QString id)
{
    // 阅读了该消息后 将 recordId 从config中删除
//    Goopal::getInstance()->configFile->remove( "recordId/" + recordIdList.at( page - 1));

	QString result;// = Goopal::getInstance()->jsonDataValue("id_blockchain_get_pretty_transaction_" + id);
    int pos = result.indexOf("{\"from_account\":\"") + 17;
    QString fromAccount = result.mid( pos, result.indexOf( "\"", pos) - pos);
    ui->fromLabel->setText( fromAccount);

    pos = result.indexOf( ",\"to_account\":\"") + 15;
    QString toAddress = result.mid( pos, result.indexOf( "\"", pos) - pos);
    ui->toLabel->setText( toAddress);

    pos = result.indexOf( ",\"amount\":{\"amount\":") + 20;
    QString amount = result.mid( pos, result.indexOf( ",", pos) - pos);
    amount.remove("\"");
    ui->amountLabel->setText( doubleToDecimals( amount.toDouble() / 100000) + " GOP" );

}

void NewsDialog::on_checkBtn_clicked()
{
	/*
    QString fromAccount = ui->fromLabel->text();

    if( fromAccount.mid(0,3) == "GOP")
    {
        QString address = ui->fromLabel->text();
        fromAccount = "";

        mutexForAddressMap.lock();
        for (QMap<QString,QString>::const_iterator i = Goopal::getInstance()->addressMap.constBegin(); i != Goopal::getInstance()->addressMap.constEnd(); ++i)
        {
            if( i.value() == address)
            {
                fromAccount = i.key();
                break;
            }

        }
        mutexForAddressMap.unlock();

    }

    emit showAccountPage(fromAccount);
	*/
    close();
//    emit accepted();
}
