#include "RpcMgr.h"
#include "workerthreadmanager.h"

#include <QDebug>
#ifdef WIN32 
#include <Windows.h>
#endif //zxlwin
#include <QTimer>
#include <QThread>
#include <QDir>
#include "datamgr.h"

RpcMgr* RpcMgr::_rpc_mgr = nullptr;
RpcMgr::RpcMgr() : _is_in_sandbox(false),
	_test_worker_manager_thread(nullptr), 
	_worker_thread_manager_test(nullptr),
	_formal_worker_manager_thread(nullptr),
	_worker_thread_manager_formal(nullptr),
	_test_chain_process(nullptr),
	_formal_chain_process(nullptr) {
	setCurChainType(BlockChainType::Formal);
}

RpcMgr::~RpcMgr() {
	uninitThreadManager();
	closeBlockChain();
}

RpcMgr* RpcMgr::getInstance() {
	if (!_rpc_mgr) {
		_rpc_mgr = new RpcMgr;
	}
	return _rpc_mgr;
}

void RpcMgr::deleteInstance() {
	if (_rpc_mgr) {
		delete _rpc_mgr;
	}
	_rpc_mgr = nullptr;
}

void RpcMgr::initWorkThreadManager() {
	qDebug() << "initWorkerThreadManagerForFormalChain " << QThread::currentThreadId();
	_formal_worker_manager_thread = new QThread;
	_formal_worker_manager_thread->start();
	_worker_thread_manager_formal = new WorkerThreadManager(CHAIN_RPC_PORT);
	_worker_thread_manager_formal->moveToThread(_formal_worker_manager_thread);
	connect(this, SIGNAL(formalRpcPosted(QString)), _worker_thread_manager_formal, SLOT(processRPCs(QString)));
}

void RpcMgr::uninitThreadManager() {
	if (_test_worker_manager_thread) {
		delete _test_worker_manager_thread;
		_test_worker_manager_thread = nullptr;
	}

	if (_worker_thread_manager_test) {
		delete _worker_thread_manager_test;
		_worker_thread_manager_test = nullptr;
	}

	if (_formal_worker_manager_thread) {
		delete _formal_worker_manager_thread;
		_formal_worker_manager_thread = nullptr;
	}

	if (_worker_thread_manager_formal) {
		delete _worker_thread_manager_formal;
		_worker_thread_manager_formal = nullptr;
	}
}

void RpcMgr::startBlockChain() {
	QSettings* config_file = DataMgr::getDataMgr()->getSettings();
	if (!config_file) {
		return;
	}

	//TEST << "--httpdendpoint" << "0.0.0.0:8080"
	QStringList strList2;
    strList2 << "--data-dir" << /*"\""+*/config_file->value("/settings/achainPath").toString()/*+"\""*/
		<< "--rpcuser" << "a" << "--rpcpassword" << "b" << "--rpcport" << QString::number(CHAIN_RPC_PORT) << "--httpdendpoint" << "0.0.0.0:8080" << "--server";
	_formal_chain_process = new QProcess;
    qDebug() << "strList2 : "<< strList2;
	qDebug() << "workpath() + ssc.exe : " << DataMgr::getDataMgr()->getWorkPath() + "SSC.exe";
    _formal_chain_process->start(DataMgr::getDataMgr()->getWorkPath()+"SSC.exe", strList2);
	if (_formal_chain_process->waitForStarted()) {
		initWorkThreadManager();
		qDebug() << "laungh SSC.exe succeeded";
		qDebug() << Misc::read(_formal_chain_process);
		QThread::msleep(1000);
		emit onFormalChainStarted();
	} else {
        qDebug() << "laungh SSC.exe failed : " + _formal_chain_process->errorString();
	}
}

void RpcMgr::closeBlockChain() {
    if (_test_chain_process) {
		_test_chain_process->close();
        qDebug() << "testProcess: close";
		delete _test_chain_process;
		_test_chain_process = nullptr;
    }

	if (_formal_chain_process) {
		_formal_chain_process->close();
        qDebug() << "formalProcess: close";
		delete _formal_chain_process;
		_formal_chain_process = nullptr;
    }	
}

void RpcMgr::updateResult(QString id, QString data) {
	DataMgr::getDataMgr()->onUpdateRpcResult(id, data);
}

void RpcMgr::postRPC(QString cmd, int type) {  
	qDebug() << "WorkerThreadManager::processRPCs " << QThread::currentThreadId();
    switch (type) {
    case 0:
		if (getCurChainType() == BlockChainType::Test) {
			emit testRpcPosted(cmd);
        } else if (getCurChainType() == BlockChainType::Formal) {
			emit formalRpcPosted(cmd);
        }

        break;
    case 1:
		emit testRpcPosted(cmd);
        break;
    case 2:
		emit formalRpcPosted(cmd);
        break;
    default:
        break;
    }
}

bool RpcMgr::isContractFileRegistered(QString path) {
    QString address;
    if( path.endsWith(".glua") ||  path.endsWith(".gpc") ) {
        address = configGetContractAddress(path);
    } else {
        address = path;
    }

    return address.startsWith("CON");
}

