#ifndef __CONTRACT_H__
#define __CONTRACT_H__
#pragma once

#include "commandjson.h"
#include <QStringList>
#include <QMap>

class Contract : public CommandJson {
public:
	Contract() {};
	virtual ~Contract() {};
	
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
};
#endif

