#ifndef BOTTOMBAR_H
#define BOTTOMBAR_H

#include <QWidget>

namespace Ui {
class BottomBar;
}

class CommonTip;
class MyProgressBar;

class BottomBar : public QWidget
{
    Q_OBJECT

public:
    explicit BottomBar(QWidget *parent = 0);
    ~BottomBar();
    void retranslator();
    void refresh();
	void updateNumOfConnections(QString result);

protected:
    void enterEvent(QEvent* e);
    void leaveEvent(QEvent* e);

public slots:
    void dynamicShow();
    void dynamicHide();

private slots:
    void on_signalBtn_clicked();
    void ontimerForHideOut();
    void onProgressBarValueChanged(int value);
    void on_lockBtn_clicked();
    void moveEnd();
	void getInfo(QString string); 

signals:
    void showShadowWidget();
    void hideShadowWidget();
    void lock();

private:
    Ui::BottomBar *ui;
    int numOfConnections;
    CommonTip* connectionTip;
    MyProgressBar* myProgressBar;
    bool mouseInsideOrNot;    // 标志鼠标是否停在bottombar 上
    QTimer* timerForHide;  // 鼠标离开bottombar两秒后 隐藏
    bool isMoving;

    void paintEvent(QPaintEvent*);
    bool eventFilter(QObject *watched, QEvent *e);
	void setFontPixelSize();

};

#endif // BOTTOMBAR_H
