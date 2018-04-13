#include "accountcellwidget.h"
#include "ui_accountcellwidget.h"
#include "goopal.h"
#include "datamgr.h"

#include <QDebug>
#include <QTableWidget>

AccountCellWidget::AccountCellWidget(int r, int c, QWidget *parent) :
    QWidget(parent),
    row(r),
    column(c),
    ui(new Ui::AccountCellWidget)
{
    ui->setupUi(this);
    //ui->nameLabel->adjustSize();
	//ui->identityLabel->move(ui->nameLabel->x() + ui->nameLabel->width() + 8, ui->nameLabel->y() + 5);
    ui->identityLabel->move( ui->nameLabel->x()  + ui->nameLabel->width() + 8, ui->nameLabel->y() - 2 );
	QString language = DataMgr::getInstance()->getSettings()->value("/settings/language").toString();

    if( language.isEmpty() || language == "English") {
        delegateLabelString = DataMgr::getDataMgr()->getWorkPath() + "pic2/delegateLabel_En.png";
        registeredLabelString = DataMgr::getDataMgr()->getWorkPath() + "pic2/registeredLabel_En.png";
    } else {
        delegateLabelString = DataMgr::getDataMgr()->getWorkPath() + "pic2/delegateLabel.png";
        registeredLabelString = DataMgr::getDataMgr()->getWorkPath() + "pic2/registeredLabel.png";
    }
}

void AccountCellWidget::setName(QString name)
{
    if( name.size() > 10) { // 如果name太长 显示省略号
        ui->nameLabel->setText( name.mid(0,8) + "...");
        ui->nameLabel->setToolTip(name);

    } else {
        ui->nameLabel->setText(name);
    }

    accountName = name;	
    ui->identityLabel->setPixmap(QPixmap(""));
    ui->identityLabel->hide();
}

AccountCellWidget::~AccountCellWidget()
{
    delete ui;
}

void AccountCellWidget::setBackgroundColor(int r, int g, int b, int a)
{
    QString colorString = "rgb(" + QString::number(r) + "," + QString::number(g) + "," + QString::number(b)
                          + "," + QString::number( a) + ")";
    ui->widget->setStyleSheet( "background-color:" + colorString + ";");
}

void AccountCellWidget::enterEvent(QEvent *e)
{
    emit cellEnter(row,column);
}