bool RpcMgr::isContractFileUpgraded(QString path) {
    QString address;
    if( path.endsWith(".glua") || path.endsWith(".gpc") ) {
        address = configGetContractAddress(path);
    } else {
        address = path;
    }

    if( address.startsWith("CON")) {
        QString level = contractInfoMap.value(address).level;
        return level != "temp";
    } else {
        return false;
    }
}

QString RpcMgr::configGetContractAddress(QString path) {
	QSettings* config_file = DataMgr::getDataMgr()->getSettings();
	if (!config_file) {
		return QString("");
	}

    QString configKey;
	if (getCurChainType() == BlockChainType::Test) {
        configKey = "/testRegisteredContracts/";
    } else {
        configKey = "/formalRegisteredContracts/";
    }
	return config_file->value(configKey + Misc::changePathFormat(path)).toString();
}

void RpcMgr::configSetContractAddress(QString path, QString address) {
	QSettings* config_file = DataMgr::getDataMgr()->getSettings();
	if (getCurChainType() == 1) {
		config_file->setValue("/testRegisteredContracts/" + Misc::changePathFormat(path), address);
    } else {
		config_file->setValue("/formalRegisteredContracts/" + Misc::changePathFormat(path), address);
    }
}

QString RpcMgr::configRemoveContractAddress(QString address) {
	QString key;
	QSettings* config_file = DataMgr::getDataMgr()->getSettings();
	if (!config_file) {
		return key;
	}

    QString configKey;
	if (getCurChainType() == 1) {
        configKey = "/testRegisteredContracts/";
    } else {
        configKey = "/formalRegisteredContracts/";
    }

    config_file->beginGroup(configKey);
    QStringList keys = config_file->childKeys();
    foreach (QString k, keys) {
        if(config_file->value(k) == address) {
            key = k;
			if (_is_in_sandbox &&  !(key.endsWith("_sandbox.glua") || key.endsWith("_sandbox.gpc"))) {
                int posOfDot = k.lastIndexOf(".");
                QString pre = k.left(posOfDot);
                QString newKey = pre + "_removed" + k.mid(posOfDot);
                config_file->setValue(newKey, config_file->value(k));
                config_file->remove(k);
                key = "";
				qDebug() << k << posOfDot << pre << newKey;
				qDebug() << "configRemoveContractAddress rename: " <<   QFile::rename(Misc::restorePathFormat(k), Misc::restorePathFormat(newKey));
            } else {
                config_file->remove(k);
            }
            break;
        }
    }
    config_file->endGroup();
    return key;
}

QString RpcMgr::configGetScriptId(QString path) {
	QSettings* config_file = DataMgr::getDataMgr()->getSettings();
    QString configKey;
    if(getCurChainType() == BlockChainType::Test) {
        configKey = "/testAddedScripts/";
    } else {
        configKey = "/formalAddedScripts/";
    }

	return config_file->value(configKey + Misc::changePathFormat(path)).toString();
}

void RpcMgr::configSetScriptId(QString path, QString scriptId) {
	QSettings* config_file = DataMgr::getDataMgr()->getSettings();
	if (!config_file) {
		return;
	}

	if (getCurChainType() == BlockChainType::Test) {
		config_file->setValue("/testAddedScripts/" + Misc::changePathFormat(path), scriptId);
    } else {
		config_file->setValue("/formalAddedScripts/" + Misc::changePathFormat(path), scriptId);
    }
}

QStringList RpcMgr::configGetAllScripts() {
    QString configKey;
	if (getCurChainType() == BlockChainType::Test) {
        configKey = "/testAddedScripts/";
    } else {
        configKey = "/formalAddedScripts/";
    }
	QStringList keys;
	QSettings* config_file = DataMgr::getDataMgr()->getSettings();
	if (!config_file) {
		return keys;
	}
	config_file->beginGroup(configKey);
    keys = config_file->childKeys();
    config_file->endGroup();
    return keys;
}

QString RpcMgr::configRemoveScriptId(QString scriptId) {
    QString configKey;
	if (getCurChainType() == BlockChainType::Test) {
        configKey = "/testAddedScripts/";
    } else {
        configKey = "/formalAddedScripts/";
    }

	QString key;

	QSettings* config_file = DataMgr::getDataMgr()->getSettings();
	if (!config_file) {
		return key;
	}

    config_file->beginGroup(configKey);
    QStringList keys = config_file->childKeys();
    foreach (QString k, keys) {
        if(config_file->value(k) == scriptId) {
            key = k;
            config_file->remove(k);
            break;
        }
    }
    config_file->endGroup();
    return key;
}

bool RpcMgr::isScriptAdded(QString path) {
	return !configGetScriptId(path).isEmpty();
}

QProcess* RpcMgr::currentProcess() {
	return getCurChainType() == BlockChainType::Test ? _test_chain_process : _formal_chain_process;
}

int RpcMgr::currentPort() {
	return getCurChainType() == BlockChainType::Test ? CHAIN_RPC_PORT + 1 : CHAIN_RPC_PORT;
}

BlockChainType RpcMgr::getCurChainType() {
	_mutex_for_current_process.lock();
    BlockChainType type = _curren_chain_type;
	_mutex_for_current_process.unlock();

    return type;
}

void RpcMgr::setCurChainType(BlockChainType type) {
	_mutex_for_current_process.lock();
    _curren_chain_type = type;
	_mutex_for_current_process.unlock();
}
