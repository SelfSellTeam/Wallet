/********************************************************************************
** Form generated from reading UI file 'exportdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTDIALOG_H
#define UI_EXPORTDIALOG_H

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

class Ui_ExportDialog
{
public:
    QWidget *widget;
    QWidget *containerWidget;
    QToolButton *cancelBtn;
    QLabel *export_nameLabel;
    QPushButton *pathBtn;
    QToolButton *exportBtn;
    QLineEdit *pathLineEdit;
    QLabel *export_hintLabel;

    void setupUi(QDialog *ExportDialog)
    {
        if (ExportDialog->objectName().isEmpty())
            ExportDialog->setObjectName(QStringLiteral("ExportDialog"));
        ExportDialog->resize(960, 580);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        ExportDialog->setFont(font);
        widget = new QWidget(ExportDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 960, 580));
        containerWidget = new QWidget(widget);
        containerWidget->setObjectName(QStringLiteral("containerWidget"));
        containerWidget->setGeometry(QRect(209, 153, 542, 274));
        cancelBtn = new QToolButton(containerWidget);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(276, 167, 120, 36));
        cancelBtn->setCursor(QCursor(Qt::PointingHandCursor));
        export_nameLabel = new QLabel(containerWidget);
        export_nameLabel->setObjectName(QStringLiteral("export_nameLabel"));
        export_nameLabel->setGeometry(QRect(103, 65, 131, 21));
        export_nameLabel->setScaledContents(true);
        export_nameLabel->setWordWrap(false);
        pathBtn = new QPushButton(containerWidget);
        pathBtn->setObjectName(QStringLiteral("pathBtn"));
        pathBtn->setGeometry(QRect(370, 95, 80, 30));
        pathBtn->setFont(font);
        pathBtn->setCursor(QCursor(Qt::PointingHandCursor));
        pathBtn->setStyleSheet(QLatin1String("QPushButton{border:1px solid rgb(160,160,160);\n"
"border-radius:3px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(53, 53, 53);\n"
"}\n"
"QPushButton::hover{color: rgb(153, 153, 153);}"));
        exportBtn = new QToolButton(containerWidget);
        exportBtn->setObjectName(QStringLiteral("exportBtn"));
        exportBtn->setGeometry(QRect(140, 167, 120, 36));
        exportBtn->setCursor(QCursor(Qt::PointingHandCursor));
        pathLineEdit = new QLineEdit(containerWidget);
        pathLineEdit->setObjectName(QStringLiteral("pathLineEdit"));
        pathLineEdit->setGeometry(QRect(104, 95, 256, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        pathLineEdit->setFont(font1);
        pathLineEdit->setContextMenuPolicy(Qt::DefaultContextMenu);
        pathLineEdit->setStyleSheet(QStringLiteral("border-color: rgb(0, 0, 0);"));
        pathLineEdit->setReadOnly(false);
        export_hintLabel = new QLabel(containerWidget);
        export_hintLabel->setObjectName(QStringLiteral("export_hintLabel"));
        export_hintLabel->setGeometry(QRect(103, 20, 381, 21));
        export_hintLabel->setScaledContents(true);
        export_hintLabel->setWordWrap(false);

        retranslateUi(ExportDialog);

        QMetaObject::connectSlotsByName(ExportDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportDialog)
    {
        ExportDialog->setWindowTitle(QApplication::translate("ExportDialog", "Dialog", Q_NULLPTR));
        cancelBtn->setText(QApplication::translate("ExportDialog", "Cancel", Q_NULLPTR));
        export_nameLabel->setText(QString());
        pathBtn->setText(QApplication::translate("ExportDialog", "Select path", Q_NULLPTR));
        exportBtn->setText(QApplication::translate("ExportDialog", "Export", Q_NULLPTR));
        pathLineEdit->setText(QString());
        export_hintLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ExportDialog: public Ui_ExportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTDIALOG_H
