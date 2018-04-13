/********************************************************************************
** Form generated from reading UI file 'editremarkdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITREMARKDIALOG_H
#define UI_EDITREMARKDIALOG_H

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

class Ui_EditRemarkDialog
{
public:
    QWidget *widget;
    QWidget *containerWidget;
    QToolButton *okBtn;
    QLineEdit *remarkLineEdit;
    QLabel *label;

    void setupUi(QDialog *EditRemarkDialog)
    {
        if (EditRemarkDialog->objectName().isEmpty())
            EditRemarkDialog->setObjectName(QStringLiteral("EditRemarkDialog"));
        EditRemarkDialog->resize(960, 580);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        EditRemarkDialog->setFont(font);
        widget = new QWidget(EditRemarkDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 960, 580));
        containerWidget = new QWidget(widget);
        containerWidget->setObjectName(QStringLiteral("containerWidget"));
        containerWidget->setGeometry(QRect(317, 206, 325, 168));
        okBtn = new QToolButton(containerWidget);
        okBtn->setObjectName(QStringLiteral("okBtn"));
        okBtn->setGeometry(QRect(103, 98, 120, 36));
        okBtn->setCursor(QCursor(Qt::PointingHandCursor));
        remarkLineEdit = new QLineEdit(containerWidget);
        remarkLineEdit->setObjectName(QStringLiteral("remarkLineEdit"));
        remarkLineEdit->setGeometry(QRect(91, 42, 200, 30));
        remarkLineEdit->setContextMenuPolicy(Qt::DefaultContextMenu);
        label = new QLabel(containerWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 50, 80, 12));
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        retranslateUi(EditRemarkDialog);

        QMetaObject::connectSlotsByName(EditRemarkDialog);
    } // setupUi

    void retranslateUi(QDialog *EditRemarkDialog)
    {
        EditRemarkDialog->setWindowTitle(QApplication::translate("EditRemarkDialog", "Dialog", Q_NULLPTR));
        okBtn->setText(QApplication::translate("EditRemarkDialog", "OK", Q_NULLPTR));
        label->setText(QApplication::translate("EditRemarkDialog", "Memo name:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EditRemarkDialog: public Ui_EditRemarkDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITREMARKDIALOG_H
