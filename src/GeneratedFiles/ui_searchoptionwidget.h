/********************************************************************************
** Form generated from reading UI file 'searchoptionwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHOPTIONWIDGET_H
#define UI_SEARCHOPTIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchOptionWidget
{
public:
    QWidget *widget;
    QRadioButton *radioButton3;
    QRadioButton *radioButton1;
    QRadioButton *radioButton2;

    void setupUi(QWidget *SearchOptionWidget)
    {
        if (SearchOptionWidget->objectName().isEmpty())
            SearchOptionWidget->setObjectName(QStringLiteral("SearchOptionWidget"));
        SearchOptionWidget->resize(200, 35);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        SearchOptionWidget->setFont(font);
        SearchOptionWidget->setStyleSheet(QStringLiteral(""));
        widget = new QWidget(SearchOptionWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 200, 35));
        widget->setStyleSheet(QStringLiteral("background-color: rgb(89, 93, 97);"));
        radioButton3 = new QRadioButton(widget);
        radioButton3->setObjectName(QStringLiteral("radioButton3"));
        radioButton3->setGeometry(QRect(130, 10, 70, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(9);
        radioButton3->setFont(font1);
        radioButton3->setCursor(QCursor(Qt::PointingHandCursor));
        radioButton3->setFocusPolicy(Qt::NoFocus);
        radioButton1 = new QRadioButton(widget);
        radioButton1->setObjectName(QStringLiteral("radioButton1"));
        radioButton1->setGeometry(QRect(10, 10, 55, 16));
        radioButton1->setFont(font1);
        radioButton1->setCursor(QCursor(Qt::PointingHandCursor));
        radioButton1->setFocusPolicy(Qt::NoFocus);
        radioButton1->setStyleSheet(QStringLiteral(""));
        radioButton2 = new QRadioButton(widget);
        radioButton2->setObjectName(QStringLiteral("radioButton2"));
        radioButton2->setGeometry(QRect(70, 10, 55, 16));
        radioButton2->setFont(font1);
        radioButton2->setCursor(QCursor(Qt::PointingHandCursor));
        radioButton2->setFocusPolicy(Qt::NoFocus);

        retranslateUi(SearchOptionWidget);

        QMetaObject::connectSlotsByName(SearchOptionWidget);
    } // setupUi

    void retranslateUi(QWidget *SearchOptionWidget)
    {
        SearchOptionWidget->setWindowTitle(QApplication::translate("SearchOptionWidget", "Form", Q_NULLPTR));
        radioButton3->setText(QApplication::translate("SearchOptionWidget", "Ranking", Q_NULLPTR));
        radioButton1->setText(QApplication::translate("SearchOptionWidget", "All", Q_NULLPTR));
        radioButton2->setText(QApplication::translate("SearchOptionWidget", "Name", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SearchOptionWidget: public Ui_SearchOptionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHOPTIONWIDGET_H
