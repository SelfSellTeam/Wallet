#include "showcontentdialog.h"
#include "ui_showcontentdialog.h"
#include "datamgr.h"
#include <QClipboard>

ShowContentDialog::ShowContentDialog(QString text, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowContentDialog)
{
    ui->setupUi(this);

    setWindowFlags(Qt::Popup);


    setStyleSheet("#ShowContentDialog{background-color:rgb(238,237,238);border:1px groove rgb(215,215,215);}");
    ui->textLabel->setStyleSheet("background-color:rgb(238,237,238);");
    ui->textLabel->setText(text);
    ui->textLabel->adjustSize();

    ui->copyBtn->setStyleSheet(QString("QToolButton{background-image:url(%1pic2/copyBtn.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}"
                               "QToolButton:hover{background-image:url(%2pic2/copyBtn_hover.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}").arg(DataMgr::getDataMgr()->getWorkPath()).arg(DataMgr::getDataMgr()->getWorkPath()));
    ui->copyBtn->setToolTip(tr("copy to clipboard"));
    ui->copyBtn->move( 7, 3);
    ui->textLabel->move( 25, 1);

    setGeometry(0,0, ui->textLabel->width() + 30,20);
	setFontPixelSize();
}

ShowContentDialog::~ShowContentDialog()
{
    delete ui;
}

void ShowContentDialog::setFontPixelSize()
{
	QFont font = ui->textLabel->font();
	font.setPixelSize(12);
	ui->textLabel->setFont(font);
}
void ShowContentDialog::on_copyBtn_clicked()
{
    QClipboard* clipBoard = QApplication::clipboard();
    clipBoard->setText( ui->textLabel->text() );
    close();
}
