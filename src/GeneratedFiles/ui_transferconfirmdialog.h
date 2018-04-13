/********************************************************************************
** Form generated from reading UI file 'transferconfirmdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFERCONFIRMDIALOG_H
#define UI_TRANSFERCONFIRMDIALOG_H

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

class Ui_TransferConfirmDialog
{
public:
    QWidget *widget;
    QWidget *containerWidget;
    QLineEdit *pwdLineEdit;
    QLabel *tipLabel2;
    QToolButton *okBtn;
    QLabel *label_2;
    QLabel *pwdLabel;
    QLabel *label_5;
    QLabel *tipLabel1;
    QLabel *feeLabel;
    QLabel *label_3;
    QLabel *remarkLabel;
    QLabel *label;
    QToolButton *cancelBtn;
    QLabel *label_4;
    QLabel *addressLabel;
    QLabel *amountLabel;

    void setupUi(QDialog *TransferConfirmDialog)
    {
        if (TransferConfirmDialog->objectName().isEmpty())
            TransferConfirmDialog->setObjectName(QStringLiteral("TransferConfirmDialog"));
        TransferConfirmDialog->resize(960, 580);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        TransferConfirmDialog->setFont(font);
        widget = new QWidget(TransferConfirmDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 960, 580));
        containerWidget = new QWidget(widget);
        containerWidget->setObjectName(QStringLiteral("containerWidget"));
        containerWidget->setGeometry(QRect(100, 82, 760, 415));
        pwdLineEdit = new QLineEdit(containerWidget);
        pwdLineEdit->setObjectName(QStringLiteral("pwdLineEdit"));
        pwdLineEdit->setGeometry(QRect(320, 265, 191, 30));
        pwdLineEdit->setEchoMode(QLineEdit::Password);
        tipLabel2 = new QLabel(containerWidget);
        tipLabel2->setObjectName(QStringLiteral("tipLabel2"));
        tipLabel2->setGeometry(QRect(344, 303, 200, 16));
        okBtn = new QToolButton(containerWidget);
        okBtn->setObjectName(QStringLiteral("okBtn"));
        okBtn->setGeometry(QRect(250, 330, 120, 36));
        okBtn->setCursor(QCursor(Qt::PointingHandCursor));
        label_2 = new QLabel(containerWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 100, 111, 21));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pwdLabel = new QLabel(containerWidget);
        pwdLabel->setObjectName(QStringLiteral("pwdLabel"));
        pwdLabel->setGeometry(QRect(188, 272, 111, 20));
        pwdLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(containerWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(110, 220, 81, 21));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        tipLabel1 = new QLabel(containerWidget);
        tipLabel1->setObjectName(QStringLiteral("tipLabel1"));
        tipLabel1->setGeometry(QRect(320, 303, 16, 16));
        feeLabel = new QLabel(containerWidget);
        feeLabel->setObjectName(QStringLiteral("feeLabel"));
        feeLabel->setGeometry(QRect(240, 180, 461, 21));
        feeLabel->setStyleSheet(QStringLiteral(""));
        label_3 = new QLabel(containerWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 140, 121, 21));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        remarkLabel = new QLabel(containerWidget);
        remarkLabel->setObjectName(QStringLiteral("remarkLabel"));
        remarkLabel->setGeometry(QRect(240, 220, 461, 21));
        label = new QLabel(containerWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 30, 211, 31));
        QFont font2;
        font2.setPointSize(12);
        label->setFont(font2);
        cancelBtn = new QToolButton(containerWidget);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(386, 330, 120, 36));
        cancelBtn->setCursor(QCursor(Qt::PointingHandCursor));
        label_4 = new QLabel(containerWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 180, 91, 21));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        addressLabel = new QLabel(containerWidget);
        addressLabel->setObjectName(QStringLiteral("addressLabel"));
        addressLabel->setGeometry(QRect(240, 80, 521, 41));
        amountLabel = new QLabel(containerWidget);
        amountLabel->setObjectName(QStringLiteral("amountLabel"));
        amountLabel->setGeometry(QRect(240, 140, 461, 21));

        retranslateUi(TransferConfirmDialog);

        QMetaObject::connectSlotsByName(TransferConfirmDialog);
    } // setupUi

    void retranslateUi(QDialog *TransferConfirmDialog)
    {
        TransferConfirmDialog->setWindowTitle(QApplication::translate("TransferConfirmDialog", "Dialog", Q_NULLPTR));
        tipLabel2->setText(QString());
        okBtn->setText(QString());
        label_2->setText(QApplication::translate("TransferConfirmDialog", "Transfer addr", Q_NULLPTR));
        pwdLabel->setText(QApplication::translate("TransferConfirmDialog", "Wallet password", Q_NULLPTR));
        label_5->setText(QApplication::translate("TransferConfirmDialog", "Remark", Q_NULLPTR));
        tipLabel1->setText(QString());
        feeLabel->setText(QString());
        label_3->setText(QApplication::translate("TransferConfirmDialog", "Transfer amount", Q_NULLPTR));
        remarkLabel->setText(QString());
        label->setText(QApplication::translate("TransferConfirmDialog", "Transfer Confirmation", Q_NULLPTR));
        cancelBtn->setText(QString());
        label_4->setText(QApplication::translate("TransferConfirmDialog", "Fee", Q_NULLPTR));
        addressLabel->setText(QString());
        amountLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TransferConfirmDialog: public Ui_TransferConfirmDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFERCONFIRMDIALOG_H
