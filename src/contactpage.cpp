#include "contactpage.h"
#include "ui_contactpage.h"
#include "goopal.h"
#include "debug_log.h"
#include "gop_common_define.h"
#include "editremarkdialog.h"
#include "addcontactdialog.h"
#include "datamgr.h"

#include <QDebug>
#include <QPainter>

ContactPage::ContactPage(QWidget *parent) :
    QWidget(parent),
    oldRemark(""),
    ui(new Ui::ContactPage)
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;
    ui->setupUi(this);

    setAutoFillBackground(true);
    QPalette palette;
    palette.setColor(QPalette::Background, QColor(255,255,255));
    setPalette(palette);


//    connect( Goopal::getInstance(), &Goopal::jsonDataUpdated, this, &ContactPage::jsonDataUpdated);

	QString language = DataMgr::getInstance()->getSettings()->value("/settings/language").toString();
    if( language.isEmpty() || language == "English")
    {
        ui->addContactBtn->setStyleSheet(QString("QToolButton{background-image:url(%1pic2/addContactBtn_En.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}"
                                         "QToolButton:hover{background-image:url(%2pic2/addContactBtn_hover_En.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}").arg(DataMgr::getDataMgr()->getWorkPath()).arg(DataMgr::getDataMgr()->getWorkPath()));

    }
    else
    {
        ui->addContactBtn->setStyleSheet(QString("QToolButton{background-image:url(%1pic2/addContactBtn.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}"
                                         "QToolButton:hover{background-image:url(%2pic2/addContactBtn_hover.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}").arg(DataMgr::getDataMgr()->getWorkPath()).arg(DataMgr::getDataMgr()->getWorkPath()));

    }

    updateContactsList();

    ui->stackedWidget->installEventFilter(this);
//    ui->stackedWidget->setAutoFillBackground(true);
//    QPalette palette;
//    palette.setColor(QPalette::Background, QColor(255,255,255));
//    ui->stackedWidget->setPalette(palette);

    ui->scrollArea->setStyleSheet("QScrollArea{border:none;}"
                                  "QScrollBar:vertical"
                                  "{"
                                  "width:8px;"
                                  "background:rgba(255,255,255,20%);"
                                  "margin:0px,0px,0px,0px;"
                                  "padding-top:2px;"
                                  "padding-bottom:3px;"
                                  "}");

    ui->scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
    ui->scrollAreaWidgetContents->setStyleSheet("#scrollAreaWidgetContents{background-color:white;}");

    DLOG_QT_WALLET_FUNCTION_END;
}

ContactPage::~ContactPage()
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;
    delete ui;
    DLOG_QT_WALLET_FUNCTION_END;
}

void ContactPage::updateContactsList()
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;
  //  if( !Goopal::getInstance()->contactsFile->open(QIODevice::ReadOnly))
	
    {
        qDebug() << "contact.dat not exist";
    }
 //   QByteArray rd = Goopal::getInstance()->contactsFile->readAll();

	QByteArray rd = "";
    QString str =  QByteArray::fromBase64( rd);

    QStringList strList = str.split(";");
    strList.removeLast();
    int size = strList.size();

    if( size > 4)
    {
        ui->scrollAreaWidgetContents->setMinimumHeight(418 + (size - 4) * 71);
//        ui->scrollAreaWidgetContents->setGeometry(0,0,826, 397 + (size - 4) * 71);
    }
    else
    {
        ui->scrollAreaWidgetContents->setMinimumHeight(418);
    }

    if( size == 0)
    {
        ui->initLabel->show();
    }
    else
    {
        ui->initLabel->hide();
    }

    releaseVector();
    contactVector.clear();
    for( int i = 0; i < size; i++)
    {
        QString str2 = strList.at(i);
        SingleContactWidget* widget = new SingleContactWidget(i,str2.left( str2.indexOf("=")),str2.mid( str2.indexOf("=") + 1),ui->scrollAreaWidgetContents);
        connect(widget,SIGNAL(deleteContact()),this,SLOT(updateContactsList()));
        connect(widget,SIGNAL(showShadowWidget()),this,SLOT(shadowWidgetShow()));
        connect(widget,SIGNAL(hideShadowWidget()),this,SLOT(shadowWidgetHide()));
        connect(widget,SIGNAL(editContact(QString,QString)),this,SLOT(editContact(QString,QString)));
        connect(widget,SIGNAL(gotoTransferPage(QString)),this,SIGNAL(gotoTransferPage(QString)));
        contactVector.insert(i,widget);
        contactVector.at(i)->show();
        contactVector.at(i)->move(20, 32 + 71 * i);
    }


   // Goopal::getInstance()->contactsFile->close();

    DLOG_QT_WALLET_FUNCTION_END;
}

