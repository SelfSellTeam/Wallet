#ifndef __MISC_H__
#define __MISC_H__

#include <QStringList>
#include <QProcess>
#include <QVector>

#define CONTRACT_FILE_NAME "\\contract_config.dat"
#define UNLOCK_CMD_POSTFIX  "_not_first_login";
#define CONFIG_INI_FILENAME "config.ini"
#define IDE_PATH "AchainDevelopmentTool"
#define ACHAIN "ACHAIN"

#define MODULE_ACHAIN "ACHAINDEVELOPMENTTOOL"
#define SSC_WALLET_VERSION "1.0.8"
#define AUTO_REFRESH_TIME 10000
#define PWD_LOCK_TIME  7200
#define CHAIN_RPC_PORT 60010
#define ACHAIN_ACCOUNT_MAX 50
#define BTN_SELECTED_STYLESHEET   "QPushButton{ background:white;font: 14px \"微软雅黑\";border: 0px solid #000000;border-bottom: 3px solid rgb(68,217,199);}"
#define BTN_UNSELECTED_STYLESHEET "QPushButton{ background:white;font: 14px \"微软雅黑\";border: 0px solid #000000;border-bottom: 3px solid rgb(233,233,240);}"
//#define HELP_HTML "https://www.achain.com/help/index.html"

//#define TOKEN_REQ "https://browser.achain.com/wallets/api/browser/act/TransactionList.Query?"


//#define TEST

#ifdef TEST
    #define TOKEN_DOMAIN "http://172.16.33.201:8381/"
#else
    #define TOKEN_DOMAIN "https://api.achain.com/"
#endif


#define TOKEN_REQ  TOKEN_DOMAIN "wallets/api/browser/act/contractTransactionAll?"
#define OTHER_TOKEN_REQ TOKEN_DOMAIN "wallets/api/browser/act/contractTransactions?"
#define CON_CONFOG_URL TOKEN_DOMAIN "wallets/api/browser/act/getAllContracts?status=2"

//#define TEST_CONN_ADDR "CONNcqE8irmktxMk1voQ4JePsFu15eonJ5Rx"
#define TEST_CONN_ADDR "CONF4GXyiMSwqQPYaU4CddBEkTjRrHDrrUAV"

#define SMC_CONN_ADDR TEST_CONN_ADDR
#define SMC_CONN_NAME "SMC"



#define COMMONASSET "SSC"

struct ContractFromServer {
    QString name;
    QString addr;
};

struct ContractConfig {
    ContractConfig() : version(0) {};
    int version;
    QVector<ContractFromServer> cons;
};


enum BlockChainType {
    Test = 0,
    Formal
};

struct SmartContractInfo {
    QString address;
    QString name;
    QString level;
    QString owner;
    QString ownerAddress;
    QString ownerName;
    QString state;
    QString description;
    QString balance;
    QStringList abiList;
    QStringList eventList;
};

template <class key, class value>
key getKeyByValue(QMap<key, value> m, value v);
QString toThousandFigure( int number);     // 转换为0001,0015  这种数字格式
QString doubleToDecimals(double number, bool rounding = false);  // 5位小数去掉后三位小数, rounding为false舍尾，为true进1
QString checkZero(double balance);
QString longNumToString(__int64 num, int precision);
class Misc {
  public:
    static QString changePathFormat(QString path);
    static QString restorePathFormat(QString path);
    static bool isInContracts(QString filePath);
    static bool isInScripts(QString filePath);
    static qint64 write(QString cmd, QProcess* process);
    static QString read(QProcess* process);
    static QString readAll(QProcess *process);

    static bool isContractFileRegistered(QString path);
    static bool isContractFileUpgraded(QString path);
    static QString configGetContractAddress(QString path);
    static void configSetContractAddress(QString path, QString address);
};
#endif // Misc_H



