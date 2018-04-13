#ifndef ACCOUNTDETAILWIDGET_H
#define ACCOUNTDETAILWIDGET_H

#include <QWidget>
#include "qrcodewidget.h"

namespace Ui {
class AccountDetailWidget;
}

class AccountDetailWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AccountDetailWidget( QWidget *parent = 0);
    ~AccountDetailWidget();

    void setAccount(QString name);


    QString accountName;

public slots:
    void dynamicShow();
    void dynamicHide();

	void showRecentTransactions(QString result);
    void refresh();

private slots:
    void on_closeBtn_clicked();

    void on_moreTransactionBtn_clicked();

    void on_exportBtn_clicked();

    void on_transferBtn_clicked();

    void on_copyBtn_clicked();

    void on_upgradeBtn_clicked();

    void on_withdrawBtn_clicked();

    void on_switchBtn_clicked();

    void moveEnd();
	void walletTransactionHistorySpliteWithId(QString id, QString result);
	void showRecentTokenTransactions();

signals:
    void back();

    void showAccountPage(QString name);

    void showTransferPage(QString name);

    void upgrade(QString);

    void applyDelegate(QString);

private:
    Ui::AccountDetailWidget *ui;
    double salary;
    QRCodeWidget* qrCodeWidget;
    bool produceOrNot;
    QString delegateLabelString;
    QString registeredLabelString;

    void setAssertType();
	void setFontPixelSize();
};

#endif // ACCOUNTDETAILWIDGET_H
