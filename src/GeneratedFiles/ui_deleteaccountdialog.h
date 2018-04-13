/********************************************************************************
** Form generated from reading UI file 'deleteaccountdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEACCOUNTDIALOG_H
#define UI_DELETEACCOUNTDIALOG_H

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

class Ui_DeleteAccountDialog
{
public:
    QWidget *widget;
    QWidget *containerWidget;
    QToolButton *cancelBtn;
    QLabel *label_2;
    QLineEdit *pwdLineEdit;
    QToolButton *okBtn;
    QLabel *label;
    QLabel *tipLabel2;
    QLabel *tipLabel1;
    QLabel *titleLabel;

    void setupUi(QDialog *DeleteAccountDialog)
    {
        if (DeleteAccountDialog->objectName().isEmpty())
            DeleteAccountDialog->setObjectName(QStringLiteral("DeleteAccountDialog"));
        DeleteAccountDialog->resize(960, 580);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        DeleteAccountDialog->setFont(font);
        widget = new QWidget(DeleteAccountDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 960, 580));
        containerWidget = new QWidget(widget);
        containerWidget->setObjectName(QStringLiteral("containerWidget"));
        containerWidget->setGeometry(QRect(220, 158, 520, 263));
        cancelBtn = new QToolButton(containerWidget);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(265, 160, 120, 36));
        cancelBtn->setCursor(QCursor(Qt::PointingHandCursor));
        label_2 = new QLabel(containerWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 20, 320, 40));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral(""));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pwdLineEdit = new QLineEdit(containerWidget);
        pwdLineEdit->setObjectName(QStringLiteral("pwdLineEdit"));
        pwdLineEdit->setGeometry(QRect(160, 96, 246, 30));
        pwdLineEdit->setFont(font);
        pwdLineEdit->setStyleSheet(QStringLiteral(""));
        pwdLineEdit->setEchoMode(QLineEdit::Password);
        okBtn = new QToolButton(containerWidget);
        okBtn->setObjectName(QStringLiteral("okBtn"));
        okBtn->setGeometry(QRect(134, 160, 120, 36));
        okBtn->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(containerWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(45, 96, 101, 30));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        tipLabel2 = new QLabel(containerWidget);
        tipLabel2->setObjectName(QStringLiteral("tipLabel2"));
        tipLabel2->setGeometry(QRect(190, 131, 200, 16));
        tipLabel1 = new QLabel(containerWidget);
        tipLabel1->setObjectName(QStringLiteral("tipLabel1"));
        tipLabel1->setGeometry(QRect(166, 131, 16, 16));
        titleLabel = new QLabel(containerWidget);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(25, 22, 151, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        titleLabel->setFont(font1);

        retranslateUi(DeleteAccountDialog);

        QMetaObject::connectSlotsByName(DeleteAccountDialog);
    } // setupUi

    void retranslateUi(QDialog *DeleteAccountDialog)
    {
        DeleteAccountDialog->setWindowTitle(QApplication::translate("DeleteAccountDialog", "Dialog", Q_NULLPTR));
        cancelBtn->setText(QString());
        label_2->setText(QApplication::translate("DeleteAccountDialog", "It can not be used after deletion unless the private \n"
"key is imported.", Q_NULLPTR));
        okBtn->setText(QString());
        label->setText(QApplication::translate("DeleteAccountDialog", "Password:", Q_NULLPTR));
        tipLabel2->setText(QString());
        tipLabel1->setText(QString());
        titleLabel->setText(QApplication::translate("DeleteAccountDialog", "Delete account", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DeleteAccountDialog: public Ui_DeleteAccountDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEACCOUNTDIALOG_H
