#ifndef WAITINGPAGE_H
#define WAITINGPAGE_H

#include <QWidget>

namespace Ui {
class WaitingPage;
}

class WaitingPage : public QWidget
{
    Q_OBJECT

public:
    explicit WaitingPage(QWidget *parent = 0);
    ~WaitingPage();

private:
	Ui::WaitingPage *ui;
	QMovie* gif;
};

#endif // WAITINGPAGE_H
