/********************************************************************************
** Form generated from reading UI file 'namedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAMEDIALOG_H
#define UI_NAMEDIALOG_H

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

class Ui_NameDialog
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
    QLabel *gifLabel;
    QToolButton *checkBtn;

    void setupUi(QDialog *NameDialog)
    {
        if (NameDialog->objectName().isEmpty())
            NameDialog->setObjectName(QStringLiteral("NameDialog"));
        NameDialog->resize(960, 580);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(9);
        NameDialog->setFont(font);
        NameDialog->setStyleSheet(QStringLiteral(""));
        widget = new QWidget(NameDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 960, 580));
        containerWidget = new QWidget(widget);
        containerWidget->setObjectName(QStringLiteral("containerWidget"));
        containerWidget->setGeometry(QRect(276, 178, 408, 223));
        cancelBtn = new QToolButton(containerWidget);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(209, 140, 120, 36));
        cancelBtn->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(containerWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(5, 5, 135, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(14);
        label->setFont(font1);
        okBtn = new QToolButton(containerWidget);
        okBtn->setObjectName(QStringLiteral("okBtn"));
        okBtn->setGeometry(QRect(73, 140, 120, 36));
        okBtn->setCursor(QCursor(Qt::PointingHandCursor));
        label_2 = new QLabel(containerWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 23, 321, 50));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        label_2->setFont(font2);
        label_2->setStyleSheet(QStringLiteral("color: rgb(64,154,255);"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        addressNameTipLabel2 = new QLabel(containerWidget);
        addressNameTipLabel2->setObjectName(QStringLiteral("addressNameTipLabel2"));
        addressNameTipLabel2->setGeometry(QRect(100, 110, 200, 16));
        addressNameTipLabel1 = new QLabel(containerWidget);
        addressNameTipLabel1->setObjectName(QStringLiteral("addressNameTipLabel1"));
        addressNameTipLabel1->setGeometry(QRect(76, 110, 16, 16));
        nameLineEdit = new QLineEdit(containerWidget);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(73, 72, 258, 30));
        nameLineEdit->setFont(font2);
        nameLineEdit->setStyleSheet(QStringLiteral(""));
        nameLineEdit->setCursorPosition(0);
        gifLabel = new QLabel(containerWidget);
        gifLabel->setObjectName(QStringLiteral("gifLabel"));
        gifLabel->setGeometry(QRect(40, 78, 18, 18));
        checkBtn = new QToolButton(containerWidget);
        checkBtn->setObjectName(QStringLiteral("checkBtn"));
        checkBtn->setGeometry(QRect(345, 72, 50, 30));

        retranslateUi(NameDialog);

        QMetaObject::connectSlotsByName(NameDialog);
    } // setupUi

    void retranslateUi(QDialog *NameDialog)
    {
        NameDialog->setWindowTitle(QApplication::translate("NameDialog", "Dialog", Q_NULLPTR));
        cancelBtn->setText(QApplication::translate("NameDialog", "Cancel", Q_NULLPTR));
        label->setText(QApplication::translate("NameDialog", "New Account", Q_NULLPTR));
        okBtn->setText(QApplication::translate("NameDialog", "OK", Q_NULLPTR));
        label_2->setText(QApplication::translate("NameDialog", "<html><head/><body><p>*Transfer is not allowed before upgrading account. </p></body></html>", Q_NULLPTR));
        addressNameTipLabel2->setText(QString());
        addressNameTipLabel1->setText(QString());
        gifLabel->setText(QString());
        checkBtn->setText(QApplication::translate("NameDialog", "Check", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NameDialog: public Ui_NameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAMEDIALOG_H
