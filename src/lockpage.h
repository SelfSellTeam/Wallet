#ifndef LOCKPAGE_H
#define LOCKPAGE_H

#include <QWidget>
#include <QLibrary>
#include <QTimer>

namespace Ui {
class LockPage;
}

typedef short(*FUN)(int);

class LockPage : public QWidget
{
    Q_OBJECT

public:
    explicit LockPage(QWidget *parent = 0);
    ~LockPage();

signals:
    void unlock();
    void minimum();
    void closeGOP();
    void tray();
    void showShadowWidget();
    void hideShadowWidget();

private slots:
    void on_unlockBtn_clicked();

    void on_pwdLineEdit_returnPressed();

    void on_minBtn_clicked();

    void on_closeBtn_clicked();

    void on_pwdLineEdit_textChanged(const QString &arg1);

    int  lockTime();

    void checkLock();

	void walletUnlock(QString result);

private:
    Ui::LockPage *ui;
    int chances;
    QTimer* timerForLockTime;

    void paintEvent(QPaintEvent*);
    void keyPressEvent(QKeyEvent* e);
    void keyReleaseEvent(QKeyEvent *e);
	void setFontPixelSize();

};

#endif // LOCKPAGE_H
