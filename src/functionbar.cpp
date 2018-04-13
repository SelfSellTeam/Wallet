#include "functionbar.h"
#include "ui_functionbar.h"
#include "goopal.h"
#include "commondialog.h"
#include "debug_log.h"
#include "datamgr.h"
#include "extra/dynamicmove.h"

#include <QPainter>
#include <QDebug>

//#include <qmessagebox.h>

FunctionBar::FunctionBar(QWidget *parent) :
QWidget(parent),
ui(new Ui::FunctionBar),wait_for_update(0)
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;
	ui->setupUi(this);
	setAutoFillBackground(true);
	QPalette palette;
	palette.setColor(QPalette::Background, QColor(40, 46, 53));
	setPalette(palette);
	ui->activeLabel->setPixmap(QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/active.png"));
	ui->activeLabel->setScaledContents(true);
	ui->logoLabel->setPixmap(QPixmap(DataMgr::getDataMgr()->getWorkPath() + "pic2/logo.png"));
	ui->logoLabel->setScaledContents(true);
	choosePage(1);
	ui->contactBtn->hide();
	QPalette palette1;
	palette1.setBrush(QPalette::Text, QBrush(Qt::white));
	palette1.setBrush(QPalette::Window, QBrush(Qt::white));
    ui->assertComboBox->setPalette(palette1);

    //增加下拉框图片
#ifdef WIN32
    QPixmap icon1(DataMgr::getDataMgr()->getWorkPath() + "pic2/arrowdown.png");
    ui->assertComboBox->setIconSize(QSize(30, 20));
    ui->assertComboBox->setWindowIcon(icon1);
#endif // WIN32//zxlrun
    ui->versionLabel_2->setText("SelfSell Wallet\r\n" "Ver." SSC_WALLET_VERSION);

	foreach(ContractFromServer tokenCon, DataMgr::getInstance()->getContractConfig())
	{
        ui->assertComboBox->addItem(tokenCon.name);
    }

    ui->assertComboBox->setStyleSheet(
                QString("QComboBox {"
                    "background-color: rgba(47, 47, 53, 10);"
                    "background-repeat: no-repeat; "
                    "selection-background-color: rgb(85, 85, 255); "
                    "selection-color: rgb(255, 255, 255); "
                "}"
                "QComboBox::drop-down {"
                        "background-color: rgba(47, 47, 53, 10);"
                        "height:30px;"
                "}"
                "QComboBox::down-arrow { image: url(%1pic2/assetComboxArrow.png);}").arg(DataMgr::getDataMgr()->getWorkPath())
              );
/*    ui->assertComboBox->setStyleSheet(
        //"QComboBox::drop-down{subcontrol-origin:padding; subcontrol-position:top right; width:16px; border-left-width:1px;border-left-color:darkgray; border-left-style:solid; border-top-right-radius:3px; border-bottom-right-radius:3px;}"
        //"QComboBox QAbstractItemView{border: 2px solid #4E6D8C;}"
        "QComboBox::down-arrow {image: url(pic2/arrowdown.png);}"
    );*/
    connect(this, &FunctionBar::assetTypeChange, DataMgr::getInstance(), &DataMgr::onAssetChange);
    connect(DataMgr::getInstance(), &DataMgr::onGetInfo, this, &FunctionBar::getInfo);
    //connect(DataMgr::getInstance(), &DataMgr::assetTypeGet, this, &FunctionBar::setAssetInfo);
	connect(DataMgr::getInstance(), &DataMgr::onBlockChainListAssets, this, &FunctionBar::setAssetInfo);
	DataMgr::getDataMgr()->blockChainListAssets();
    updated = false;
    scan = false;
	setFontPixelSize();
    DLOG_QT_WALLET_FUNCTION_END;
}

FunctionBar::~FunctionBar()
{
    delete ui;
}

