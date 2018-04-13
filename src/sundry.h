#ifndef __SUNDRY_H__
#define __SUNDRY_H__
#pragma once

#include "commandjson.h"
#include <QStringList>

class Sundry : public CommandJson {
public:
	Sundry();
	virtual ~Sundry();

	void about();
	void getInfo();
	void validateAddress(QString& public_key);
	void balance();
	void lock();

	QString getLoginJson(QString& user, QString& password);
	void rpcSetUserName(QString& user);
	void rpcSetPassword(QString& password);
	void rpcStartServer(int& port);
	
	void ntpUpdateTime();
	void diskUsage();

	// network
	void networkAddNode(QString& node, QString command);
	void networkGetInfo();
	void networkGetConnectionCount();
	void networkGetPeerInfo(bool hide_firewalled_nodes);
	void networkListPotentialPeers();
	void networkGetUpnpInfo();

	// delegate
	void delegateGetConfig();
	void delegateSetNetworkMinConnectionCount(int min_count);
	void delegateSetBlockMaxTransactionCount(int trx_max_count);
	void delegateSetBlockMaxSize(int blcok_size);
	void delegateSetTransactionMaxSize(int trx_max_size);
	void delegateSetTransactionMinFee(int trx_min_fee);

	// script
	void executeScript(QString& path_file);

	// console
	void executeConsolerCommand(QString& command, QStringList& args, bool rpc_enabled);
};
#endif

