/********************************************************************************
** Form generated from reading UI file 'titlebar.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TITLEBAR_H
#define UI_TITLEBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TitleBar
{
public:
    QToolButton *minBtn;
    QToolButton *closeBtn;
    QLabel *divLineLabel;
    QToolButton *menuBtn;
    QToolButton *newsBtn;
    QToolButton *newsBtn2;
    QToolButton *consoleBtn;

    void setupUi(QWidget *TitleBar)
    {
        if (TitleBar->objectName().isEmpty())
            TitleBar->setObjectName(QStringLiteral("TitleBar"));
        TitleBar->resize(960, 37);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        TitleBar->setFont(font);
        minBtn = new QToolButton(TitleBar);
        minBtn->setObjectName(QStringLiteral("minBtn"));
        minBtn->setGeometry(QRect(916, 10, 14, 14));
        minBtn->setCursor(QCursor(Qt::PointingHandCursor));
        minBtn->setFocusPolicy(Qt::NoFocus);
        closeBtn = new QToolButton(TitleBar);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));
        closeBtn->setGeometry(QRect(938, 10, 14, 14));
        closeBtn->setCursor(QCursor(Qt::PointingHandCursor));
        closeBtn->setFocusPolicy(Qt::NoFocus);
        divLineLabel = new QLabel(TitleBar);
        divLineLabel->setObjectName(QStringLiteral("divLineLabel"));
        divLineLabel->setGeometry(QRect(882, 9, 1, 16));
        menuBtn = new QToolButton(TitleBar);
        menuBtn->setObjectName(QStringLiteral("menuBtn"));
        menuBtn->setGeometry(QRect(894, 10, 15, 15));
        menuBtn->setCursor(QCursor(Qt::PointingHandCursor));
        menuBtn->setFocusPolicy(Qt::NoFocus);
        newsBtn = new QToolButton(TitleBar);
        newsBtn->setObjectName(QStringLiteral("newsBtn"));
        newsBtn->setGeometry(QRect(774, 9, 18, 18));
        newsBtn->setCursor(QCursor(Qt::PointingHandCursor));
        newsBtn->setFocusPolicy(Qt::NoFocus);
        newsBtn2 = new QToolButton(TitleBar);
        newsBtn2->setObjectName(QStringLiteral("newsBtn2"));
        newsBtn2->setGeometry(QRect(783, 7, 13, 13));
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        newsBtn2->setFont(font1);
        newsBtn2->setCursor(QCursor(Qt::PointingHandCursor));
        newsBtn2->setFocusPolicy(Qt::NoFocus);
        consoleBtn = new QToolButton(TitleBar);
        consoleBtn->setObjectName(QStringLiteral("consoleBtn"));
        consoleBtn->setGeometry(QRect(820, 6, 65, 24));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        consoleBtn->setFont(font2);
        consoleBtn->setCursor(QCursor(Qt::PointingHandCursor));
        consoleBtn->setFocusPolicy(Qt::NoFocus);
        consoleBtn->setStyleSheet(QLatin1String("color: rgb(94, 96, 100);\n"
"background:transparent;"));

        retranslateUi(TitleBar);

        QMetaObject::connectSlotsByName(TitleBar);
    } // setupUi

    void retranslateUi(QWidget *TitleBar)
    {
        TitleBar->setWindowTitle(QApplication::translate("TitleBar", "Form", Q_NULLPTR));
        minBtn->setText(QString());
        closeBtn->setText(QString());
        divLineLabel->setText(QString());
        menuBtn->setText(QString());
        newsBtn->setText(QString());
        newsBtn2->setText(QString());
        consoleBtn->setText(QApplication::translate("TitleBar", "Console", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TitleBar: public Ui_TitleBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TITLEBAR_H
