#ifndef ACCOUNTPAGE_H
#define ACCOUNTPAGE_H

#include <QWidget>
#include <qmap.h>

namespace Ui {
class AccountPage;
}

#define MODULE_ACCOUNT_PAGE "ACCOUNT_PAGE"

class AccountPage : public QWidget
{
    Q_OBJECT

public:
    explicit AccountPage(QString name,QWidget *parent = 0);
    ~AccountPage();

    void updateTransactionsList();

public slots:
    void refresh();
    void retranslator();
	void displayTokenTrxVector();


private slots:

    void on_copyBtn_clicked();

    void on_accountComboBox_currentIndexChanged(const QString &arg1);

    void on_transactionTypeComboBox_currentIndexChanged(int index);

    void on_accountTransactionsTableWidget_cellClicked(int row, int column);

    void on_prePageBtn_clicked();

    void on_nextPageBtn_clicked();

    void on_pageLineEdit_editingFinished();

    void on_pageLineEdit_textEdited(const QString &arg1);

	void balance();
	void walletTransactionHistorySpliteWithId(QString, QString);

signals:
    void back();
    void showUpgradePage(QString);
    void accountChanged(QString);
    void showShadowWidget();
    void hideShadowWidget();
    void showApplyDelegatePage(QString);

private:
    Ui::AccountPage *ui;
    QString accountName;
    QString address;
    int transactionType;
    bool inited;
    int currentPageIndex;
    QString delegateLabelString;
    QString registeredLabelString;
	QMap<QString, QString> transactionMap;
    void paintEvent(QPaintEvent*);
    void init();
    void showCommonTransactions(QString, QString);
    void showTokenTransactions(QString, QString);

    void showTransactions(QString);

	void setFontPixelSize();
    void setAssertType();
	QString genCurrentKey();

};

#endif // ACCOUNTPAGE_H
