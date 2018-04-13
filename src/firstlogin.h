#ifndef FIRSTLOGIN_H
#define FIRSTLOGIN_H

#include <QWidget>
#include <QLibrary>

namespace Ui {
class FirstLogin;
}

#define MODULE_FIRST_LOGIN "FIRST_LOGIN"

typedef short(*FUN)(int);

class FirstLogin : public QWidget
{
    Q_OBJECT

public:
    explicit FirstLogin(QWidget *parent = 0);
    ~FirstLogin();

private slots:
    void on_createBtn_clicked();

    void on_pwdLineEdit2_returnPressed();

    void on_minBtn_clicked();

    void on_closeBtn_clicked();

    void on_pwdLineEdit_textChanged(const QString &arg1);

    void on_pwdLineEdit2_textChanged(const QString &arg1);

    void jsonDataUpdated(QString id);

    void walletCreate(QString id);
    void walletUnlockFirstLogin(QString id);

signals:
    void login();
    void minimum();
    void closeGOP();
    void tray();
    void showShadowWidget();
    void hideShadowWidget();

private:
    Ui::FirstLogin *ui;
	void setFontPixelSize();

    void paintEvent(QPaintEvent*);
    bool eventFilter(QObject *watched, QEvent *e);
    void keyPressEvent(QKeyEvent* e);
    void keyReleaseEvent(QKeyEvent *e);
};

#endif // FIRSTLOGIN_H
