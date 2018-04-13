#ifndef __COMMAND_JSON_H__
#define __COMMAND_JSON_H__
#pragma once

#include "misc.h"

#include <QStringList>
#include <QVector>

enum param_type{
	integer_param = 0,
	string_param,
	bool_param,
	double_param
};

struct param_info {
	param_type type;
	QString param;
};

class CommandJson {
public:
	CommandJson();
	virtual ~CommandJson();

protected:
	void clearPrefixAndParams();
	void setCommand(QString& command);
	void insertParam(param_type type, QString& value);
	void sendCommand();
	void addSpeicalPrefix(QString& prefix);
	void addSepcialPostfix(QString& postfix);

protected:
	QString buildRpcJson();

private:
	QVector<param_info> _command_params;
	QString             _command_method;
	QString             _special_prefix;
	QString             _special_postfix;
};
#endif // COMMAND_JSON_H
