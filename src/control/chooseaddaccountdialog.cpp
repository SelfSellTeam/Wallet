#include "chooseaddaccountdialog.h"
#include "ui_chooseaddaccountdialog.h"
#include <QDebug>

#ifdef WIN32 
#include "Windows.h"
#endif //zxlwin

ChooseAddAccountDialog::ChooseAddAccountDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChooseAddAccountDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Popup);
    setAttribute (Qt::WA_DeleteOnClose);
    ui->newBtn->setStyleSheet("QPushButton{background-color:#ffffff;color:#62a9f8;border:1px solid rgb(239,239,239);border-radius:0px;}"
                                  "QPushButton:hover{background-color:#62a9f8;color:#ffffff;border:0px solid rgb(64,153,255);border-radius:0px;}"
                                  );
    ui->importBtn->setStyleSheet("QPushButton{background-color:#ffffff;color:#62a9f8;border:1px solid rgb(239,239,239);border-radius:0px;}"
                                  "QPushButton:hover{background-color:#62a9f8;color:#ffffff;border:0px solid rgb(64,153,255);border-radius:0px;}"
                                  );
	setFontPixelSize();
}

ChooseAddAccountDialog::~ChooseAddAccountDialog()
{
    qDebug() << __FUNCTION__;
    delete ui;
}

void ChooseAddAccountDialog::setFontPixelSize()
{
	QFont font = ui->newBtn->font();
	font.setPixelSize(12);
	ui->newBtn->setFont(font);
	ui->importBtn->setFont(font);
}

bool ChooseAddAccountDialog::event(QEvent *event)
{
    // class_ameneded 不能是custommenu的成员, 因为winidchange事件触发时, 类成员尚未初始化
    static bool class_amended = false;
    if (event->type() == QEvent::WinIdChange)
    {
#ifdef WIN32
        HWND hwnd = reinterpret_cast<HWND>(winId());  //zxlwin
        if (class_amended == false)
        {
            class_amended = true;
            DWORD class_style = ::GetClassLong(hwnd, GCL_STYLE);
            class_style &= ~CS_DROPSHADOW;
            ::SetClassLong(hwnd, GCL_STYLE, class_style); // windows系统函数
        }
#endif // WIN32
    }
    return QWidget::event(event);
}


void ChooseAddAccountDialog::on_newBtn_clicked()
{
    close();
    emit newAccount();
}

void ChooseAddAccountDialog::on_importBtn_clicked()
{
    close();
    emit importAccount();
}

