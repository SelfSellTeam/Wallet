#include "misc.h"

#ifdef WIN32
#include <Windows.h>
#else
#include <QKeyEvent>
//#include <X11/XKBlib.h>
//# undef KeyPress
//# undef KeyRelease
//# undef FocusIn
//# undef FocusOut
//// #undef those Xlib #defines that conflict with QEvent::Type enum
#endif //zxlwin

#include <QFileInfo>
#include <QDir>
#include <QApplication>
#include <QTextCodec>

template <class key, class value>
key getKeyByValue(QMap<key, value> m, value v)
{
	foreach(key k, m)
	{
		if (m.value(k) == v)   return k;
	}

	return m.end();
}

QString toThousandFigure(int number) // 转换为0001,0015 这种数字格式
{
	if (number <= 9999 && number >= 1000) {
		return QString::number(number);
	}

	if (number <= 999 && number >= 100) {
		return QString("0" + QString::number(number));
	}

	if (number <= 99 && number >= 10) {
		return QString("00" + QString::number(number));
	}

	if (number <= 9 && number >= 0) {
		return QString("000" + QString::number(number));
	}
	return "99999";
}

QString doubleToDecimals(double number, bool rounding /*= false*/) // 5位小数去掉后三位小数, rounding为false舍尾，为true进1
{
	if (!rounding) {
		QString num = QString::number(number, 'f', 5);
		int pos = num.indexOf('.') + 6;
		return num.mid(0, pos);
	} else {
		QString num = QString::number(number, 'f', 5);
		int pos = num.indexOf('.') + 6;
		QString round = num.mid(0, pos);
		double sub = num.toDouble() - round.toDouble();
		if (sub > 0.000001) {
			return QString::number(round.toDouble() + 0.00001, 'f', 5);
		} else {
			return round;
		}
	}
}

QString checkZero(double balance)
{
    QString balanceResult;
    if (balance < 0.00000001 && balance > -0.00000001)
    {
        balanceResult = "0";
    }
    else
    {
        balanceResult = doubleToDecimals(balance);
        for (int i = balanceResult.length()-1; i > 0;)
        {
            if (balanceResult[i] == QChar('0'))
            {
                balanceResult = balanceResult.left(balanceResult.length() - 1);
                i = balanceResult.length()-1;
            }
            else
            {
                if (balanceResult[i] == QChar('.'))
                {
                    balanceResult = balanceResult.left(balanceResult.length() - 1);
                }
                break;
            }
        }
    }
    return balanceResult;
}

QString longNumToString(__int64 num, int precision)
{
	QString numstr = QString("%1").arg(num);
	int n = 0;
	while (precision >= 10) {
		n++;
		precision /= 10;
	}
	int prezeronum = n - numstr.length() + 1;
	for (int i = 0; i < prezeronum; i++)
		numstr = "0" + numstr;
	QString lnumstr, rnumstr;
	lnumstr = numstr.left(numstr.length() - n);
	rnumstr = numstr.right(n);
	while (rnumstr.endsWith("0"))
		rnumstr.chop(1);
	if (rnumstr.length() > 0)
		lnumstr = lnumstr + "." + rnumstr;
	return lnumstr;
}

bool Misc::isInContracts(QString filePath)
{
	QDir dir("contracts");
	QFileInfo fileInfo(filePath);
	return (dir.absolutePath() + "/" + fileInfo.fileName() == filePath);
}

bool Misc::isInScripts(QString filePath) {
	QDir dir("scripts");
	QFileInfo fileInfo(filePath);
	return (dir.absolutePath() + "/" + fileInfo.fileName() == filePath);
}

QString Misc::changePathFormat(QString path) {
	path.replace("\\", "?");
	path.replace("/", "?");
	return path;
}

QString Misc::restorePathFormat(QString path) {
	path.replace("?", "/");
	return path;
}

qint64 Misc::write(QString cmd, QProcess* process) {
	if (!process) {
		return 0;
	}

	QTextCodec* gbkCodec = QTextCodec::codecForName("GBK");
	QByteArray cmdBa = gbkCodec->fromUnicode(cmd);
	process->readAll();
	return process->write(cmdBa.data());
}

QString Misc::read(QProcess* process) {
	QTextCodec* gbkCodec = QTextCodec::codecForName("GBK");
	QString result;
	QString str;
	QApplication::setOverrideCursor(QCursor(Qt::BusyCursor));
	while (!result.contains(">>>")) {
		process->waitForReadyRead(50);
		str = gbkCodec->toUnicode(process->readAll());
		result += str;
		if (str.right(2) == ": ")  break;
	}

	QApplication::restoreOverrideCursor();
	return result;
}

QString Misc::readAll(QProcess *process) {
	QTextCodec* gbkCodec = QTextCodec::codecForName("GBK");
	QString result = gbkCodec->toUnicode(process->readAll());

	return result;
}

bool getCapslockState()
{
#ifdef WIN32
    return GetKeyState(VK_CAPITAL) == 1;
#else
//    Qt::KeyboardModifiers info = QKeyEvent::modifiers();;
//    info.isKeyLocked(Qt::Key_CapsLock);
#endif
}

