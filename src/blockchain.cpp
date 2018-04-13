#include "blockchain.h"

BlockChain::BlockChain() {
}

BlockChain::~BlockChain() {
}

void BlockChain::getBlockTransactions(QString& blcok_id) {
	clearPrefixAndParams();
    QString str("blockchain_get_block_transactions");
    setCommand(str);
//zxltab	setCommand(QString("blockchain_get_block_transactions"));
	insertParam(param_type::string_param, blcok_id);
	sendCommand();
}

void BlockChain::getAccount(QString& account) {
	clearPrefixAndParams();
    QString str("blockchain_get_account");
    setCommand(str);
//zxltab	setCommand(QString("blockchain_get_account"));
	insertParam(param_type::string_param, account);
	sendCommand();
}

void BlockChain::getInfo() {
	clearPrefixAndParams();
    QString str("blockchain_get_info");
    setCommand(str);
//zxltab	setCommand(QString("blockchain_get_info"));
	sendCommand();
}

void BlockChain::generateSnapshot(QString& path_file) {
	clearPrefixAndParams();
    QString str("blockchain_generate_snapshot");
    setCommand(str);
//zxltab	setCommand(QString("blockchain_generate_snapshot"));
	insertParam(param_type::string_param, path_file);
	sendCommand();
}

void BlockChain::isSynced() {
	clearPrefixAndParams();
    QString str("blockchain_is_synced");
    setCommand(str);
//zxltab	setCommand(QString("blockchain_is_synced"));
	sendCommand();
}

void BlockChain::getBlockCount() {
	clearPrefixAndParams();
    QString str("blockchain_get_block_count");
    setCommand(str);
//zxltab	setCommand(QString("blockchain_get_block_count"));
	sendCommand();
}

void BlockChain::getBalance(QString& balance_id) {
	clearPrefixAndParams();
    QString str("blockchain_get_balance");
    setCommand(str);
//zxltab	setCommand(QString("blockchain_get_balance"));
	insertParam(param_type::string_param, balance_id);
	sendCommand();
}

void BlockChain::listKeyBalances(QString& public_key) {
	clearPrefixAndParams();
    QString str("blockchain_list_key_balances");
    setCommand(str);
//zxltab	setCommand(QString("blockchain_list_key_balances"));
	insertParam(param_type::string_param, public_key);
	sendCommand();
}

void BlockChain::listActiveDelegates(int start_num, int limit_num) {
	clearPrefixAndParams();
    QString str("blockchain_list_active_delegates");
    setCommand(str);
//zxltab	setCommand(QString("blockchain_list_active_delegates"));

	QString param_value = QString::number(start_num);
	insertParam(param_type::integer_param, param_value);

	param_value = QString::number(limit_num);
	insertParam(param_type::integer_param, param_value);
	sendCommand();
}

void BlockChain::listAccounts(int first, int limit) {
	clearPrefixAndParams();
    QString str("blockchain_list_accounts");
    setCommand(str);
//zxltab	setCommand(QString("blockchain_list_accounts"));

	QString param_value = QString::number(first);
	insertParam(param_type::integer_param, param_value);

	param_value = QString::number(limit);
	insertParam(param_type::integer_param, param_value);
	sendCommand();
}

void BlockChain::listPendingTransactions() {
	clearPrefixAndParams();
    QString str("blockchain_list_pending_transactions");
    setCommand(str);
//zxltab	setCommand(QString("blockchain_list_pending_transactions"));
	sendCommand();
}

void BlockChain::listAssets()
{
	clearPrefixAndParams();
	QString str("blockchain_list_assets");
	setCommand(str);
	//zxltab	setCommand(QString("blockchain_list_pending_transactions"));
	sendCommand();
}

void BlockChain::getTransaction(QString& trx_id, bool exact_search) {
	clearPrefixAndParams();
    QString str("blockchain_get_transaction");
    setCommand(str);
//zxltab	setCommand(QString("blockchain_get_transaction"));

	QString param_value = trx_id;
	insertParam(param_type::string_param, param_value);

	param_value = exact_search ? "1" : "0";
	insertParam(param_type::bool_param, param_value);
	sendCommand();
}

void BlockChain::listDelegates(int first, int count) {
	clearPrefixAndParams();
    QString str("blockchain_list_delegates");
    setCommand(str);
//zxltab	setCommand(QString("blockchain_list_delegates"));

	QString param_value = QString::number(first);
	insertParam(param_type::integer_param, param_value);

	param_value = QString::number(count);
	insertParam(param_type::integer_param, param_value);
	sendCommand();
}

void BlockChain::listBlocks(int max_block_num, int limit) {
	clearPrefixAndParams();
    QString str("blockchain_list_blocks");
    setCommand(str);
//zxltab	setCommand(QString("blockchain_list_blocks"));

	QString param_value = QString::number(max_block_num);
	insertParam(param_type::integer_param, param_value);

	param_value = QString::number(limit);
	insertParam(param_type::integer_param, param_value);
	sendCommand();
}

void BlockChain::getBlockSignee(QString& block) {
	clearPrefixAndParams();
    QString str("blockchain_get_block_signee");
    setCommand(str);
//zxltab	setCommand(QString("blockchain_get_block_signee"));

	QString param_value = block;
	insertParam(param_type::string_param, param_value);

	sendCommand();
}

void BlockChain::getBlock(int num) {
	clearPrefixAndParams();
    QString str("blockchain_get_block_signee");
    setCommand(str);
//zxltab	setCommand(QString("blockchain_get_block_signee"));

	QString param_value = QString::number(num);
	insertParam(param_type::integer_param, param_value);

	sendCommand();
}
