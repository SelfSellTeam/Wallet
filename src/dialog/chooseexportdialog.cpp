#include "chooseexportdialog.h"
#include "ui_chooseexportdialog.h"
#include "../goopal.h"

#include <QDebug>

ChooseExportDialog::ChooseExportDialog(QWidget *parent) :
    QDialog(parent),
    choice(2),
    ui(new Ui::ChooseExportDialog)
{
    ui->setupUi(this);

//    Goopal::getInstance()->appendCurrentDialogVector(this);
    setParent(Goopal::getInstance()->mainFrame);

    setAttribute(Qt::WA_TranslucentBackground, true);
    setWindowFlags(Qt::FramelessWindowHint);

    ui->widget->setObjectName("widget");
    ui->widget->setStyleSheet("#widget {background-color:rgba(10, 10, 10,100);}");

    ui->upgradeBtn->setStyleSheet("QPushButton{background-color:#ffffff;color:#62a9f8;border:1px solid #62a9f8;border-radius:3px;}"
                                  "QPushButton:hover{background-color:#62a9f8;color:#ffffff;border:0px solid rgb(64,153,255);border-radius:3px;}"
                                  );
    ui->delegateBtn->setStyleSheet("QPushButton{background-color:#ffffff;color:#62a9f8;border:1px solid #62a9f8;border-radius:3px;}"
                                   "QPushButton:hover{background-color:#62a9f8;color:#ffffff;border:0px solid rgb(64,153,255);border-radius:3px;}"
                                   );
    ui->notUpgradeBtn->setStyleSheet("QPushButton{background-color:#ffffff;color:#62a9f8;border:1px solid #62a9f8;border-radius:3px;}"
                                     "QPushButton:hover{background-color:#62a9f8;color:#ffffff;border:0px solid rgb(64,153,255);border-radius:3px;}"
                                     );
	setFontPixelSize();
}

ChooseExportDialog::~ChooseExportDialog()
{
    delete ui;
//    Goopal::getInstance()->removeCurrentDialogVector(this);
}

void ChooseExportDialog::setFontPixelSize()
{
	QFont font = ui->upgradeBtn->font();
	font.setPixelSize(13);
	ui->upgradeBtn->setFont(font);
	ui->delegateBtn->setFont(font);
	ui->notUpgradeBtn->setFont(font);
}
int ChooseExportDialog::pop()
{
//    QEventLoop loop;
//    show();
//    connect(this,SIGNAL(accepted()),&loop,SLOT(quit()));
//    loop.exec();  //进入事件 循环处理，阻塞

    move(0,0);
    exec();

    return choice;
}

void ChooseExportDialog::on_upgradeBtn_clicked()
{
    choice = 0;
    close();
//    emit accepted();
}

void ChooseExportDialog::on_delegateBtn_clicked()
{
    choice = 1;
    close();
//    emit accepted();
}

void ChooseExportDialog::on_notUpgradeBtn_clicked()
{
    choice = 2;
    close();
//    emit accepted();
}
