#ifndef NORMALLOGIN_H
#define NORMALLOGIN_H

#include <QWidget>
#include <QFileInfo>
#include <QTimer>
#include <QLibrary>

namespace Ui {
class NormalLogin;
}

typedef short(*FUN)(int);

class NormalLogin : public QWidget
{
    Q_OBJECT

public:
    explicit NormalLogin(QWidget *parent = 0);
    ~NormalLogin();

private slots:

    void on_enterBtn_clicked();
    void on_pwdLineEdit_returnPressed();
    void on_minBtn_clicked();
    void on_closeBtn_clicked();
    void on_pwdLineEdit_textChanged(const QString &arg1);

    void pwdConfirmed(QString result);
    int  lockTime();
    void checkLock();

signals:
    void login();
    void minimum();
    void closeGOP();
    void tray();
    void showShadowWidget();
    void hideShadowWidget();

private:
    Ui::NormalLogin *ui;
    void paintEvent(QPaintEvent*);
    void keyPressEvent(QKeyEvent* e);
    void keyReleaseEvent(QKeyEvent *e);
	void setFontPixelSize();

    int chances;
    QTimer* timerForLockTime;

};

#endif // NORMALLOGIN_H
