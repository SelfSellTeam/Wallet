#ifndef NEWSDIALOG_H
#define NEWSDIALOG_H

#include <QDialog>

namespace Ui {
class NewsDialog;
}

class NewsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NewsDialog(QWidget *parent = 0);
    ~NewsDialog();

    void pop();

private slots:
    void on_nextBtn_clicked();

    void on_closeBtn_clicked();

    void on_checkBtn_clicked();

signals:
    void showAccountPage(QString);

private:
    Ui::NewsDialog *ui;
    QStringList recordIdList;
    int page;
    int totalNum;

    void showNews( QString id);
	void setFontPixelSize();
};

#endif // NEWSDIALOG_H