void FunctionBar::setFontPixelSize()
{
	QFont font = ui->versionLabel_2->font();
	font.setPixelSize(12);
	ui->versionLabel_2->setFont(font);

	font = ui->surveyBtn->font();
	font.setPixelSize(14);

	ui->surveyBtn->setFont(font);
	ui->accountBtn->setFont(font); 
	ui->delegateBtn->setFont(font);
	ui->transferBtn->setFont(font);
	ui->contactBtn->setFont(font);

	font = ui->assertComboBox->font();
	font.setPixelSize(14);
	ui->assertComboBox->setFont(font);

}

void FunctionBar::setAssetInfo(QString result)
{
	ui->assertComboBox->clear();
	QJsonParseError jsonError;
	QString Jsonstr = '{' + result + '}';
	QByteArray bytearray = Jsonstr.toLatin1();
	QJsonDocument doucment = QJsonDocument::fromJson(bytearray, &jsonError);
	if (!doucment.isNull() && (jsonError.error == QJsonParseError::NoError)) {  // 解析未发生错误
		if (doucment.isObject()) { // JSON 文档为对象
			QJsonObject object = doucment.object();  // 转化为对象
			if (object.contains("result")) {  // 包含指定的 key
				QJsonValue value = object.value("result");  // 获取指定 key 对应的 value
				if (value.isArray()) {//账户数组
					QJsonArray array = value.toArray();
					int nSize = array.size();
					for (int i = 0; i < nSize; ++i) {
						QJsonValue value1 = array.at(i);
						if (value1.isObject()) {
							QJsonObject object = value1.toObject();
							CommonAssetInfo assetinfo;
							if (object.contains("id")) {
								QJsonValue val = object.value("id");
								assetinfo.id = val.toInt();
							}
							if (object.contains("symbol")) {
								QJsonValue val = object.value("symbol");
								assetinfo.symbol = val.toString();
								ui->assertComboBox->addItem(assetinfo.symbol);
							}
							if (object.contains("name")) {
								QJsonValue val = object.value("name");
								assetinfo.name = val.toString();
								
							}
							if (object.contains("description")) {
								QJsonValue val = object.value("description");
								assetinfo.description = val.toString();
							}
							if (object.contains("public_data")) {
								QJsonValue val = object.value("public_data");
								assetinfo.public_data = val.toString();
							}
							if (object.contains("issuer_account_id")) {
								QJsonValue val = object.value("issuer_account_id");
								assetinfo.issuer_account_id = val.toInt();
							}
							if (object.contains("precision")) {
								QJsonValue val = object.value("precision");
								assetinfo.precision = val.toInt();
							}
							if (object.contains("registration_date")) {
								QJsonValue val = object.value("registration_date");
								assetinfo.registration_date = val.toInt();
							}
							if (object.contains("last_update")) {
								QJsonValue val = object.value("last_update");
								assetinfo.last_update = val.toString();
							}
							if (object.contains("maximum_share_supply")) {
								QJsonValue val = object.value("maximum_share_supply");
								assetinfo.maximum_share_supply = val.toString();
							}
							if (object.contains("current_share_supply")) {
								QJsonValue val = object.value("current_share_supply");
								assetinfo.current_share_supply = val.toString();
							}
							if (object.contains("collected_fees")) {
								QJsonValue val = object.value("collected_fees");
								assetinfo.collected_fees = val.toString();
							}
							if (object.contains("flags")) {
								QJsonValue val = object.value("flags");
								assetinfo.flags = val.toString();
							}
							if (object.contains("issuer_permissions")) {
								QJsonValue val = object.value("issuer_permissions");
								assetinfo.issuer_permissions = val.toString();
							}
							if (object.contains("transaction_fee")) {
								QJsonValue val = object.value("transaction_fee");
								assetinfo.transaction_fee = val.toInt();
							}
							if (object.contains("market_fee")) {
								QJsonValue val = object.value("market_fee");
								assetinfo.market_fee = val.toInt();
							}
							(*DataMgr::getInstance()->getAssetInfo())[assetinfo.id] = assetinfo;
						}
					}
				}
			}
		}
	}
	//获取资产信息后获取交易费用
	DataMgr::getInstance()->delegateGetConfig();
    /*ui->assertComboBox->clear();
    ui->assertComboBox->addItem("ACT");
    foreach(ContractFromServer tokenCon, DataMgr::getInstance()->getContractConfig())
    {
        ui->assertComboBox->addItem(tokenCon.name);
    }*/
}

