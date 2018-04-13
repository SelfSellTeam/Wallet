#include "contract.h"
#include "commandjson.h"

void Contract::callContract(QString& contract, QString& call_name,
	QString& function_name, QString& params,
	QString& asset_symbol, double call_limit) {

	clearPrefixAndParams();
    QString str("call_contract");
    setCommand(str);
//zxltab	setCommand(QString("call_contract"));
	QString param_value = contract;
	insertParam(param_type::string_param, param_value);

	param_value = call_name;
	insertParam(param_type::string_param, param_value);

	param_value = function_name;
	insertParam(param_type::string_param, param_value);

	param_value = params;
	insertParam(param_type::string_param, param_value);

	param_value = asset_symbol;
	insertParam(param_type::string_param, param_value);

	param_value = QString::number(call_limit, 10, 5);
	insertParam(param_type::double_param, param_value);

	sendCommand();
}

void Contract::callContractTesting(QString& contract, QString& call_name,
	QString& function_name, QString& params, QString& asset_symbol) {

    clearPrefixAndParams();//zxlrun

    QString str("call_contract_testing");
    setCommand(str);
//zxltab	setCommand(QString("call_contract_testing"));
	QString param_value = contract;
	insertParam(param_type::string_param, param_value);

	param_value = call_name;
	insertParam(param_type::string_param, param_value);

	param_value = function_name;
	insertParam(param_type::string_param, param_value);

	param_value = params;
	insertParam(param_type::string_param, param_value);

	param_value = asset_symbol;
	insertParam(param_type::string_param, param_value);

	sendCommand();
}

void Contract::walletTransferToContract(double amount_to_transfer, QString& asset_symbol,
	QString& from_account_name, QString& to_contract, double amount_for_exec) {

	clearPrefixAndParams();
    QString str("wallet_transfer_to_contract");
    setCommand(str);
//zxltab	setCommand(QString("wallet_transfer_to_contract"));
	QString param_value = QString::number(amount_to_transfer, 10, 5);
	insertParam(param_type::string_param, param_value);

	param_value = asset_symbol;
	insertParam(param_type::string_param, param_value);

	param_value = from_account_name;
	insertParam(param_type::string_param, param_value);

	param_value = to_contract;
	insertParam(param_type::string_param, param_value);

	param_value = QString::number(amount_for_exec, 10, 5);
	insertParam(param_type::string_param, param_value);

	sendCommand();
}

void Contract::walletTransferToContractTesting(double amount_to_transfer,
	QString& asset_symbol, QString& from_account_name, QString& to_contract) {

	clearPrefixAndParams();
    QString str("wallet_transfer_to_contract_testing");
    setCommand(str);
//zxltab	setCommand(QString("wallet_transfer_to_contract_testing"));
	QString param_value = QString::number(amount_to_transfer, 10, 5);
	insertParam(param_type::string_param, param_value);

	param_value = asset_symbol;
	insertParam(param_type::string_param, param_value);

	param_value = from_account_name;
	insertParam(param_type::string_param, param_value);

	param_value = to_contract;
	insertParam(param_type::string_param, param_value);

	sendCommand();
}

void Contract::getContractInfo(QString& contract) {
	clearPrefixAndParams();
    QString str("call_contract_testing");
    setCommand(str);
//zxltab	setCommand(QString("call_contract_testing"));
	QString param_value = contract;
	insertParam(param_type::string_param, param_value);

	sendCommand();
}
