#ifndef CONSOLEDIALOG_H
#define CONSOLEDIALOG_H

#include <QDialog>

namespace Ui {
class ConsoleDialog;
}

class ConsoleDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ConsoleDialog(QWidget *parent = 0);
    ~ConsoleDialog();

//    virtual void  setVisible(bool visiable);

    void pop();

//protected:
//    void mousePressEvent(QMouseEvent*event);
//    void mouseMoveEvent(QMouseEvent *event);
//    void mouseReleaseEvent(QMouseEvent *);

private slots:
    void on_closeBtn_clicked();

    void on_consoleLineEdit_returnPressed();
	void executeConsoleCommand(QString result);

private:
    Ui::ConsoleDialog *ui;
//    void paintEvent(QPaintEvent*);
    bool eventFilter(QObject *watched, QEvent *e);
	QString command;

	void setFontPixelSize();
//    bool mouse_press;
//    QPoint move_point;
};

#endif // CONSOLEDIALOG_H
