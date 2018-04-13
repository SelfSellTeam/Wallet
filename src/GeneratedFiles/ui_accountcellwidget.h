/********************************************************************************
** Form generated from reading UI file 'accountcellwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTCELLWIDGET_H
#define UI_ACCOUNTCELLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AccountCellWidget
{
public:
    QWidget *widget;
    QLabel *nameLabel;
    QLabel *identityLabel;

    void setupUi(QWidget *AccountCellWidget)
    {
        if (AccountCellWidget->objectName().isEmpty())
            AccountCellWidget->setObjectName(QStringLiteral("AccountCellWidget"));
        AccountCellWidget->resize(525, 385);
        widget = new QWidget(AccountCellWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 351, 221));
        nameLabel = new QLabel(widget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setGeometry(QRect(20, 17, 200, 30));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Symbol"));
        font.setPointSize(12);
        nameLabel->setFont(font);
        nameLabel->setToolTipDuration(-1);
        nameLabel->setScaledContents(false);
        nameLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        nameLabel->setWordWrap(false);
        nameLabel->setMargin(0);
        identityLabel = new QLabel(widget);
        identityLabel->setObjectName(QStringLiteral("identityLabel"));
        identityLabel->setGeometry(QRect(240, 30, 91, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        identityLabel->setFont(font1);
        identityLabel->setStyleSheet(QStringLiteral("background:transparent;"));
        identityLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        retranslateUi(AccountCellWidget);

        QMetaObject::connectSlotsByName(AccountCellWidget);
    } // setupUi

    void retranslateUi(QWidget *AccountCellWidget)
    {
        AccountCellWidget->setWindowTitle(QApplication::translate("AccountCellWidget", "Form", Q_NULLPTR));
        nameLabel->setText(QString());
        identityLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AccountCellWidget: public Ui_AccountCellWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTCELLWIDGET_H
