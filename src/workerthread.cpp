#include "workerthread.h"

#include "datamgr.h"
#include "rpcmgr.h"
#include <QTcpSocket>
#include <QHostAddress>
#include <QTime>
#include <QJsonDocument>
//#include "goopal.h"


QEvent::Type TaskEvent::s_evType = QEvent::None;

WorkerThread::WorkerThread(int id, int socket_port, QObject *parent)
    : QThread(parent)
    , m_id(id)
	, port(socket_port)
    , busy(true) {
    qDebug() << "workthread construct " << m_id;
}

WorkerThread::~WorkerThread() {
    qDebug() << "workthread destroy " << m_id;
}

bool WorkerThread::isBusy() {
    return busy;
}

void WorkerThread::setBusy(bool busyOrNot) {
    busy = busyOrNot;
}

void WorkerThread::processRPC(QString cmd) {
	qDebug() << "WorkerThread::processRPC " << QThread::currentThreadId();
	if (!socket) {
		return;
	}

    busy = true;
	socket->write(cmd.toUtf8());
	qDebug() <<"cmd:"<< cmd;
    QString receive;

    do {
        if( !socket->waitForReadyRead(120000) ) {
            sleep(50);
        }

        receive += socket->readAll();

        QJsonParseError json_error;
        QJsonDocument parse_doucment = QJsonDocument::fromJson(receive.toLatin1(), &json_error);
        if(json_error.error == QJsonParseError::NoError) {
            break;
        } else {
        }
    }while(1);

	QString rpc_id = receive.mid(receive.indexOf("\"id\":") + 6,
                   receive.indexOf(",") - receive.indexOf("\"id\":") - 7);
    QString result = receive.mid( receive.indexOf(",") + 1);
    result = result.left( result.size() - 2);

	qDebug() <<"rpc_id:"<< rpc_id;

	RpcMgr::getInstance()->updateResult(rpc_id, result);

    busy = false;
}

void WorkerThread::run() {
	qDebug() << "WorkerThread::run " << QThread::currentThreadId();
	socket = new QTcpSocket(this);
	socket->connectToHost(QHostAddress("127.0.0.1"), port);
	while (!socket->waitForConnected()) {
		socket->connectToHost(QHostAddress("127.0.0.1"), port);
        //zxlrunqDebug() << "could not connect to server: " << m_id << socket->errorString();
	}

	sync_login_json.lock();
    QString user(LOGIN_USER);
    QString pwd(LOGIN_PWD);
//zxltab	QString loginRpc = DataMgr::getDataMgr()->getLoginJson(QString(LOGIN_USER), QString(LOGIN_PWD));
    QString loginRpc = DataMgr::getDataMgr()->getLoginJson(user, pwd);
	sync_login_json.unlock();
	socket->write(loginRpc.toUtf8());
	socket->waitForReadyRead(120000);
	qDebug() << "rpc login " << m_id << socket->readAll();
	qDebug() << QThread::currentThreadId();
	busy = false;

	exec();
}

bool WorkerThread::event(QEvent *e) {
    if(e->type() == TaskEvent::evType()) {
        processRPC( static_cast<TaskEvent*>(e)->rpcCmd);
        return true;
    }
    QThread::event(e);
    return false;
}

