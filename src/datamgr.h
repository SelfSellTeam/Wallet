#ifndef __DATA_MGR_H__
#define __DATA_MGR_H__

#include "misc.h"
#include "blockchain.h"
#include "wallet.h"
#include "sundry.h"
#include "contract.h"
#include "tokentransaction.h"

#include <QObject>
#include <QStringList>
#include <QMap>
#include <QNetworkReply>
#include <QSettings>
#include <QTimer>

//wanglh
struct CommonAssetInfo {
	int id;
	QString symbol;
	QString name;
	QString description;
	QString public_data;
	int issuer_account_id;
	int precision;
	QString registration_date;
	QString last_update;
	QString maximum_share_supply;
	QString current_share_supply;
	QString collected_fees;
	QString flags;
	QString issuer_permissions;
	int transaction_fee;
	int market_fee;
		//"authority" : {"required":0, "owners" : []}
};

struct CommonAccountInfo {
	enum ChainType{ TestChain = 1, FormalChain };
	ChainType type;
	QString name;
	QString address;
	//QString balance;
	QMap<int, __int64> balanceinfos;//wanglh
	QString registerTime;
	QString ownerKey;
	bool isDelegate = false;
};

struct Amount {
	qint64 amount;
	int asset_id;
	QString amount_div_precision;
};

struct LedgerEntries {
	QString from_account;//addr
	QString from_account_name; //name
	QString to_account; //addr
	QString to_account_name;//name
	QString memo;
	QString running_balances;
	Amount  amount;
};

//commasset
struct TrxResult {
	bool vir;
	bool confiremed;
	bool market;
	bool market_cancel;
	QString trx_id;
	int block_num;
	int block_position;
	int trx_type;
	QString time_stamp;
	QString expiration_timestamp;
	Amount fee;
	QVector<LedgerEntries> entries;
};

struct TokenAccountInfo {
	QString name;
	QString address;
	QString balance;
};

class DataMgr : public QObject {
	Q_OBJECT
public:
	static DataMgr* getDataMgr();
	static DataMgr* getInstance();
	static void    deleteDataMgr();


	//QString language;
	int lockMinutes;
	bool notProduce;
	bool showPrivateTips;

private:
	DataMgr();
	~DataMgr();

public:
	bool isUpdate() { return updated; }
	void setUpdated() { updated = true; }

	
	//TokenAsset
	static void setAccountTokenBalance(QString account, QString asset, QString balance); 
	static QString getAccountTokenBalance(QString account, QString asset);
	QString getAccountAddr(QString account);
	QString getAddrAccont(QString addr);
	TokenTransaction* getTokenTrxConnect() { return &tokenTrxConnect; }
	TrxVector* getTokenTrx() { return &(tokenTrxConnect.trxvector); }

	// Sundry
	void about();
	void getInfo();
	void validateAddress(QString& public_key);
	void rpcSetUserName(QString& user);
	void rpcSetPassword(QString& password);
	void rpcStartServer(int& port);
	void ntpUpdateTime();
	void diskUsage();
	void networkAddNode(QString& node, QString command = "add");
	void networkGetInfo();
	void networkGetConnectionCount();
	void networkGetPeerInfo(bool hide_firewalled_nodes);
	void networkListPotentialPeers();
	void networkGetUpnpInfo();
	void executeScript(QString& path_file);
	void delegateGetConfig();
	void delegateSetNetworkMinConnectionCount(int min_count);
	void delegateSetBlockMaxTransactionCount(int trx_max_count);
	void delegateSetBlockMaxSize(int blcok_size);
	void delegateSetTransactionMaxSize(int trx_max_size);
	void delegateSetTransactionMinFee(int trx_min_fee);
	void executeConsolerCommand(QString& command, QStringList& args, bool rpc_enabled);
	void balance();
	void lock();
	QString getLoginJson(QString& user, QString& password);

