#include "consoledialog.h"
#include "ui_consoledialog.h"
#include "goopal.h"
#include "debug_log.h"
#include "misc.h"
#include "rpcmgr.h"
#include "datamgr.h"

#include <QTextCodec>
#include <QPainter>
#include <QKeyEvent>

ConsoleDialog::ConsoleDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConsoleDialog)
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;
    ui->setupUi(this);

    setParent(Goopal::getInstance()->mainFrame);
    setAttribute(Qt::WA_TranslucentBackground, true);
    setWindowFlags(Qt::FramelessWindowHint);

    ui->widget->setObjectName("widget");
    ui->widget->setStyleSheet("#widget {background-color:rgba(10, 10, 10,100);}");

    ui->containerWidget->setObjectName("containerwidget");
    ui->containerWidget->setStyleSheet("#containerwidget{background-color: rgb(246, 246, 246);border:1px groove rgb(180,180,180);}");
    ui->containerWidget->installEventFilter(this);

    ui->closeBtn->setStyleSheet(QString("QToolButton{background-image:url(%1pic2/close3.png);background-repeat: repeat-xy;background-position: center;background-attachment: fixed;background-clip: padding;border-style: flat;}").arg(DataMgr::getDataMgr()->getWorkPath()));

    ui->consoleLineEdit->setStyleSheet("color:black;border:1px solid #CCCCCC;border-radius:3px;");
    ui->consoleLineEdit->setTextMargins(8,0,0,0);
    ui->consoleBrowser->setStyleSheet("QTextBrowser{color:black;border:1px solid #CCCCCC;border-radius:3px;}");

    ui->consoleLineEdit->setFocus();

    ui->checkBox->setStyleSheet(QString("QCheckBox::indicator{ image:url(%1pic2/checkBox_unchecked.png); }"
                                    "QCheckBox::indicator:checked{ image:url(%2pic2/checkBox_checked.png); }").arg(DataMgr::getDataMgr()->getWorkPath()).arg(DataMgr::getDataMgr()->getWorkPath()));

    setStyleSheet("#ConsoleDialog{background-color: rgb(246, 246, 246);}"
                  "QScrollBar:vertical"
                                                       "{"
                                                       "width:8px;"
                                                       "background:rgba(0,0,0,0%);"
                                                       "margin:0px,0px,0px,0px;"
                                                       "padding-top:2px;"
                                                       "padding-bottom:3px;"
                                                       "}"
                                                       "QScrollBar::handle:vertical"
                                                       "{"
                                                       "width:8px;"
                                                       "background:rgba(130,137,143,20%);"
                                                       " border-radius:4px;"
                                                       "min-height:20;"
                                                       "}"
                                                       "QScrollBar::handle:vertical:hover"
                                                       "{"
                                                       "width:8px;"
                                                       "background:rgba(130,137,143,100%);"
                                                       " border-radius:4px;"
                                                       "min-height:20;"
                                                       "}"
                                                       "QScrollBar::add-line:vertical"
                                                       "{"
                                                       "height:9px;width:8px;"
                                                       "border-image:url(:/images/a/3.png);"
                                                       "subcontrol-position:bottom;"
                                                       "}"
                                                       "QScrollBar::sub-line:vertical"
                                                       "{"
                                                       "height:9px;width:8px;"
                                                       "border-image:url(:/images/a/1.png);"
                                                       "subcontrol-position:top;"
                                                       "}"
                                                       "QScrollBar::add-line:vertical:hover"
                                                       "{"
                                                       "height:9px;width:8px;"
                                                       "border-image:url(:/images/a/4.png);"
                                                       "subcontrol-position:bottom;"
                                                       "}"
                                                       "QScrollBar::sub-line:vertical:hover"
                                                       "{"
                                                       "height:9px;width:8px;"
                                                       "border-image:url(:/images/a/2.png);"
                                                       "subcontrol-position:top;"
                                                       "}"
                                                       "QScrollBar::add-page:vertical,QScrollBar::sub-page:vertical"
                                                       "{"
                                                       "background:rgba(0,0,0,0%);"
                                                       "border-radius:4px;"
                                                       "}"
                                                       );

//    mouse_press = false;
//	  ui->checkBox->hide();
//	  rpc选项隐藏

    connect(DataMgr::getInstance(), &DataMgr::onExecuteConsoleCommand, this, &ConsoleDialog::executeConsoleCommand);

	setFontPixelSize();
    DLOG_QT_WALLET_FUNCTION_END;
}

ConsoleDialog::~ConsoleDialog()
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;
    qDebug() << "ConsoleDialog delete";
//    Goopal::getInstance()->currentDialog = NULL;
    delete ui;
    DLOG_QT_WALLET_FUNCTION_END;
}

void ConsoleDialog::setFontPixelSize()
{
	QFont font = ui->label->font();
	font.setPixelSize(16);
	ui->label->setFont(font);

	font = ui->label_2->font();
	font.setPixelSize(16);
	ui->label_2->setFont(font);

	font = ui->checkBox->font();
	font.setPixelSize(16);
	ui->checkBox->setFont(font);

	font = ui->consoleLineEdit->font();
	font.setPixelSize(12);
	ui->consoleLineEdit->setFont(font);
	ui->consoleBrowser->setFont(font);

}
void ConsoleDialog::pop()
{

    move(0,0);
    exec();
}

bool ConsoleDialog::eventFilter(QObject *watched, QEvent *e)
{
    if( watched == ui->containerWidget) {
        if( e->type() == QEvent::Paint) {
            QPainter painter(ui->containerWidget);
            painter.setPen(QColor(204,204,204));
            painter.drawLine(QPoint(0,65), QPoint(629,65));

            return true;
        }
    }

    return QWidget::eventFilter(watched,e);
}

void ConsoleDialog::on_closeBtn_clicked()
{
    close();
}

void ConsoleDialog::on_consoleLineEdit_returnPressed()
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;

    if( ui->checkBox->isChecked())
    {
        QString str = ui->consoleLineEdit->text();
        QStringList paramaters = str.split(' ');
        QString command = paramaters.at(0);
        paramaters.removeFirst();
        if( paramaters.isEmpty())
			paramaters << "";

		//对参数和命令进行处理
		DataMgr::getInstance()->executeConsolerCommand(command, paramaters, true);

        ui->consoleLineEdit->clear();
        return;
    }

    QString str = ui->consoleLineEdit->text() + '\n';

	Misc::write(str, RpcMgr::getInstance()->currentProcess());
	QString result = Misc::read(RpcMgr::getInstance()->currentProcess());

    ui->consoleBrowser->append(">>>" + str);
    ui->consoleBrowser->append(result);
    ui->consoleLineEdit->clear();
    DLOG_QT_WALLET_FUNCTION_END;
}

void ConsoleDialog::executeConsoleCommand(QString result)
{
	ui->consoleBrowser->append(">>>" + command);
	ui->consoleBrowser->append(result);
	ui->consoleBrowser->append("\n");
}
