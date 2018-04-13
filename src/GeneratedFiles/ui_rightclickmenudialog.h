/********************************************************************************
** Form generated from reading UI file 'rightclickmenudialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RIGHTCLICKMENUDIALOG_H
#define UI_RIGHTCLICKMENUDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RightClickMenuDialog
{
public:
    QPushButton *transferBtn;
    QPushButton *renameBtn;
    QPushButton *deleteBtn;

    void setupUi(QDialog *RightClickMenuDialog)
    {
        if (RightClickMenuDialog->objectName().isEmpty())
            RightClickMenuDialog->setObjectName(QStringLiteral("RightClickMenuDialog"));
        RightClickMenuDialog->resize(116, 106);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        RightClickMenuDialog->setFont(font);
        transferBtn = new QPushButton(RightClickMenuDialog);
        transferBtn->setObjectName(QStringLiteral("transferBtn"));
        transferBtn->setGeometry(QRect(0, 0, 116, 36));
        renameBtn = new QPushButton(RightClickMenuDialog);
        renameBtn->setObjectName(QStringLiteral("renameBtn"));
        renameBtn->setGeometry(QRect(0, 35, 116, 36));
        deleteBtn = new QPushButton(RightClickMenuDialog);
        deleteBtn->setObjectName(QStringLiteral("deleteBtn"));
        deleteBtn->setGeometry(QRect(0, 70, 116, 36));

        retranslateUi(RightClickMenuDialog);

        QMetaObject::connectSlotsByName(RightClickMenuDialog);
    } // setupUi

    void retranslateUi(QDialog *RightClickMenuDialog)
    {
        RightClickMenuDialog->setWindowTitle(QApplication::translate("RightClickMenuDialog", "Dialog", Q_NULLPTR));
        transferBtn->setText(QApplication::translate("RightClickMenuDialog", "Start transfer", Q_NULLPTR));
        renameBtn->setText(QApplication::translate("RightClickMenuDialog", "Edit account name", Q_NULLPTR));
        deleteBtn->setText(QApplication::translate("RightClickMenuDialog", "Delete account", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RightClickMenuDialog: public Ui_RightClickMenuDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIGHTCLICKMENUDIALOG_H
