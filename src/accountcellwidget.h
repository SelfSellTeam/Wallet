#ifndef ACCOUNTCELLWIDGET_H
#define ACCOUNTCELLWIDGET_H

#include <QWidget>

namespace Ui {
class AccountCellWidget;
}

class AccountCellWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AccountCellWidget(int r, int c, QWidget *parent = 0);
    ~AccountCellWidget();
    void setBackgroundColor(int r, int g, int b, int a = 255);
	void setName(QString name);
    int row;
    int column;
	QString accountName;

signals:
    void showExportDialog(QString);
    void cellEnter(int,int);

private:
    Ui::AccountCellWidget *ui;
    QString delegateLabelString;
    QString registeredLabelString;

    void enterEvent( QEvent* e);
};

#endif // ACCOUNTCELLWIDGET_H
