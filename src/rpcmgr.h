#ifndef __RPC_MGR_H__
#define __RPC_MGR_H__

#include "misc.h"

#include <QObject>
#include <QMap>
#include <QSettings>
#include <QFile>
#include <QProcess>
#include <QMutex>


#include "outputmessage.h"

class QTimer;
class QFrame;
class WorkerThreadManager;
static QMutex _mutex_for_current_process;

class RpcMgr : public QObject {
    Q_OBJECT
public:
	static RpcMgr* getInstance();
	static void    deleteInstance();

	void postRPC(QString cmd, int type = 0);

public:
	void startBlockChain();
	void closeBlockChain();

	void initWorkThreadManager();
	void uninitThreadManager();

    void updateResult(QString id, QString data);

    QString configGetContractAddress(QString path);
    void configSetContractAddress(QString path, QString address);
    QString configRemoveContractAddress(QString address);
    QString configGetScriptId(QString path);
    void configSetScriptId(QString path, QString scriptId);
	QStringList configGetAllScripts();
    QString configRemoveScriptId(QString scriptId);

	bool isContractFileRegistered(QString path);
	bool isContractFileUpgraded(QString path);
	bool isScriptAdded(QString path);

    QProcess* currentProcess();
    int currentPort();
    void setCurrentAccount(QString accountName);

    QProcess* _test_chain_process;
    QProcess* _formal_chain_process;

    BlockChainType getCurChainType();
    void setCurChainType(BlockChainType type);

	QMap<QString, SmartContractInfo> contractInfoMap;	
    bool _is_in_sandbox;

signals:
	void onTestChainStarted();
    void onFormalChainStarted();
    void testRpcPosted(QString cmd);
    void formalRpcPosted(QString cmd);

private:
	RpcMgr();
	~RpcMgr();

	static RpcMgr* _rpc_mgr;

    WorkerThreadManager* _worker_thread_manager_test;  
    WorkerThreadManager* _worker_thread_manager_formal;
    QThread* _test_worker_manager_thread;
    QThread* _formal_worker_manager_thread;

    BlockChainType _curren_chain_type;
};
#endif // RpcMgr
