#ifndef SETDIALOG_H
#define SETDIALOG_H

#include <QDialog>

namespace Ui {
class SetDialog;
}

class WaitingPage;

class SetDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SetDialog(QWidget *parent = 0);
    ~SetDialog();

//    virtual void setVisible(bool visiable);

    void pop();

//protected:
//    void mousePressEvent(QMouseEvent*event);
//    void mouseMoveEvent(QMouseEvent *event);
//    void mouseReleaseEvent(QMouseEvent *);

signals:
    void settingSaved();
    void resync();
    void scan();
	void refreshCombobox();

private slots:
    void on_closeBtn_clicked();

    void on_saveBtn_clicked();

    void on_nolockCheckBox_clicked();

    void on_lockTimeSpinBox_valueChanged(const QString &arg1);

    void on_generalBtn_clicked();

    void on_safeBtn_clicked();

    void on_networkBtn_clicked();

    void on_confirmBtn_clicked();

    void on_newPwdLineEdit_textChanged(const QString &arg1);

    void on_confirmPwdLineEdit_textChanged(const QString &arg1);

    void on_oldPwdLineEdit_textChanged(const QString &arg1);

    void on_linkBtn_clicked();

    void on_resyncBtn_clicked();

    void on_scanBtn_clicked();

    void walletChangePassword(QString result);

private:
    Ui::SetDialog *ui;
//    void paintEvent(QPaintEvent*);
    bool eventFilter(QObject *watched, QEvent *e);
//    bool mouse_press;
//    QPoint move_point;
    WaitingPage* waitingPage;
	void setFontPixelSize();
};

#endif // SETDIALOG_H
