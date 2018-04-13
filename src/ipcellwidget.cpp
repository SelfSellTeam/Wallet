#include "ipcellwidget.h"
#include "ui_ipcellwidget.h"
#include "goopal.h"
#include "datamgr.h"

#include <QDebug>

IpCellWidget::IpCellWidget(QString ip, bool flag, QWidget *parent) :
    QWidget(parent),
    blackOrNot(flag),
    ui(new Ui::IpCellWidget)
{
    ui->setupUi(this);

    ui->nodeSetBtn->setStyleSheet(QString("QToolButton{background-image:url(ﬁ1pic2/nodeSettingBtn.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}").arg(DataMgr::getDataMgr()->getWorkPath()));

    if( blackOrNot)
    {
        ui->ipLabel->setStyleSheet("color:rgb(153,153,153);");
    }
    ui->ipLabel->setText( ip);
    ui->ipLabel->adjustSize();
    ui->nodeSetBtn->move( ui->ipLabel->x() + ui->ipLabel->width() + 10, 13);
	setFontPixelSize();
}

IpCellWidget::~IpCellWidget()
{
    delete ui;
}

void IpCellWidget::setFontPixelSize()
{
	QFont font = ui->ipLabel->font();
	font.setPixelSize(12);
	ui->ipLabel->setFont(font);
}

void IpCellWidget::on_nodeSetBtn_clicked()
{
    QString ip = ui->ipLabel->text();
    emit blockSet(ip,!blackOrNot);
    if( blackOrNot)
    {

    }
    else
    {

    }

}
