#ifndef WORKERTHREAD_H
#define WORKERTHREAD_H

#include <QThread>
#include <QTcpSocket>
#include <QMutex>
#include <QEvent>

#define LOGIN_USER "a"
#define LOGIN_PWD  "b"

class QTcpSocket;

class TaskEvent : public QEvent
{
public:
    TaskEvent(QString cmd)
        : QEvent(evType())
        , rpcCmd(cmd)
    {}

    static QEvent::Type evType()
    {
        if(s_evType == QEvent::None)
        {
            s_evType = (QEvent::Type)registerEventType();
        }
        return s_evType;
    }

    QString rpcCmd;

private:
    static QEvent::Type s_evType;
};

static QMutex sync_login_json;

class WorkerThread : public QThread
{
    Q_OBJECT
public:
	WorkerThread(int workerId, int socket_port, QObject *parent = 0);
    ~WorkerThread();

    bool isBusy();

    void setBusy(bool busyOrNot);

    void processRPC(QString cmd);

protected:
    void run();
    bool event(QEvent *event);

private:
    int m_id;
    int port;
    QTcpSocket* socket;
    bool busy;

};

#endif // WORKERTHREAD_H