void FunctionBar::on_surveyBtn_clicked()
{
    choosePage(1);
    emit showMainPage();
}

void FunctionBar::on_assertComboBox_currentIndexChanged(const QString& arg1)
{
    DataMgr::getInstance()->setCurrentAssetType(arg1);
    emit assetTypeChange();
}

void FunctionBar::on_accountBtn_clicked()
{
    mutexForAddressMap.lock();
    int size = DataMgr::getInstance()->getAccountInfo()->size();
    mutexForAddressMap.unlock();

    if( size != 0)   {
        // 有至少一个账户
        choosePage(2);
        QString  accountName = DataMgr::getInstance()->getAccountInfo()->first().name;
        emit showAccountPage(accountName);

    } else {
        CommonDialog commonDialog(CommonDialog::OkOnly);
        commonDialog.setText(tr("You have no account,\nadd an account first"));
        commonDialog.pop();
        on_surveyBtn_clicked();
    }
}

void FunctionBar::on_transferBtn_clicked()
{
    mutexForAddressMap.lock();
    int size = DataMgr::getInstance()->getAccountInfo()->size();
    mutexForAddressMap.unlock();
    if( size != 0/* && updated*/)   {
        // 有至少一个账户
        choosePage(3);
        emit showTransferPage();

	} else if (updated == false) {
		CommonDialog commonDialog(CommonDialog::OkOnly);
		if (wait_for_update >= 0) {
            commonDialog.setText(tr("Wait for sync ") + QString::number(wait_for_update) + tr(" block"));
		} else {
			commonDialog.setText(tr("Wait for sync"));
		}

        commonDialog.pop();
        on_surveyBtn_clicked();

	} else {
        CommonDialog commonDialog(CommonDialog::OkOnly);
        commonDialog.setText(tr("No account for transfering,\nadd an account first"));
        commonDialog.pop();
        on_surveyBtn_clicked();
    }
}

void FunctionBar::on_delegateBtn_clicked()
{
	//choosePage(4);
   //emit showDelegatePage();

	CommonDialog commonDialog(CommonDialog::OkOnly);
	commonDialog.setText(tr("Open to a few developers     "));
	commonDialog.pop();
    on_surveyBtn_clicked();
}

void FunctionBar::on_contactBtn_clicked()
{
    choosePage(5);
    emit showContactPage();
}

