/********************************************************************************
** Form generated from reading UI file 'chooseupgradedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEUPGRADEDIALOG_H
#define UI_CHOOSEUPGRADEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ChooseUpgradeDialog
{
public:
    QPushButton *applyDelegateBtn;
    QPushButton *upgradeBtn;

    void setupUi(QDialog *ChooseUpgradeDialog)
    {
        if (ChooseUpgradeDialog->objectName().isEmpty())
            ChooseUpgradeDialog->setObjectName(QStringLiteral("ChooseUpgradeDialog"));
        ChooseUpgradeDialog->resize(130, 71);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        ChooseUpgradeDialog->setFont(font);
        applyDelegateBtn = new QPushButton(ChooseUpgradeDialog);
        applyDelegateBtn->setObjectName(QStringLiteral("applyDelegateBtn"));
        applyDelegateBtn->setGeometry(QRect(0, 35, 130, 36));
        upgradeBtn = new QPushButton(ChooseUpgradeDialog);
        upgradeBtn->setObjectName(QStringLiteral("upgradeBtn"));
        upgradeBtn->setGeometry(QRect(0, 0, 130, 36));

        retranslateUi(ChooseUpgradeDialog);

        QMetaObject::connectSlotsByName(ChooseUpgradeDialog);
    } // setupUi

    void retranslateUi(QDialog *ChooseUpgradeDialog)
    {
        ChooseUpgradeDialog->setWindowTitle(QApplication::translate("ChooseUpgradeDialog", "Dialog", Q_NULLPTR));
        applyDelegateBtn->setText(QApplication::translate("ChooseUpgradeDialog", "Proxy upgrade", Q_NULLPTR));
        upgradeBtn->setText(QApplication::translate("ChooseUpgradeDialog", "Registered upgrade", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ChooseUpgradeDialog: public Ui_ChooseUpgradeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEUPGRADEDIALOG_H
