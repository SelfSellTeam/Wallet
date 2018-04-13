#include "workerthreadmanager.h"
#include <QMap>
#include <QDebug>
#include <QCoreApplication>

WorkerThreadManager::WorkerThreadManager(int port)
    : running(true)
    , port(port) {
    WorkerThread* worker;
    for(int i = 0; i < NUM_OF_WORKERTHREADS; i++) {
        worker = new WorkerThread(i, port);
        workerThreads.insert(i, worker);
        worker->start();
		worker->moveToThread(worker);
    }
}

WorkerThreadManager::~WorkerThreadManager() {
    running = false;
    foreach (WorkerThread* worker, workerThreads) {
        worker->deleteLater();
    }

    qDebug() << QThread::currentThreadId() << "~WorkerThreadManager()";
}

void WorkerThreadManager::processRPCs(QString cmd) {
	qDebug() << "WorkerThreadManager::processRPCs " << QThread::currentThreadId();

    WorkerThread * worker;
	while(true) {
		for (int i = 1; i < NUM_OF_WORKERTHREADS; i++) {
			worker = workerThreads.value(i);
			if (!worker->isBusy()) {
				worker->setBusy(true);
				QCoreApplication::postEvent(worker, new TaskEvent(cmd));
				return;
			}
		}
		QThread::msleep(100);
	}
}
