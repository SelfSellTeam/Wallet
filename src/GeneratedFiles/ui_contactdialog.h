/********************************************************************************
** Form generated from reading UI file 'contactdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTDIALOG_H
#define UI_CONTACTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ContactDialog
{
public:
    QTableWidget *contactsTableWidget;

    void setupUi(QDialog *ContactDialog)
    {
        if (ContactDialog->objectName().isEmpty())
            ContactDialog->setObjectName(QStringLiteral("ContactDialog"));
        ContactDialog->resize(173, 185);
        contactsTableWidget = new QTableWidget(ContactDialog);
        if (contactsTableWidget->columnCount() < 3)
            contactsTableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        contactsTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        contactsTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        contactsTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        contactsTableWidget->setObjectName(QStringLiteral("contactsTableWidget"));
        contactsTableWidget->setGeometry(QRect(0, 0, 173, 185));
        contactsTableWidget->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
""));
        contactsTableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        contactsTableWidget->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::CurrentChanged|QAbstractItemView::SelectedClicked);
        contactsTableWidget->setDragDropMode(QAbstractItemView::NoDragDrop);
        contactsTableWidget->horizontalHeader()->setVisible(false);
        contactsTableWidget->verticalHeader()->setVisible(false);

        retranslateUi(ContactDialog);

        QMetaObject::connectSlotsByName(ContactDialog);
    } // setupUi

    void retranslateUi(QDialog *ContactDialog)
    {
        ContactDialog->setWindowTitle(QApplication::translate("ContactDialog", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ContactDialog: public Ui_ContactDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACTDIALOG_H
