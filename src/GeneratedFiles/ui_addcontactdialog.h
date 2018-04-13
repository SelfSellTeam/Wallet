/********************************************************************************
** Form generated from reading UI file 'addcontactdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONTACTDIALOG_H
#define UI_ADDCONTACTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddContactDialog
{
public:
    QWidget *widget;
    QWidget *containerWidget;
    QToolButton *cancelBtn;
    QLabel *contactLabel2;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *addressLineEdit;
    QLineEdit *remarkLineEdit;
    QLabel *tipLabel2;
    QToolButton *okBtn;
    QLabel *tipLabel;
    QLabel *label_3;
    QLabel *gifLabel;

    void setupUi(QDialog *AddContactDialog)
    {
        if (AddContactDialog->objectName().isEmpty())
            AddContactDialog->setObjectName(QStringLiteral("AddContactDialog"));
        AddContactDialog->resize(960, 580);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        AddContactDialog->setFont(font);
        widget = new QWidget(AddContactDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 960, 580));
        containerWidget = new QWidget(widget);
        containerWidget->setObjectName(QStringLiteral("containerWidget"));
        containerWidget->setGeometry(QRect(110, 110, 756, 411));
        cancelBtn = new QToolButton(containerWidget);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(386, 290, 120, 36));
        cancelBtn->setFont(font);
        cancelBtn->setCursor(QCursor(Qt::PointingHandCursor));
        cancelBtn->setFocusPolicy(Qt::NoFocus);
        contactLabel2 = new QLabel(containerWidget);
        contactLabel2->setObjectName(QStringLiteral("contactLabel2"));
        contactLabel2->setGeometry(QRect(30, 30, 171, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        contactLabel2->setFont(font1);
        contactLabel2->setStyleSheet(QStringLiteral("color: rgb(40, 40, 40);"));
        label_2 = new QLabel(containerWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 118, 175, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(10);
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(containerWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 178, 71, 21));
        label->setFont(font2);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        addressLineEdit = new QLineEdit(containerWidget);
        addressLineEdit->setObjectName(QStringLiteral("addressLineEdit"));
        addressLineEdit->setGeometry(QRect(185, 115, 505, 30));
        addressLineEdit->setFont(font2);
        remarkLineEdit = new QLineEdit(containerWidget);
        remarkLineEdit->setObjectName(QStringLiteral("remarkLineEdit"));
        remarkLineEdit->setGeometry(QRect(185, 175, 185, 30));
        remarkLineEdit->setFont(font2);
        tipLabel2 = new QLabel(containerWidget);
        tipLabel2->setObjectName(QStringLiteral("tipLabel2"));
        tipLabel2->setGeometry(QRect(167, 148, 16, 16));
        okBtn = new QToolButton(containerWidget);
        okBtn->setObjectName(QStringLiteral("okBtn"));
        okBtn->setGeometry(QRect(248, 290, 120, 36));
        okBtn->setFont(font);
        okBtn->setCursor(QCursor(Qt::PointingHandCursor));
        okBtn->setFocusPolicy(Qt::NoFocus);
        tipLabel = new QLabel(containerWidget);
        tipLabel->setObjectName(QStringLiteral("tipLabel"));
        tipLabel->setGeometry(QRect(190, 148, 261, 16));
        tipLabel->setFont(font);
        tipLabel->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        label_3 = new QLabel(containerWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(385, 180, 60, 16));
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("color: rgb(177, 177, 177);"));
        gifLabel = new QLabel(containerWidget);
        gifLabel->setObjectName(QStringLiteral("gifLabel"));
        gifLabel->setGeometry(QRect(689, 121, 18, 18));
        QWidget::setTabOrder(addressLineEdit, remarkLineEdit);
        QWidget::setTabOrder(remarkLineEdit, cancelBtn);

        retranslateUi(AddContactDialog);

        QMetaObject::connectSlotsByName(AddContactDialog);
    } // setupUi

    void retranslateUi(QDialog *AddContactDialog)
    {
        AddContactDialog->setWindowTitle(QApplication::translate("AddContactDialog", "Dialog", Q_NULLPTR));
        cancelBtn->setText(QApplication::translate("AddContactDialog", "Cancel", Q_NULLPTR));
        contactLabel2->setText(QApplication::translate("AddContactDialog", "Add contactor", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddContactDialog", "Address/Registered account:", Q_NULLPTR));
        label->setText(QApplication::translate("AddContactDialog", "Remarks:", Q_NULLPTR));
        tipLabel2->setText(QString());
        okBtn->setText(QApplication::translate("AddContactDialog", "OK", Q_NULLPTR));
        tipLabel->setText(QString());
        label_3->setText(QApplication::translate("AddContactDialog", "Optional", Q_NULLPTR));
        gifLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddContactDialog: public Ui_AddContactDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONTACTDIALOG_H
