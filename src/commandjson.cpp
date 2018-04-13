#include "commandjson.h"

#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include "rpcmgr.h"

CommandJson::CommandJson() : _command_method(""){
}

CommandJson::~CommandJson() {
}

QString CommandJson::buildRpcJson() {
	QJsonDocument json_doc;
	QJsonObject json_obj;
	QJsonArray json_array;
	QString  string_val;
	bool bool_val;
	int int_val;
	double double_val;
	for (int i = 0; i < (int)_command_params.size(); i++) {
		param_info info = _command_params.at(i);
		param_type type = info.type;
		string_val = info.param;
		if (param_type::integer_param == type) {
			int_val = string_val.toInt();
			json_array.insert(i, int_val);
		} else if (param_type::bool_param == type) {
			bool_val = string_val.toInt() ? true : false;
			json_array.insert(i, bool_val);
		} else if (param_type::double_param == type){
			double_val = string_val.toDouble();
			json_array.insert(i, double_val);
		} else {
			json_array.insert(i, string_val);
		}
	}

	QString id = QString("id_") + _command_method;

	if (!_special_prefix.isEmpty()) {
		id = _special_prefix + id;
	}
	
	if (!_special_postfix.isEmpty()) {
		id = id + _special_postfix;
	}

	json_obj.insert("jsonrpc", QString("2.0"));
	json_obj.insert("id", id);
	if (_command_method.contains(QString("console_")))
	{
		_command_method = _command_method.mid(_command_method.indexOf("_") + 1, _command_method.length());
	}
	json_obj.insert("method", _command_method);
	json_obj.insert("params", json_array);

	json_doc.setObject(json_obj);

	QByteArray byte_array = json_doc.toJson(QJsonDocument::Compact);
	QString json_str(byte_array);

	return json_str;
}

void CommandJson::addSpeicalPrefix(QString& prefix) {
	_special_prefix = prefix;
}

void CommandJson::addSepcialPostfix(QString& postfix) {
	_special_postfix = postfix;
}

void CommandJson::insertParam(param_type type, QString& param) {
	param_info info;
	info.type = type;
	info.param = param;
	_command_params.push_back(info);
}

void CommandJson::clearPrefixAndParams() {
	_command_params.clear();
	_special_prefix = "";
	_special_postfix = "";
}

void CommandJson::setCommand(QString& command) {
	_command_method = command;
}

void CommandJson::sendCommand() {
	QString json_string = buildRpcJson();
	RpcMgr::getInstance()->postRPC(json_string);
}