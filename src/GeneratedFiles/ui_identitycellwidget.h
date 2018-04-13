/********************************************************************************
** Form generated from reading UI file 'identitycellwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IDENTITYCELLWIDGET_H
#define UI_IDENTITYCELLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IdentityCellWidget
{
public:
    QWidget *widget;
    QToolButton *upgradeBtn;
    QToolButton *produceBtn;
    QToolButton *alreadyUpgradeBtn;
    QLabel *delegateLabel;

    void setupUi(QWidget *IdentityCellWidget)
    {
        if (IdentityCellWidget->objectName().isEmpty())
            IdentityCellWidget->setObjectName(QStringLiteral("IdentityCellWidget"));
        IdentityCellWidget->resize(100, 65);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        IdentityCellWidget->setFont(font);
        widget = new QWidget(IdentityCellWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 100, 65));
        upgradeBtn = new QToolButton(widget);
        upgradeBtn->setObjectName(QStringLiteral("upgradeBtn"));
        upgradeBtn->setGeometry(QRect(10, 20, 60, 24));
        produceBtn = new QToolButton(widget);
        produceBtn->setObjectName(QStringLiteral("produceBtn"));
        produceBtn->setGeometry(QRect(66, 22, 20, 20));
        alreadyUpgradeBtn = new QToolButton(widget);
        alreadyUpgradeBtn->setObjectName(QStringLiteral("alreadyUpgradeBtn"));
        alreadyUpgradeBtn->setGeometry(QRect(10, 20, 60, 24));
        delegateLabel = new QLabel(widget);
        delegateLabel->setObjectName(QStringLiteral("delegateLabel"));
        delegateLabel->setGeometry(QRect(13, 25, 52, 16));
        delegateLabel->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        delegateLabel->setAlignment(Qt::AlignCenter);

        retranslateUi(IdentityCellWidget);

        QMetaObject::connectSlotsByName(IdentityCellWidget);
    } // setupUi

    void retranslateUi(QWidget *IdentityCellWidget)
    {
        IdentityCellWidget->setWindowTitle(QApplication::translate("IdentityCellWidget", "Form", Q_NULLPTR));
        upgradeBtn->setText(QString());
        produceBtn->setText(QString());
        alreadyUpgradeBtn->setText(QString());
        delegateLabel->setText(QApplication::translate("IdentityCellWidget", "Proxy", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class IdentityCellWidget: public Ui_IdentityCellWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IDENTITYCELLWIDGET_H