void ContactPage::on_addContactBtn_clicked()
{

    AddContactDialog addContactDialog;
//    emit showShadowWidget();
    addContactDialog.pop();
//    emit hideShadowWidget();

    updateContactsList();

}

void ContactPage::releaseVector()
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;
    foreach (SingleContactWidget* widget, contactVector) {
        widget->close();
        delete widget;
    }
    DLOG_QT_WALLET_FUNCTION_END;
}


void ContactPage::shadowWidgetShow()
{
    emit showShadowWidget();
}

void ContactPage::shadowWidgetHide()
{
    emit hideShadowWidget();
}

bool ContactPage::eventFilter(QObject *watched, QEvent *e)
{
    if( watched == ui->stackedWidget)
    {
        if( e->type() == QEvent::Paint)
        {
            QPainter painter(ui->stackedWidget);
            painter.setBrush(QColor(229,229,229));
            painter.setPen(QColor(177,183,188));
            painter.drawRect(QRect(-1,-1,828,89));
            return true;
        }
    }
    return QWidget::eventFilter(watched,e);
}

void ContactPage::editContact(QString address, QString remark)
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;
	/*
    oldRemark = remark;

    EditRemarkDialog editRemarkDialog( remark);
//    emit showShadowWidget();
    QString remarkName = editRemarkDialog.pop();
//    emit hideShadowWidget();

    if( oldRemark == remarkName)
    {
        return;
    }

//    if( !Goopal::getInstance()->contactsFile->open(QIODevice::ReadWrite))

    {
        qDebug() << "contact.dat not exist";
        return;
    }

	QByteArray ba = QByteArray::fromBase64( Goopal::getInstance()->contactsFile->readAll());
    QString str(ba);
    QStringList strList = str.split(";");
    strList.removeLast();

    for(QStringList::iterator& ss = strList.begin();  ss != strList.end(); ss++)
    {
        if(  (*ss).mid(0, (*ss).indexOf('=')) == address && (*ss).mid( (*ss).indexOf('=') + 1) ==  remarkName )
        {
     //       Goopal::getInstance()->contactsFile->close();
            return;
        }
        if( ((*ss).mid(0, (*ss).indexOf('=')) == address) && (*ss).mid( (*ss).indexOf('=') + 1) ==  oldRemark )
        {
            (*ss) = address + '=' + remarkName;
            ba = "";
            foreach (QString ss2, strList)
            {
                ba += ss2 + ';';
            }
            ba = ba.toBase64();
      //      Goopal::getInstance()->contactsFile->resize(0);
       //     QTextStream ts(Goopal::getInstance()->contactsFile);
        //    ts << ba;
      //      Goopal::getInstance()->contactsFile->close();

            updateContactsList();
            return;
        }
    }

    ba += address.toUtf8() + '=' + remarkName.toUtf8() + QString(";").toUtf8();
    ba = ba.toBase64();
   // Goopal::getInstance()->contactsFile->resize(0);
 //   QTextStream ts(Goopal::getInstance()->contactsFile);
  //  ts << ba;

 //   Goopal::getInstance()->contactsFile->close();
 */
    DLOG_QT_WALLET_FUNCTION_END;
}


void ContactPage::retranslator(QString language)
{
    ui->retranslateUi(this);

    if( language == "English")
    {
        ui->addContactBtn->setStyleSheet(QString("QToolButton{background-image:url(%1pic2/addContactBtn_En.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}"
                                         "QToolButton:hover{background-image:url(%2pic2/addContactBtn_hover_En.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}").arg(DataMgr::getDataMgr()->getWorkPath()).arg(DataMgr::getDataMgr()->getWorkPath()));

    }
    else if( language == "Simplified Chinese")
    {
        ui->addContactBtn->setStyleSheet(QString("QToolButton{background-image:url(%1pic2/addContactBtn.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}"
                                         "QToolButton:hover{background-image:url(%2pic2/addContactBtn_hover.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}").arg(DataMgr::getDataMgr()->getWorkPath()).arg(DataMgr::getDataMgr()->getWorkPath()));

    }
}

void ContactPage::jsonDataUpdated(QString id)
{
    if( id == "id_blockchain_get_account")
    {
   //     QString  result = Goopal::getInstance()->jsonDataValue(id);
        return;
    }

}
