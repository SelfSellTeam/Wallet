#ifndef FUNCTIONBAR_H
#define FUNCTIONBAR_H

#include <QWidget>

namespace Ui {
class FunctionBar;
}

class FunctionBar : public QWidget
{
    Q_OBJECT

public:
    explicit FunctionBar(QWidget *parent = 0);
    ~FunctionBar();
    void choosePage(int);
    void retranslator();
	void refreshResetCombobox();

signals:
    void showMainPage();
    void showAccountPage(QString);
    void showDelegatePage();
    void showTransferPage();
    void showContactPage();
    void showShadowWidget();
    void hideShadowWidget();
    void assetTypeChange();

public slots:
	void getInfo(QString result);
    void setAssetInfo(QString result);

private slots:
    void on_surveyBtn_clicked();

    void on_accountBtn_clicked();

    void on_delegateBtn_clicked();

    void on_transferBtn_clicked();

	void on_assertComboBox_currentIndexChanged(const QString& arg1);

    void on_contactBtn_clicked();

private:
	void setFontPixelSize();
    Ui::FunctionBar *ui;
	bool updated;
    bool scan;
	int wait_for_update;
};

#endif // FUNCTIONBAR_H
