#ifndef PEERINFODIALOG_H
#define PEERINFODIALOG_H

#include <QDialog>

namespace Ui {
class PeerInfoDialog;
}

class PeerInfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PeerInfoDialog(QWidget *parent = 0);
    ~PeerInfoDialog();

    void pop();

private slots:
    void on_refreshBtn_clicked();

    void jsonDataUpdated(QString id);

    void on_closeBtn_clicked();

    void on_addNodeBtn_clicked();

    void gifPlayOnce(int num);

    void refresh();

    void stopRefresh();

    void startRefresh();

    void setBlockOrNot(QString ip, bool blockOrNot);

private:
    Ui::PeerInfoDialog *ui;
    QMovie* gif;
    QTimer* timer;
//    bool mouse_press;
//    QPoint move_point;
};

#endif // PEERINFODIALOG_H
