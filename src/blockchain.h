#ifndef __BLOCK_CHAIN_H__
#define __BLOCK_CHAIN_H__
#pragma once

#include "commandjson.h"
#include "misc.h"

class BlockChain : public CommandJson {
public:
	BlockChain();
	virtual ~BlockChain();

public:
	void getBlockTransactions(QString& blcok_id);
	void getAccount(QString& account);
	void getInfo();
	void generateSnapshot(QString& path_file);
	void isSynced();
	void getBlockCount();
	void getBalance(QString& balance_id);
	void listKeyBalances(QString& public_key);
	void listActiveDelegates(int start_num, int limit_num);
	void listAccounts(int first, int limit);
	void listPendingTransactions();
	void listAssets();
	void getTransaction(QString& trx_id, bool exact_search);
	void listDelegates(int first, int count);
	void listBlocks(int max_block_num, int limit);
	void getBlockSignee(QString& block);
	void getBlock(int num);
};
#endif // Misc_H