	// BlockChain
	void blockChainGetBlockTransactions(QString& blcok_id);
	void blockChainGetAccount(QString& account);
	void blockChainGetInfo();
	void blockChainGenerateSnapshot(QString& path_file);
	void blockChainIsSynced();
	void blockChainGetBlockCount();
	void blockChainGetBalance(QString& balance_id);
	void blockChainListKeyBalances(QString& public_key);
	void blockChainListActiveDelegates(int start_num, int limit_num);
	void blockChainListAccounts(int first, int limit);
	void blockChainListPendingTransactions();
	void blockChainListAssets();
	void blockChainGetTransaction(QString& trx_id, bool exact_search);
	void blockChainListDelegates(int first, int count);
	void blockChainListBlocks(int max_block_num, int limit);
	void blockChainGetBlockSignee(QString& block);
	void blockChainGetBlock(int num);

	// wallet
	void walletCreate(QString& name, QString& password);
	void walletGetInfo();
	void walletClose();
	void walletOpen(QString& name);
	void walletUnlock(int time_out, QString& password);
	void walletImportPrivateKey(QString& wif_key_to_import, QString& account_name, bool create_account, bool rescan_blockchain);
	void importRegisterPrivateKey(QString& wif_key_to_import, QString& account_name, bool create_account, bool rescan_blockchain);
	void walletBackupCreate(QString& path_file);
	void walletBackupRestore(QString& path_file, QString& name, QString& password);
	void walletSetAutomaticBackups(bool enable);
	void walletSetTransactionExpirationTime(int time);
	void walletAccountTransactionHistory(QString& account_name, QString& asset_name);
	void walletTransactionHistorySplite(QString& user, QString& asset_name, int limit, int trx_type);
	void walletTransactionHistorySpliteWithId(QString& user, QString& asset_name, int limit, int trx_type);
	void walletGetPendingTransactionErrors(QString& path_file);
	void walletChangePassphrase(QString& old_password, QString& new_password);
	void walletCheckPassphrase(QString& password);
	void walletCheckAddress(QString& address);
	void walletAccountCreate(QString& account_name);
	void walletAccountSetApproval(QString& account_name, int approval);
	void walletTransferToAddress(QString& amount_to_transfer, QString& asset_symbol, QString& from_account_name, QString& to_address, QString& memo_message, QString& strategy);
	void walletTransferToAddressWithId(QString unique_trx_id, QString& amount_to_transfer, QString& asset_symbol, QString& from_account_name, QString& to_address, QString& memo_message, QString& strategy);
	void walletTransferToPublicAccount(QString& amount_to_transfer, QString& asset_symbol, QString& from_account_name, QString& to_account_name, QString& memo_message, QString& strategy);
	void walletTransferToPublicAccountWithId(QString unique_trx_id, QString& amount_to_transfer, QString& asset_symbol, QString& from_account_name, QString& to_account_name, QString& memo_message, QString& strategy);
	void walletRescanBlockchain();
	void walletCancelScan();
	void walletGetTransaction(QString& transaction_id_prefix);
	void walletAccountRegiste(QString& account_name, QString& pay_from_account, QString& public_data, int delegate_pay_rate, QString& account_type);
	void walletListAccounts();
	void walletListUnregisteredAccounts();
	void walletListMyAddress();
	void walletListMyAccounts();
	void walletGetAccountPublicAddress(QString& account);
	void walletAccountRename(QString& current_name, QString& new_name);
	void walletAccountBalance(QString& account_name);
	void walletAccountBalanceIds(QString& account_name);
	void walletDelegateWithdrawPay(QString& delegate_name, QString& to_account_name, QString& amount_to_withdraw);
	void walletDelegatePayBalanceQuery(QString& account_name);
	void walletGetDelegateStatue(QString& account_name);
	void walletAccountDelete(QString& account_name);
	void walletSetTransactionFee(QString& trx_fee);
	void walletGetTransactionFee(QString& asset_name);
	void walletSetTransactionScanning(bool enable);
	void walletDumpPrivateKey(QString& addr);
	void walletDelegateSetBlockProduction(QString& name, bool enable);
	void walletDumpAccountPrivateKey(QString& name, int type);
	void walletAccountUpdateRegistration(QString& account_name, QString& pay_from_account, QString& public_data, int delegate_pay_rate, QString& account_type);
	//QString walletBalanceByAccountnameAndAssettype(QString accountname, QString assettype);
	double getCurBalanceByAssettypeAndAccountname(QString assettype, QString accountname);
	QString walletCurBalanceByAccountname(QString accountname);
	QString walletCurBalanceByAccountinfo(CommonAccountInfo accountinfo);
	bool canTranslateBalance(QString assetType, QString accountname, double amount = 0.0);

