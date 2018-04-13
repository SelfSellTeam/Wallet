/********************************************************************************
** Form generated from reading UI file 'chooseaddaccountdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEADDACCOUNTDIALOG_H
#define UI_CHOOSEADDACCOUNTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ChooseAddAccountDialog
{
public:
    QPushButton *newBtn;
    QPushButton *importBtn;

    void setupUi(QDialog *ChooseAddAccountDialog)
    {
        if (ChooseAddAccountDialog->objectName().isEmpty())
            ChooseAddAccountDialog->setObjectName(QStringLiteral("ChooseAddAccountDialog"));
        ChooseAddAccountDialog->resize(116, 71);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        ChooseAddAccountDialog->setFont(font);
        newBtn = new QPushButton(ChooseAddAccountDialog);
        newBtn->setObjectName(QStringLiteral("newBtn"));
        newBtn->setGeometry(QRect(0, 0, 116, 36));
        importBtn = new QPushButton(ChooseAddAccountDialog);
        importBtn->setObjectName(QStringLiteral("importBtn"));
        importBtn->setGeometry(QRect(0, 35, 116, 36));

        retranslateUi(ChooseAddAccountDialog);

        QMetaObject::connectSlotsByName(ChooseAddAccountDialog);
    } // setupUi

    void retranslateUi(QDialog *ChooseAddAccountDialog)
    {
        ChooseAddAccountDialog->setWindowTitle(QApplication::translate("ChooseAddAccountDialog", "Dialog", Q_NULLPTR));
        newBtn->setText(QApplication::translate("ChooseAddAccountDialog", "New account", Q_NULLPTR));
        importBtn->setText(QApplication::translate("ChooseAddAccountDialog", "Import account", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ChooseAddAccountDialog: public Ui_ChooseAddAccountDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEADDACCOUNTDIALOG_H
