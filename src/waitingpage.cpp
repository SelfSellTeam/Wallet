#include "waitingpage.h"
#include "ui_waitingpage.h"
#include <QMovie>
#include "datamgr.h"

WaitingPage::WaitingPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WaitingPage)
{
	ui->setupUi(this);

	setAutoFillBackground(true);

	gif = new QMovie(DataMgr::getDataMgr()->getWorkPath() + "pic2/loading.gif");
	ui->gifLabel->setMovie(gif);
	ui->gifLabel->move(ui->gifLabel->x() - 10, ui->gifLabel->y());
	gif->start();

	QPalette pal = palette();
	pal.setColor(QPalette::Background, QColor(0x00, 0xff, 0x00, 0x00));
	setPalette(pal);
}

WaitingPage::~WaitingPage()
{
    delete ui;
	delete gif;
}
