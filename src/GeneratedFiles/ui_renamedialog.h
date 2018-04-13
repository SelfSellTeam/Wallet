/********************************************************************************
** Form generated from reading UI file 'renamedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENAMEDIALOG_H
#define UI_RENAMEDIALOG_H

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

class Ui_RenameDialog
{
public:
    QWidget *widget;
    QWidget *containerWidget;
    QToolButton *cancelBtn;
    QLabel *label;
    QToolButton *okBtn;
    QLabel *label_2;
    QLabel *addressNameTipLabel2;
    QLabel *addressNameTipLabel1;
    QLineEdit *nameLineEdit;
    QLabel *label_3;
    QLabel *gifLabel;

    void setupUi(QDialog *RenameDialog)
    {
        if (RenameDialog->objectName().isEmpty())
            RenameDialog->setObjectName(QStringLiteral("RenameDialog"));
        RenameDialog->resize(960, 580);
        widget = new QWidget(RenameDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 960, 580));
        containerWidget = new QWidget(widget);
        containerWidget->setObjectName(QStringLiteral("containerWidget"));
        containerWidget->setGeometry(QRect(219, 153, 542, 274));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        containerWidget->setFont(font);
        cancelBtn = new QToolButton(containerWidget);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(276, 167, 120, 36));
        cancelBtn->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(containerWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(5, 22, 145, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        label->setFont(font1);
        okBtn = new QToolButton(containerWidget);
        okBtn->setObjectName(QStringLiteral("okBtn"));
        okBtn->setGeometry(QRect(140, 167, 120, 36));
        okBtn->setCursor(QCursor(Qt::PointingHandCursor));
        label_2 = new QLabel(containerWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(145, 23, 380, 40));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color: rgb(64,154,255);"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        addressNameTipLabel2 = new QLabel(containerWidget);
        addressNameTipLabel2->setObjectName(QStringLiteral("addressNameTipLabel2"));
        addressNameTipLabel2->setGeometry(QRect(204, 138, 200, 16));
        addressNameTipLabel1 = new QLabel(containerWidget);
        addressNameTipLabel1->setObjectName(QStringLiteral("addressNameTipLabel1"));
        addressNameTipLabel1->setGeometry(QRect(180, 138, 16, 16));
        nameLineEdit = new QLineEdit(containerWidget);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(176, 100, 256, 30));
        nameLineEdit->setFont(font);
        nameLineEdit->setStyleSheet(QStringLiteral(""));
        nameLineEdit->setCursorPosition(0);
        label_3 = new QLabel(containerWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 100, 130, 30));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        gifLabel = new QLabel(containerWidget);
        gifLabel->setObjectName(QStringLiteral("gifLabel"));
        gifLabel->setGeometry(QRect(449, 106, 18, 18));

        retranslateUi(RenameDialog);

        QMetaObject::connectSlotsByName(RenameDialog);
    } // setupUi

    void retranslateUi(QDialog *RenameDialog)
    {
        RenameDialog->setWindowTitle(QApplication::translate("RenameDialog", "Dialog", Q_NULLPTR));
        cancelBtn->setText(QString());
        label->setText(QApplication::translate("RenameDialog", "Edit account name", Q_NULLPTR));
        okBtn->setText(QString());
        label_2->setText(QApplication::translate("RenameDialog", "<html><head/><body><p><span style=\" color:#282828;\">* This account name is only used as the identity of the local account and can be traded using the account name after the upgrade</span></p></body></html>", Q_NULLPTR));
        addressNameTipLabel2->setText(QString());
        addressNameTipLabel1->setText(QString());
        label_3->setText(QApplication::translate("RenameDialog", "<html><head/><body><p><span style=\" color:#282828;\">New account name:</span></p></body></html>", Q_NULLPTR));
        gifLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RenameDialog: public Ui_RenameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENAMEDIALOG_H
