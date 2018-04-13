#include "goopal.h"
#include "workerthreadmanager.h"
#include "sandboxcommandmap.h"

#include <QTextCodec>
#include <QDebug>
#ifdef WIN32
#include <Windows.h>
#endif //zxlwin
#include <QTimer>
#include <QThread>
#include <QApplication>
#include <QDir>
#include <QtNetwork>


Goopal* Goopal::goo = 0;

Goopal::Goopal()
{
}

Goopal::~Goopal()
{
}

Goopal* Goopal::getInstance()
{
    if( goo == NULL)
    {
        goo = new Goopal;
    }
    return goo;
}

QString toJsonFormat( QString id, QString instruction,
                      QStringList parameters)
{
    QString sandboxCommand = instruction;
	/*
    if( Goopal::getInstance()->isInSandBox)
    {
        if( g_sandBoxCommandMap.contains(instruction))
        {
            sandboxCommand = g_sandBoxCommandMap.value(instruction);
        }
    }
	*/
    QString str = "{\"jsonrpc\":\"2.0\",\"id\":\"";
    str += id;
    str += "\",\"method\":\"" + sandboxCommand;
    str += "\",\"params\":[" ;

    if( parameters.size() > 0)
    {
        foreach (QString para, parameters)
        {
            str += "\"" + para + "\"" + ",";
        }
        str = str.left( str.size() - 1 );
    }

    str += "]}";

    return str;
}

template <class key,class value>
key getKeyByValue(QMap<key, value> m, value v)
{
    foreach (key k, m)
    {
        if( m.value(k) == v)   return k;
    }

    return m.end();
}
