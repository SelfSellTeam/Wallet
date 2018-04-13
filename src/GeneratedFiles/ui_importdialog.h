/********************************************************************************
** Form generated from reading UI file 'importdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTDIALOG_H
#define UI_IMPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImportDialog
{
public:
    QWidget *widget;
    QWidget *containerWidget;
    QToolButton *cancelBtn;
    QLineEdit *privateKeyLineEdit;
    QToolButton *importBtn;
    QLabel *tipLabel;
    QLabel *label;
    QPushButton *pathBtn;

    void setupUi(QDialog *ImportDialog)
    {
        if (ImportDialog->objectName().isEmpty())
            ImportDialog->setObjectName(QStringLiteral("ImportDialog"));
        ImportDialog->resize(960, 580);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        ImportDialog->setFont(font);
        widget = new QWidget(ImportDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 960, 580));
        containerWidget = new QWidget(widget);
        containerWidget->setObjectName(QStringLiteral("containerWidget"));
        containerWidget->setGeometry(QRect(209, 153, 542, 274));
        cancelBtn = new QToolButton(containerWidget);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(276, 167, 120, 36));
        cancelBtn->setCursor(QCursor(Qt::PointingHandCursor));
        privateKeyLineEdit = new QLineEdit(containerWidget);
        privateKeyLineEdit->setObjectName(QStringLiteral("privateKeyLineEdit"));
        privateKeyLineEdit->setGeometry(QRect(77, 95, 390, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        privateKeyLineEdit->setFont(font1);
        privateKeyLineEdit->setContextMenuPolicy(Qt::DefaultContextMenu);
        privateKeyLineEdit->setStyleSheet(QStringLiteral("border-color: rgb(0, 0, 0);"));
        privateKeyLineEdit->setReadOnly(false);
        importBtn = new QToolButton(containerWidget);
        importBtn->setObjectName(QStringLiteral("importBtn"));
        importBtn->setGeometry(QRect(140, 167, 120, 36));
        importBtn->setCursor(QCursor(Qt::PointingHandCursor));
        tipLabel = new QLabel(containerWidget);
        tipLabel->setObjectName(QStringLiteral("tipLabel"));
        tipLabel->setGeometry(QRect(-171, 77, 261, 16));
        tipLabel->setFont(font);
        tipLabel->setStyleSheet(QStringLiteral("color: rgb(255, 78, 54);"));
        label = new QLabel(containerWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(79, 61, 300, 20));
        pathBtn = new QPushButton(containerWidget);
        pathBtn->setObjectName(QStringLiteral("pathBtn"));
        pathBtn->setGeometry(QRect(398, 52, 70, 30));
        pathBtn->setFont(font);
        pathBtn->setCursor(QCursor(Qt::PointingHandCursor));
        pathBtn->setFocusPolicy(Qt::NoFocus);
        pathBtn->setStyleSheet(QLatin1String("QPushButton{border:1px solid rgb(160,160,160);\n"
"border-radius:3px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(53, 53, 53);\n"
"}\n"
"QPushButton::hover{color: rgb(153, 153, 153);}"));
        QWidget::setTabOrder(privateKeyLineEdit, importBtn);
        QWidget::setTabOrder(importBtn, cancelBtn);
        QWidget::setTabOrder(cancelBtn, pathBtn);

        retranslateUi(ImportDialog);

        QMetaObject::connectSlotsByName(ImportDialog);
    } // setupUi

    void retranslateUi(QDialog *ImportDialog)
    {
        ImportDialog->setWindowTitle(QApplication::translate("ImportDialog", "Dialog", Q_NULLPTR));
        cancelBtn->setText(QApplication::translate("ImportDialog", "Cancel", Q_NULLPTR));
        privateKeyLineEdit->setText(QString());
        importBtn->setText(QApplication::translate("ImportDialog", "Import", Q_NULLPTR));
        tipLabel->setText(QString());
        label->setText(QApplication::translate("ImportDialog", "Select a private key(PK) file or enter a PK", Q_NULLPTR));
        pathBtn->setText(QApplication::translate("ImportDialog", "Select", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ImportDialog: public Ui_ImportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTDIALOG_H
