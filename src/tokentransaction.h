#pragma once
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QSslConfiguration>
#include <QSsl>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonParseError>
#include <QJsonArray>
#include <QVariant>

#include <QDebug>
#include <QVector>

struct Transaction {
	QString from_acct;
	QString from_addr;
	QString to_acct;
	QString to_addr;
	QString amount;
	QString trx_time;
	QString frombalance;
	QString tobalance;
	QString memo;
	QString fee;
	//QString balance;
};

struct TrxVector {
	int currentPage;
	int totalPage;
	int pageSize;
	int totaRecords;
	int page;
	QString acount_name;
	QString addr;
	QString contract_id;
	QVector<Transaction> trx;
};
class TokenTransaction : public QObject {

	Q_OBJECT
public:
	TokenTransaction();
	~TokenTransaction();
	TrxVector trxvector;

public slots:
	void connectToBlockBrower(QString account_addr, QString asset, int page_n, int per_page_n = 10, int block_n = 0);
	void httpReadyread();
	void httpFinished();

signals:
	void tokenTrxRequestEnd();

private:
	void balanceRequestSet(QString& url, QString account_addr, QString asset, int page_n, int per_page_n, int block_n);
	void trxFromJson(QJsonObject& result_obj);
	void showTokenTraction(TrxVector& trxvector);

	QNetworkReply* pReply;
	QNetworkAccessManager netmgr;
	bool token_req;
};

