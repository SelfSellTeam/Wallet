#ifndef SELECTGOPPATHWIDGET_H
#define SELECTGOPPATHWIDGET_H

#include <QWidget>
#include <QtNetwork>
#include <QDomDocument>

namespace Ui {
class SelectGopPathWidget;
}

class SelectGopPathWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SelectGopPathWidget(QWidget *parent = 0);
    ~SelectGopPathWidget();

private slots:
    void on_selectPathBtn_clicked();
    void on_okBtn_clicked();
    void on_minBtn_clicked();
    void on_closeBtn_clicked();

signals:
    void enter();
    void minimum();
    void closeGOP();
    void showShadowWidget();
    void hideShadowWidget();

private:
    Ui::SelectGopPathWidget *ui;

    void paintEvent(QPaintEvent*);
	void setFontPixelSize();
};

int compareVersion( QString a, QString b);

#endif // SELECTGOPPATHWIDGET_H