void FunctionBar::choosePage(int pageIndex)
{
//    ui->activeLabel->move(0, 17 + 94 * ( pageIndex - 1));
    DynamicMove* dynamicMove = new DynamicMove( ui->activeLabel, QPoint(0,17 + 94 * ( pageIndex - 1)), 20, 10, this);
    dynamicMove->start();

    switch (pageIndex) {
    case 1:
        ui->surveyBtn->setIcon(QIcon(DataMgr::getDataMgr()->getWorkPath() + "pic2/surveyBtn.png"));
        ui->surveyBtn->setIconSize(QSize(29,28));
        ui->surveyBtn->setStyleSheet("background:transparent;color:white");
        ui->surveyBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        ui->accountBtn->setIcon(QIcon(DataMgr::getDataMgr()->getWorkPath() + "pic2/accountBtn_unselected.png"));
        ui->accountBtn->setIconSize(QSize(24,17));
        ui->accountBtn->setStyleSheet("background:transparent;color:grey");
        ui->accountBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        ui->delegateBtn->setIcon(QIcon(DataMgr::getDataMgr()->getWorkPath() + "pic2/delegateBtn_unselected.png"));
        ui->delegateBtn->setIconSize(QSize(26,26));
        ui->delegateBtn->setStyleSheet("background:transparent;color:grey");
        ui->delegateBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        ui->transferBtn->setIcon(QIcon(DataMgr::getDataMgr()->getWorkPath() + "pic2/transferBtn_unselected.png"));
        ui->transferBtn->setIconSize(QSize(23,18));
        ui->transferBtn->setStyleSheet("background:transparent;color:grey");
        ui->transferBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        ui->contactBtn->setIcon(QIcon(DataMgr::getDataMgr()->getWorkPath() + "pic2/contactBtn_unselected.png"));
        ui->contactBtn->setIconSize(QSize(23,22));
        ui->contactBtn->setStyleSheet("background:transparent;color:grey");
        ui->contactBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        break;

    case 2:
        ui->surveyBtn->setIcon(QIcon(DataMgr::getDataMgr()->getWorkPath() + "pic2/surveyBtn_unselected.png"));
        ui->surveyBtn->setIconSize(QSize(29,28));
        ui->surveyBtn->setStyleSheet("background:transparent;color:grey");
        ui->surveyBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        ui->accountBtn->setIcon(QIcon(DataMgr::getDataMgr()->getWorkPath() + "pic2/accountBtn.png"));
        ui->accountBtn->setIconSize(QSize(24,17));
        ui->accountBtn->setStyleSheet("background:transparent;color:white");
        ui->accountBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        ui->delegateBtn->setIcon(QIcon(DataMgr::getDataMgr()->getWorkPath() + "pic2/delegateBtn_unselected.png"));
        ui->delegateBtn->setIconSize(QSize(26,26));
        ui->delegateBtn->setStyleSheet("background:transparent;color:grey");
        ui->delegateBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        ui->transferBtn->setIcon(QIcon(DataMgr::getDataMgr()->getWorkPath() + "pic2/transferBtn_unselected.png"));
        ui->transferBtn->setIconSize(QSize(23,18));
        ui->transferBtn->setStyleSheet("background:transparent;color:grey");
        ui->transferBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        ui->contactBtn->setIcon(QIcon(DataMgr::getDataMgr()->getWorkPath() + "pic2/contactBtn_unselected.png"));
        ui->contactBtn->setIconSize(QSize(23,22));
        ui->contactBtn->setStyleSheet("background:transparent;color:grey");
        ui->contactBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        break;

    case 3:
        ui->surveyBtn->setIcon(QIcon(DataMgr::getDataMgr()->getWorkPath() + "pic2/surveyBtn_unselected.png"));
        ui->surveyBtn->setIconSize(QSize(29,28));
        ui->surveyBtn->setStyleSheet("background:transparent;color:grey");
        ui->surveyBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        ui->accountBtn->setIcon(QIcon(DataMgr::getDataMgr()->getWorkPath() + "pic2/accountBtn_unselected.png"));
        ui->accountBtn->setIconSize(QSize(24,17));
        ui->accountBtn->setStyleSheet("background:transparent;color:grey");
        ui->accountBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        ui->transferBtn->setIcon(QIcon(DataMgr::getDataMgr()->getWorkPath() + "pic2/transferBtn.png"));
        ui->transferBtn->setIconSize(QSize(23,18));
        ui->transferBtn->setStyleSheet("background:transparent;color:white");
        ui->transferBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        ui->delegateBtn->setIcon(QIcon(DataMgr::getDataMgr()->getWorkPath() + "pic2/delegateBtn_unselected.png"));
        ui->delegateBtn->setIconSize(QSize(26,26));
        ui->delegateBtn->setStyleSheet("background:transparent;color:grey");
        ui->delegateBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        ui->contactBtn->setIcon(QIcon(DataMgr::getDataMgr()->getWorkPath() + "pic2/contactBtn_unselected.png"));
        ui->contactBtn->setIconSize(QSize(23,22));
        ui->contactBtn->setStyleSheet("background:transparent;color:grey");
        ui->contactBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        break;

    case 4:
        ui->surveyBtn->setIcon(QIcon(DataMgr::getDataMgr()->getWorkPath() + "pic2/surveyBtn_unselected.png"));
        ui->surveyBtn->setIconSize(QSize(29,28));
        ui->surveyBtn->setStyleSheet("background:transparent;color:grey");
        ui->surveyBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        ui->accountBtn->setIcon(QIcon(DataMgr::getDataMgr()->getWorkPath() + "pic2/accountBtn_unselected.png"));
        ui->accountBtn->setIconSize(QSize(24,17));
        ui->accountBtn->setStyleSheet("background:transparent;color:grey");
        ui->accountBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        ui->transferBtn->setIcon(QIcon(DataMgr::getDataMgr()->getWorkPath() + "pic2/transferBtn_unselected.png"));
        ui->transferBtn->setIconSize(QSize(23,18));
        ui->transferBtn->setStyleSheet("background:transparent;color:grey");
        ui->transferBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        ui->delegateBtn->setIcon(QIcon(DataMgr::getDataMgr()->getWorkPath() + "pic2/delegateBtn.png"));
        ui->delegateBtn->setIconSize(QSize(26,26));
        ui->delegateBtn->setStyleSheet("background:transparent;color:white");
        ui->delegateBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        ui->contactBtn->setIcon(QIcon(DataMgr::getDataMgr()->getWorkPath() + "pic2/contactBtn_unselected.png"));
        ui->contactBtn->setIconSize(QSize(23,22));
        ui->contactBtn->setStyleSheet("background:transparent;color:grey");
        ui->contactBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        break;

    case 5:
        ui->surveyBtn->setIcon(QIcon(DataMgr::getDataMgr()->getWorkPath() + "pic2/surveyBtn_unselected.png"));
        ui->surveyBtn->setIconSize(QSize(29,28));
        ui->surveyBtn->setStyleSheet("background:transparent;color:grey");
        ui->surveyBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        ui->accountBtn->setIcon(QIcon(DataMgr::getDataMgr()->getWorkPath() + "pic2/accountBtn_unselected.png"));
        ui->accountBtn->setIconSize(QSize(24,17));
        ui->accountBtn->setStyleSheet("background:transparent;color:grey");
        ui->accountBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        ui->delegateBtn->setIcon(QIcon(DataMgr::getDataMgr()->getWorkPath() + "pic2/delegateBtn_unselected.png"));
        ui->delegateBtn->setIconSize(QSize(26,26));
        ui->delegateBtn->setStyleSheet("background:transparent;color:grey");
        ui->delegateBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        ui->transferBtn->setIcon(QIcon(DataMgr::getDataMgr()->getWorkPath() + "pic2/transferBtn_unselected.png"));
        ui->transferBtn->setIconSize(QSize(23,18));
        ui->transferBtn->setStyleSheet("background:transparent;color:grey");
        ui->transferBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        ui->contactBtn->setIcon(QIcon(DataMgr::getDataMgr()->getWorkPath() + "pic2/contactBtn.png"));
        ui->contactBtn->setIconSize(QSize(23,22));
        ui->contactBtn->setStyleSheet("background:transparent;color:white");
        ui->contactBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        break;

    default:
        break;
    }
}

