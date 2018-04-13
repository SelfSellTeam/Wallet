#ifndef TRANSFERPAGE_H
#define TRANSFERPAGE_H

#include <QWidget>

namespace Ui {
class TransferPage;
}

class WaitingPage;

#define MODULE_TRAHSFER_PAGE "TRAHSFER_PAGE"

class TransferPage : public QWidget
{
    Q_OBJECT

public:
    explicit TransferPage(QString name,QWidget *parent = 0);
    ~TransferPage();

    QString getCurrentAccount();
    void setAddress(QString);
	void setbalanceLabel(QString balance, QString token);
	void showBalance();

signals:
    void accountChanged(QString);
    void showShadowWidget();
    void hideShadowWidget();
    void showAccountPage(QString);
    void back();

public slots:
    void refresh();
	void tokenTransferTo(QString result);

private slots:
    void on_accountComboBox_currentIndexChanged(const QString &arg1);
    void on_sendBtn_clicked();
    void on_amountLineEdit_textChanged(const QString &arg1);
    void on_sendtoLineEdit_textChanged(const QString &arg1);
    void on_addContactBtn_clicked();
    void contactSelected(QString);
    void on_voteCheckBox_clicked();
    void on_infoBtn_clicked();
    void on_feeLineEdit_textChanged(const QString &arg1);
    void on_messageLineEdit_textChanged(const QString &arg1);
    void on_copyBtn_clicked();

	void walletTransferToAddress(QString id, QString result);
	void walletCheckAddress(QString result);

private:
    Ui::TransferPage *ui;
    QString accountName;
    QStringList contactsList;
    bool inited;
    QString delegateLabelString;
    QString registeredLabelString;
    WaitingPage* waitingPage;

    void paintEvent(QPaintEvent*);
    void getContactsList();
    bool eventFilter(QObject *watched, QEvent *e);
	int transfer_time;

	void setFontPixelSize();

    void setAssertType();
    void setFeeHint();
};

#endif // TRANSFERPAGE_H
