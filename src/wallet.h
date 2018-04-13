#ifndef __WALLET_H__
#define __WALLET_H__

#include "misc.h"
#include "commandjson.h"

#include <QStringList>
#include <QMap>

enum account_content {
	address = 0,
	balance,
	all
};

class Walllet : public CommandJson {
public:
	Walllet();
	virtual ~Walllet();

public:
    //wallet
	void create(QString& name, QString& password);
	void getInfo();
	void close();
	void open(QString& name);
	void unlock(int time_out, QString& password);
	void importPrivateKey(QString& wif_key_to_import, QString& account_name, bool create_account, bool rescan_blockchain);
	void importRegisterPrivateKey(QString& wif_key_to_import, QString& account_name, bool create_account, bool rescan_blockchain);
	void backupCreate(QString& path_file);
	void backupRestore(QString& path_file, QString& name, QString& password);
	void setAutomaticBackups(bool enable);
	void setTransactionExpirationTime(int time);
	void accountTransactionHistory(QString& account_name, QString& asset_name);
	void transactionHistorySplite(QString& user, QString& asset_name, int limit, int trx_type);
	void transactionHistorySpliteWithId(QString& user, QString& asset_name, int limit, int trx_type);
	void getPendingTransactionErrors(QString& path_file);
	void changePassphrase(QString& old_password, QString& new_password);
	void checkPassphrase(QString& password);
	void checkAddress(QString& address);
	void accountCreate(QString& account_name);
	void accountSetApproval(QString& account_name, int approval);
	void transferToAddress(QString& amount_to_transfer, QString& asset_symbol, QString& from_account_name, QString& to_address, QString& memo_message, QString& strategy);
	void transferToAddressWithId(QString unique_trx_id, QString& amount_to_transfer, QString& asset_symbol, QString& from_account_name, QString& to_address, QString& memo_message, QString& strategy);
	void transferToPublicAccount(QString& amount_to_transfer, QString& asset_symbol, QString& from_account_name, QString& to_account_name, QString& memo_message, QString& strategy);
	void transferToPublicAccountWithId(QString unique_trx_id, QString& amount_to_transfer, QString& asset_symbol, QString& from_account_name, QString& to_account_name, QString& memo_message, QString& strategy);
	void rescanBlockchain();
	void cancelScan();
	void getTransaction(QString& transaction_id_prefix);
	void accountRegiste(QString& account_name, QString& pay_from_account, QString& public_data, int delegate_pay_rate, QString& account_type);
	void listAccounts();
	void listUnregisteredAccounts();
	void listMyAddress();
	void listMyAccounts();
	void getAccountPublicAddress(QString& account);
	void accountRename(QString& current_name, QString& new_name);
	void accountBalance(QString& account_name);
	void accountBalanceIds(QString& account_name);
	void delegateWithdrawPay(QString& delegate_name, QString& to_account_name, QString& amount_to_withdraw);
	void delegatePayBalanceQuery(QString& account_name);
	void getDelegateStatus(QString& account_name);
	void accountDelete(QString& account_name);
	void setTransactionFee(QString& trx_fee);
	void getTransactionFee(QString& asset_name);
	void setTransactionScanning(bool enable);
	void dumpPrivateKey(QString& addr);
	void delegateSetBlockProduction(QString& name, bool enable);
	void dumpAccountPrivateKey(QString& name, int type);
	void accountUpdateRegistration(QString& account_name, QString& pay_from_account, QString& public_data, int delegate_pay_rate, QString& account_type);
};
#endif // Wallet_H
