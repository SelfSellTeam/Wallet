#include "remarkcellwidget.h"
#include "ui_remarkcellwidget.h"

#include <QDebug>

RemarkCellWidget::RemarkCellWidget(QString str, QWidget *parent) :
    QWidget(parent),
    ss(str),
    ui(new Ui::RemarkCellWidget)
{
    ui->setupUi(this);

    ui->label->setText( ss);
	setFontPixelSize();
}

RemarkCellWidget::~RemarkCellWidget()
{
    delete ui;
}

void RemarkCellWidget::setFontPixelSize()
{
	QFont font = ui->label->font();
	font.setPixelSize(12);
	ui->label->setFont(font);
}


QString RemarkCellWidget::text()
{
    return ss;
}