	void tokenQueryTransferlog(QString conAddr, QString call_name);
	void tokenQueryBalance(QString conName, QString call_name);
	void tokenTransferTo(QString call_name, QString tokenType, QString to_address, double amount, double fee, QString remark);

	// contract
	void callContract(QString& contract, QString& call_name,
		QString& function_name, QString& params,
		QString& asset_symbol, double call_limit);
	void callContractTesting(QString& contract, QString& call_name,
		QString& function_name, QString& params, QString& asset_symbol);
	void walletTransferToContract(double amount_to_transfer, QString& asset_symbol,
		QString& from_account_name, QString& to_contract, double amount_for_exec);
	void walletTransferToContractTesting(double amount_to_transfer,
		QString& asset_symbol, QString& from_account_name, QString& to_contract);
	void getContractInfo(QString& contract);

public:
	QSettings* getSettings() { return _config_file; };
	QString getAppDataPath() { return _app_data_path; };
    QString getWorkPath() { return _app_work_path; };

	QVector<ContractFromServer> getContractConfig() { return _contract_config; };
	
	void setCurrentAccount(QString accountName);
	QString getCurrentAccount();

	void setCurrentAssetType(QString assetType);
	static QString getCurrentAssetType();
	int getCurrentAssetTypeID();
	double getMinTransactionFee();
	
	QMap<QString, QString>* getCurrentTrx() { return &_trx_data; }

	void onUpdateRpcResult(QString id, QString data);
	void parseTrxResultJson(QString trx_json, QVector<TrxResult>& trxes);

	QMap<QString, QVector<TrxResult>>* getTrxResults() { return &_trx_result_map; };
	QMap<QString, CommonAccountInfo>* getAccountInfo() { return &_account_info_map; };
	QMap<int, CommonAssetInfo>* getAssetInfo() { return &_asset_info_map; };

	QMap<QString, QMap<QString, TokenAccountInfo>>* getTokenAccountInfo() { return &_token_accounts_info_map; };
	//Acount -> asset -> balance

    void setLanguage(QString& lang) { language = lang; }
    QString getLanguage() { return language; }

    QString getConfigPath() { return _tool_config_path + "/config.ini"; }

private:
	void parseContract(QString& json);

	//ContractConfig loadLocalConConfig();
	//void setContractConfig();

	void initSettings();
	void unInitSettings();

	void getSystemEnvironmentPath();
	void changeToToolConfigPath();
	void getMinTransactionFee(QString result);

public slots:
	void onFinished();
	void onError(QNetworkReply::NetworkError errorCode);
    void fetchAssetInfo();
	

signals:
	void finished();
	void error(QNetworkReply::NetworkError);

	void onCallContract(QString);
	void onCallContractTesting(QString);
	void onWalletTransferToContract(QString);
	void onWalletTransferToContractTesting(QString);
	void onGetContractInfo(QString);

	void onAbout(QString);
	void onGetInfo(QString);
    void assetTypeGet();

	void onValidateAddress(QString);
	void onRpcSetUserName(QString);
	void onRpcSetPassword(QString);
	void onRpcStartServer(QString);
	void onNtpUpdateTime(QString);
	void onDiskUsage(QString);
	void onNetworkAddNode(QString);
	void onNetworkGetInfo(QString);
	void onNetworkGetConnectionCount(QString);
	void onNetworkGetPeerInfo(QString);
	void onNetworkListPotentialPeers(QString);
	void onNetworkGetUpnpInfo(QString);
	void onExecuteScript(QString);
	void onDelegateGetConfig(QString);
	void onDelegateSetNetworkMinConnectionCount(QString);
	void onDelegateSetBlockMaxTransactionCount(QString);
	void onDelegateSetBlockMaxSize(QString);
	void onDelegateSetTransactionMaxSize(QString);
	void onDelegateSetTransactionMinFee(QString);
	void onBalance(QString);
	void onLock(QString);
	void onExecuteConsoleCommand(QString);

