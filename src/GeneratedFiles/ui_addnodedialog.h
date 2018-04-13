/********************************************************************************
** Form generated from reading UI file 'addnodedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNODEDIALOG_H
#define UI_ADDNODEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_AddNodeDialog
{
public:
    QLabel *label;
    QLineEdit *ipLineEdit;
    QLabel *label_2;
    QLineEdit *portLineEdit;
    QToolButton *cancelBtn;
    QToolButton *addBtn;

    void setupUi(QDialog *AddNodeDialog)
    {
        if (AddNodeDialog->objectName().isEmpty())
            AddNodeDialog->setObjectName(QStringLiteral("AddNodeDialog"));
        AddNodeDialog->resize(400, 200);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        AddNodeDialog->setFont(font);
        label = new QLabel(AddNodeDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 30, 51, 30));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ipLineEdit = new QLineEdit(AddNodeDialog);
        ipLineEdit->setObjectName(QStringLiteral("ipLineEdit"));
        ipLineEdit->setGeometry(QRect(130, 30, 171, 30));
        label_2 = new QLabel(AddNodeDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 80, 51, 30));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        portLineEdit = new QLineEdit(AddNodeDialog);
        portLineEdit->setObjectName(QStringLiteral("portLineEdit"));
        portLineEdit->setGeometry(QRect(130, 80, 171, 30));
        cancelBtn = new QToolButton(AddNodeDialog);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(210, 140, 120, 36));
        cancelBtn->setFont(font);
        cancelBtn->setCursor(QCursor(Qt::PointingHandCursor));
        addBtn = new QToolButton(AddNodeDialog);
        addBtn->setObjectName(QStringLiteral("addBtn"));
        addBtn->setGeometry(QRect(70, 140, 120, 36));
        addBtn->setFont(font);
        addBtn->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(AddNodeDialog);

        QMetaObject::connectSlotsByName(AddNodeDialog);
    } // setupUi

    void retranslateUi(QDialog *AddNodeDialog)
    {
        AddNodeDialog->setWindowTitle(QApplication::translate("AddNodeDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("AddNodeDialog", "IP", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddNodeDialog", "Port", Q_NULLPTR));
        cancelBtn->setText(QApplication::translate("AddNodeDialog", "Cancel", Q_NULLPTR));
        addBtn->setText(QApplication::translate("AddNodeDialog", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddNodeDialog: public Ui_AddNodeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNODEDIALOG_H
