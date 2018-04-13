#ifndef CHOOSEEXPORTDIALOG_H
#define CHOOSEEXPORTDIALOG_H

#include <QDialog>

namespace Ui {
class ChooseExportDialog;
}

class ChooseExportDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ChooseExportDialog(QWidget *parent = 0);
    ~ChooseExportDialog();

    int pop();

signals:
    void chosed(int,QString);

private slots:
    void on_upgradeBtn_clicked();

    void on_delegateBtn_clicked();

    void on_notUpgradeBtn_clicked();

private:
    Ui::ChooseExportDialog *ui;
    int choice;

	void setFontPixelSize();
};

#endif // CHOOSEEXPORTDIALOG_H