	void onBlockChainGetBlockTransactions(QString);
	void onBlockChainGetAccount(QString);
	void onBlockChainGetInfo(QString);
	void onBlockChainGenerateSnapshot(QString);
	void onBlockChainIsSynced(QString);
	void onBlockChainGetBlockCount(QString);
	void onBlockChainGetBalance(QString);
	void onBlockChainListKeyBalances(QString);
	void onBlockChainListActiveDelegates(QString);
	void onBlockChainListAccounts(QString);
	void onBlockChainListPendingTransactions(QString);
	void onBlockChainListAssets(QString);
	void onBlockChainGetTransaction(QString);
	void onBlockChainListDelegates(QString);
	void onBlockChainListBlocks(QString);
	void onBlockChainGetBlockSignee(QString);
	void onBlockChainGetBlock(QString);

	void onWalletCreate(QString);
	void onWalletGetInfo(QString);
	void onWalletClose(QString);
	void onWalletOpen(QString);
	void onWalletUnlock(QString);
	void onWalletImportPrivateKey(QString);
	void onWalletImportRegisterPrivateKey(QString);
	void onWalletBackupCreate(QString);
	void onWalletBackupRestore(QString);
	void onWalletSetAutomaticBackups(QString);
	void onWalletSetTransactionExpirationTime(QString);
	void onWalletAccountTransactionHistory(QString);
	void onWalletTransactionHistorySplite(QString);
	void onWalletTransactionHistorySpliteWithId(QString, QString);
	void onWalletGetPendingTransactionErrors(QString);
	void onWalletChangePassphrase(QString);
	void onWalletCheckPassphrase(QString);
	void onWalletCheckAddress(QString);
	void onWalletAccountCreate(QString);
	void onWalletAccountSetApproval(QString);
	void onWalletTransferToAddress(QString);
	void onWalletTransferToAddressWithId(QString, QString);
	void onWalletTransferToPublicAccount(QString);
	void onWalletTransferToPublicAccountWithId(QString, QString);
	void onWalletRescanBlockchain(QString);
	void onWalletCancelScan(QString);
	void onWalletGetTransaction(QString);
	void onWalletAccountRegiste(QString);
	void onWalletListMyAddresses(QString);
	void onWalletListAccounts(QString);
	void onWalletListUnregisteredAccounts(QString);
	void onWalletListMyAccounts(QString);
	void onWalletGetAccountPublicAddress(QString);
	void onWalletAccountRename(QString);
	void onWalletAccountBalance(QString);
	void onWalletAccountBalanceIds(QString);
	void onWalletDelegateWithdrawPay(QString);
	void onWalletDelegatePayBalanceQuery(QString);
	void onWalletGetDelegateStatue(QString);
	void onWalletAccountDelete(QString);
	void onWalletSetTransactionFee(QString);
	void onWalletGetTransactionFee(QString);
	void onWalletSetTransactionScanning(QString);
	void onWalletDumpPrivateKey(QString);
	void onWalletDelegateSetBlockProduction(QString);
	void onWalletDumpAccountPrivateKey(QString);
	void onWalletAccountUpdateRegistration(QString);

	void onAssetChange();

private:
	static DataMgr* _data_mgr;
	static QString _current_asset_type;
	static QMap<QString, QString> _trx_data;

private:
	Sundry  _sundry;
	BlockChain  _block_chain;
	Walllet  _wallet;
	Contract _contract;

	QString _current_account;
	QSettings* _config_file;

	QString _app_data_path;
    QString _app_work_path;
	QString _tool_config_path;
	double _min_tansaction_fee;
	
	QVector<ContractFromServer> _contract_config;

	QMap<QString, QVector<TrxResult>> _trx_result_map;
	QMap<QString, CommonAccountInfo>  _account_info_map;
	QMap<int, CommonAssetInfo> _asset_info_map;
	QMap<QString, QMap<QString, TokenAccountInfo>> _token_accounts_info_map;
	TokenTransaction tokenTrxConnect;
	QString language;
	bool updated;

    QTimer* timerGetAsset;
};
#endif // Misc_H
