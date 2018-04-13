/********************************************************************************
** Form generated from reading UI file 'waitingpage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAITINGPAGE_H
#define UI_WAITINGPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WaitingPage
{
public:
    QLabel *logoLabel;
    QLabel *textLabel;
    QLabel *gifLabel;

    void setupUi(QWidget *WaitingPage)
    {
        if (WaitingPage->objectName().isEmpty())
            WaitingPage->setObjectName(QStringLiteral("WaitingPage"));
        WaitingPage->resize(960, 579);
        logoLabel = new QLabel(WaitingPage);
        logoLabel->setObjectName(QStringLiteral("logoLabel"));
        logoLabel->setGeometry(QRect(380, 137, 211, 112));
        logoLabel->setAlignment(Qt::AlignCenter);
        textLabel = new QLabel(WaitingPage);
        textLabel->setObjectName(QStringLiteral("textLabel"));
        textLabel->setGeometry(QRect(381, 220, 197, 29));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        textLabel->setFont(font);
        textLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        textLabel->setAlignment(Qt::AlignCenter);
        gifLabel = new QLabel(WaitingPage);
        gifLabel->setObjectName(QStringLiteral("gifLabel"));
        gifLabel->setGeometry(QRect(465, 301, 39, 39));

        retranslateUi(WaitingPage);

        QMetaObject::connectSlotsByName(WaitingPage);
    } // setupUi

    void retranslateUi(QWidget *WaitingPage)
    {
        WaitingPage->setWindowTitle(QApplication::translate("WaitingPage", "Form", Q_NULLPTR));
        logoLabel->setText(QString());
        textLabel->setText(QString());
        gifLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WaitingPage: public Ui_WaitingPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAITINGPAGE_H
