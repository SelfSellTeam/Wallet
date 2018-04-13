#ifndef APPLYDELEGATEPAGE_H
#define APPLYDELEGATEPAGE_H

#include <QWidget>

namespace Ui {
class ApplyDelegatePage;
}

class ApplyDelegatePage : public QWidget
{
    Q_OBJECT

public:
    explicit ApplyDelegatePage( QString name = "", QWidget *parent = 0);
    ~ApplyDelegatePage();

    void refresh();
    void retranslator();

private slots:

    void on_accountComboBox_currentIndexChanged(const QString &arg1);

    void jsonDataUpdated(QString id);

    void on_upgradeBtn_clicked();

    void on_addressNameLineEdit_textChanged(const QString &arg1);

signals:
    void back(QString);
    void showShadowWidget();
    void hideShadowWidget();
    void accountRenamed();

private:
    Ui::ApplyDelegatePage *ui;
    QString accountName;
    QString balance;
    bool inited;

    void paintEvent(QPaintEvent*);

    void init();
};

#endif // APPLYDELEGATEPAGE_H
