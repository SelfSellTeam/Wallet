#ifndef WAITINGFORSYNC_H
#define WAITINGFORSYNC_H

#include <QWidget>
#include <QtNetwork>
#include <QDomDocument>

namespace Ui {
class WaitingForSync;
}

class QNetworkReply;

class WaitingForSync : public QWidget
{
    Q_OBJECT

public:
    explicit WaitingForSync(QWidget *parent = 0);
    ~WaitingForSync();

    QTimer* timer;

	void updateBebuildInfo();

signals:
    void sync();
    void minimum();
    void tray();
    void closeGOP();
    void showShadowWidget();
    void hideShadowWidget();

public slots:
    void blockchainStarted();

private slots:
    void updateInfo();

    void on_minBtn_clicked();

    void on_closeBtn_clicked();

	//void on_progressBar_valueChanged(int value);

    void infoUpdated(QString id);
//    void hasSomethingToRead();
private:
    Ui::WaitingForSync *ui;
    QMovie* gif;
    QDomDocument localXml;
    QDomDocument serverXml;
    bool updateOrNot;
    bool synced;  // 防止发出两次sync()信号

	void setFontPixelSize();
};

#endif // WAITINGFORSYNC_H
