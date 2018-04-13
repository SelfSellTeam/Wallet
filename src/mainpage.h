#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QWidget>
#include <QMap>
#include <QTableWidgetItem>
#include "accountcellwidget.h"


namespace Ui {
class MainPage;
}

#define MODULE_MAIN_PAGE "MAIN_PAGE"

class AccountDetailWidget;
class WaitingPage;

class MainPage : public QWidget
{
    Q_OBJECT

public:
    explicit MainPage(QWidget *parent = 0);
    ~MainPage();

    void updateAccountList();
    void retranslator(QString language);

public slots:
    void refresh();
	void walletAccountCreate(QString result);

signals:
    void openAccountPage(QString);
    void showShadowWidget();
    void hideShadowWidget();
    void showUpgradePage(QString);
    void showApplyDelegatePage(QString);
    void refreshAccountInfo();
    void showTransferPage(QString);
    void newAccount();

private slots:
    void importAccount();
    void addAccount();
    void on_addAccountBtn_clicked();
    void on_accountTableWidget_cellClicked(int row, int column);
    void on_accountTableWidget_cellEntered(int row, int column);
    void jsonDataUpdated(QString id);
    void showExportDialog(QString name);
    void stopRefresh();
    void startRefresh();
    void withdrawSalary(QString name, QString salary);
    void renameAccount(QString name);
    void deleteAccount(QString name);
    void showDetailWidget(QString name);
    void hideDetailWidget();
	void totalBalance(QString result);

private:
    Ui::MainPage *ui;
    int previousColorRow;
    bool hasDelegateOrNot;
    bool refreshOrNot;
    bool detailOrNot;
    QString newAccountName;
    int currentAccountIndex;

    AccountDetailWidget* detailWidget;
    WaitingPage* waitingPage;

//    bool eventFilter(QObject *watched, QEvent *e);
//    void paintOnScrollarea(QWidget *w);
    void paintEvent(QPaintEvent*);
    void updateTotalBalance();
    void updateDelegateSalary();
    void updatePending();
    bool eventFilter(QObject *watched, QEvent *e);
    void mousePressEvent(QMouseEvent *event);
	void setFontPixelSize();
    void setAssertType();

};

#endif // MAINPAGE_H
