#include "singlecontactwidget.h"
#include "ui_singlecontactwidget.h"
#include <QDebug>
#include "goopal.h"
#include "commondialog.h"
#include <QPainter>
#include "datamgr.h"

SingleContactWidget::SingleContactWidget(int num,QString address,QString remarkName,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SingleContactWidget)
{
    ui->setupUi(this);

    setAutoFillBackground(true);
    QPalette palette;
    palette.setColor(QPalette::Background, QColor(255,255,255));
    setPalette(palette);

    ui->deleteBtn->setStyleSheet(QString("QToolButton{background-image:url(%1pic2/deleteContact.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}"
                                 "QToolButton:hover{background-image:url(%2pic2/deleteContact_hover.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}").arg(DataMgr::getDataMgr()->getWorkPath()).arg(DataMgr::getDataMgr()->getWorkPath()));
//    ui->deleteBtn->setToolTip(QString::fromLocal8Bit("删除联系人"));
    ui->deleteBtn->setToolTip(tr("Delete this contact"));

    ui->transferBtn->setStyleSheet(QString("QToolButton{background-image:url(%1pic2/transfer2.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}"
                                   "QToolButton:hover{background-image:url(%2pic2/transfer2_hover.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}").arg(DataMgr::getDataMgr()->getWorkPath()).arg(DataMgr::getDataMgr()->getWorkPath()));
    ui->editBtn->setStyleSheet(QString("QToolButton{background-image:url(%1pic2/contactEdit.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}"
                               "QToolButton:hover{background-image:url(%2pic2/contactEdit_hover.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}").arg(DataMgr::getDataMgr()->getWorkPath()).arg(DataMgr::getDataMgr()->getWorkPath()));
    ui->deleteBtn->hide();
    ui->transferBtn->hide();
    ui->editBtn->hide();
    ui->addressLabel->setText(address);
    ui->remarkLabel->setText(remarkName);
    number = num;

    ui->remarkLabel->adjustSize();
    ui->editBtn->move( ui->remarkLabel->x() + ui->remarkLabel->width() + 10, 18);
    ui->addressLabel->adjustSize();


}

SingleContactWidget::~SingleContactWidget()
{
    delete ui;
}

void SingleContactWidget::on_deleteBtn_clicked()
{
	/*
    CommonDialog commonDialog(CommonDialog::OkAndCancel);
    commonDialog.setText(tr("Sure to delete this contact?"));

    bool yOrN = !commonDialog.pop();

    if( yOrN)
    {
        return;
    }

    if( !Goopal::getInstance()->contactsFile->open(QIODevice::ReadWrite))
    {
        qDebug() << "contact.dat not exist";
    }
    QByteArray rd = Goopal::getInstance()->contactsFile->readAll();
    QString str =  QByteArray::fromBase64( rd);
    QStringList strList = str.split(";");
    strList.removeLast();
    strList.removeAt(number);
    int size = strList.size();

    QString str2;
    for( int i = 0; i < size; i++)
    {
        str2 += strList.at(i) + ';';
    }
    QByteArray ba = str2.toUtf8();
    ba = ba.toBase64();
  //  Goopal::getInstance()->contactsFile->resize(0);
    QTextStream ts(Goopal::getInstance()->contactsFile);
    ts << ba;

    Goopal::getInstance()->contactsFile->close();

    emit deleteContact();
	*/
}

void SingleContactWidget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setPen(QColor(238,238,238));
    painter.drawLine(0,69,765,69);
}

void SingleContactWidget::enterEvent(QEvent *)
{
    QPalette palette;
    palette.setColor(QPalette::Background, QColor(247,247,247));
    setPalette(palette);

    ui->deleteBtn->show();
    ui->transferBtn->show();
    ui->editBtn->show();

	QString language = DataMgr::getInstance()->getSettings()->value("/settings/language").toString();
    if( language.isEmpty() || language == "English")
    {
        ui->transferBtn->setGeometry(579,28,64,13);
        ui->transferBtn->setStyleSheet(QString("QToolButton{background-image:url(%1pic2/transfer2_En.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}"
                                       "QToolButton:hover{background-image:url(%2pic2/transfer2_hover_En.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}").arg(DataMgr::getDataMgr()->getWorkPath()).arg(DataMgr::getDataMgr()->getWorkPath()));
    }
    else
    {
        ui->transferBtn->setGeometry(603,28,41,13);
        ui->transferBtn->setStyleSheet(QString("QToolButton{background-image:url(%1pic2/transfer2.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}"
                                       "QToolButton:hover{background-image:url(%2pic2/transfer2_hover.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}").arg(DataMgr::getDataMgr()->getWorkPath()).arg(DataMgr::getDataMgr()->getWorkPath()));
    }
}

void SingleContactWidget::leaveEvent(QEvent *)
{
    QPalette palette;
    palette.setColor(QPalette::Background, QColor(255,255,255));
    setPalette(palette);

    ui->deleteBtn->hide();
    ui->transferBtn->hide();
    ui->editBtn->hide();
}

void SingleContactWidget::on_transferBtn_clicked()
{
    mutexForAddressMap.lock();
//    int size = Goopal::getInstance()->addressMap.size();
	int size = 0;
    mutexForAddressMap.unlock();

    if( size == 0)   // 还没有账户
    {
        CommonDialog commonDialog(CommonDialog::OkOnly);
//        commonDialog.setText(QString::fromLocal8Bit("没有可以转账的账户"));
        commonDialog.setText(tr("No account for transfering."));
        commonDialog.pop();
        return;
    }
    emit  gotoTransferPage(ui->addressLabel->text());
}

void SingleContactWidget::on_editBtn_clicked()
{
    emit editContact( ui->addressLabel->text(), ui->remarkLabel->text());
}