void FunctionBar::retranslator()
{
    ui->retranslateUi(this);
    ui->versionLabel_2->setText("SelfSell Wallet\r\n" "Ver." SSC_WALLET_VERSION);
}

void FunctionBar::getInfo(QString result)
{
	if( result.isEmpty() )  return;

    int pos = result.indexOf( "\"blockchain_head_block_age\":") + 28;
    QString seconds = result.mid( pos, result.indexOf("\"blockchain_head_block_timestamp\":") - pos - 1);

    int pos2 = result.indexOf( "\"blockchain_head_block_num\":") + 28;
    QString num = result.mid( pos2, result.indexOf("\"blockchain_head_block_age\":") - pos2 - 1);

    if( seconds.toInt() < 0)  seconds = "0";
    int numToSync = seconds.toInt()/ 10;

	if (numToSync < 20 && num.toInt() > 0) {
		updated = true;
		if (!scan) {
			scan = true;
			DataMgr::getInstance()->walletRescanBlockchain();
		}
		DataMgr::getInstance()->setUpdated();
	} else {
		updated = false;
		wait_for_update = numToSync;
	}

}

void FunctionBar::refreshResetCombobox()
{
	foreach(ContractFromServer tokenCon, DataMgr::getInstance()->getContractConfig())
	{
		ui->assertComboBox->addItem(tokenCon.name);
	}
}
