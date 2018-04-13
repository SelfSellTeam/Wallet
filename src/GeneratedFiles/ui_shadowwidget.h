/********************************************************************************
** Form generated from reading UI file 'shadowwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHADOWWIDGET_H
#define UI_SHADOWWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShadowWidget
{
public:
    QLabel *gifLabel;
    QLabel *tipLabel;

    void setupUi(QWidget *ShadowWidget)
    {
        if (ShadowWidget->objectName().isEmpty())
            ShadowWidget->setObjectName(QStringLiteral("ShadowWidget"));
        ShadowWidget->resize(448, 300);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        ShadowWidget->setFont(font);
        gifLabel = new QLabel(ShadowWidget);
        gifLabel->setObjectName(QStringLiteral("gifLabel"));
        gifLabel->setGeometry(QRect(70, 110, 54, 12));
        tipLabel = new QLabel(ShadowWidget);
        tipLabel->setObjectName(QStringLiteral("tipLabel"));
        tipLabel->setGeometry(QRect(20, 200, 201, 40));
        tipLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        retranslateUi(ShadowWidget);

        QMetaObject::connectSlotsByName(ShadowWidget);
    } // setupUi

    void retranslateUi(QWidget *ShadowWidget)
    {
        ShadowWidget->setWindowTitle(QApplication::translate("ShadowWidget", "Form", Q_NULLPTR));
        gifLabel->setText(QString());
        tipLabel->setText(QApplication::translate("ShadowWidget", "Wallet is synchronizing data...     ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ShadowWidget: public Ui_ShadowWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHADOWWIDGET_H
