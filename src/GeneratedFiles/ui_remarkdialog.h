/********************************************************************************
** Form generated from reading UI file 'remarkdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMARKDIALOG_H
#define UI_REMARKDIALOG_H

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

class Ui_RemarkDialog
{
public:
    QWidget *widget;
    QWidget *containerWidget;
    QToolButton *cancelBtn;
    QLabel *label;
    QLineEdit *remarkLineEdit;
    QToolButton *okBtn;

    void setupUi(QDialog *RemarkDialog)
    {
        if (RemarkDialog->objectName().isEmpty())
            RemarkDialog->setObjectName(QStringLiteral("RemarkDialog"));
        RemarkDialog->resize(960, 580);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        RemarkDialog->setFont(font);
        widget = new QWidget(RemarkDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 960, 580));
        containerWidget = new QWidget(widget);
        containerWidget->setObjectName(QStringLiteral("containerWidget"));
        containerWidget->setGeometry(QRect(317, 205, 325, 170));
        cancelBtn = new QToolButton(containerWidget);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(171, 96, 120, 36));
        cancelBtn->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(containerWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(5, 51, 85, 12));
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        remarkLineEdit = new QLineEdit(containerWidget);
        remarkLineEdit->setObjectName(QStringLiteral("remarkLineEdit"));
        remarkLineEdit->setGeometry(QRect(95, 45, 221, 30));
        remarkLineEdit->setContextMenuPolicy(Qt::DefaultContextMenu);
        okBtn = new QToolButton(containerWidget);
        okBtn->setObjectName(QStringLiteral("okBtn"));
        okBtn->setGeometry(QRect(35, 96, 120, 36));
        okBtn->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(RemarkDialog);

        QMetaObject::connectSlotsByName(RemarkDialog);
    } // setupUi

    void retranslateUi(QDialog *RemarkDialog)
    {
        RemarkDialog->setWindowTitle(QApplication::translate("RemarkDialog", "Dialog", Q_NULLPTR));
        cancelBtn->setText(QString());
        label->setText(QApplication::translate("RemarkDialog", "Remark name:", Q_NULLPTR));
        okBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RemarkDialog: public Ui_RemarkDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMARKDIALOG_H
