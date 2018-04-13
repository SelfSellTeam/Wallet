/********************************************************************************
** Form generated from reading UI file 'consoledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSOLEDIALOG_H
#define UI_CONSOLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConsoleDialog
{
public:
    QWidget *widget;
    QWidget *containerWidget;
    QTextBrowser *consoleBrowser;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *consoleLineEdit;
    QCheckBox *checkBox;
    QToolButton *closeBtn;

    void setupUi(QDialog *ConsoleDialog)
    {
        if (ConsoleDialog->objectName().isEmpty())
            ConsoleDialog->setObjectName(QStringLiteral("ConsoleDialog"));
        ConsoleDialog->resize(960, 580);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        ConsoleDialog->setFont(font);
        widget = new QWidget(ConsoleDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 960, 580));
        containerWidget = new QWidget(widget);
        containerWidget->setObjectName(QStringLiteral("containerWidget"));
        containerWidget->setGeometry(QRect(166, 56, 628, 468));
        consoleBrowser = new QTextBrowser(containerWidget);
        consoleBrowser->setObjectName(QStringLiteral("consoleBrowser"));
        consoleBrowser->setGeometry(QRect(55, 173, 520, 220));
        consoleBrowser->setFont(font);
        consoleBrowser->setContextMenuPolicy(Qt::DefaultContextMenu);
        label = new QLabel(containerWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 20, 91, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral(""));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(containerWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(55, 100, 411, 16));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(12);
        label_2->setFont(font2);
        consoleLineEdit = new QLineEdit(containerWidget);
        consoleLineEdit->setObjectName(QStringLiteral("consoleLineEdit"));
        consoleLineEdit->setGeometry(QRect(55, 131, 520, 30));
        consoleLineEdit->setFont(font);
        consoleLineEdit->setContextMenuPolicy(Qt::DefaultContextMenu);
        checkBox = new QCheckBox(containerWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(490, 100, 111, 16));
        QFont font3;
        font3.setPointSize(12);
        checkBox->setFont(font3);
        checkBox->setCursor(QCursor(Qt::PointingHandCursor));
        closeBtn = new QToolButton(containerWidget);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));
        closeBtn->setGeometry(QRect(594, 29, 9, 9));
        closeBtn->setCursor(QCursor(Qt::PointingHandCursor));
        closeBtn->setFocusPolicy(Qt::NoFocus);

        retranslateUi(ConsoleDialog);

        QMetaObject::connectSlotsByName(ConsoleDialog);
    } // setupUi

    void retranslateUi(QDialog *ConsoleDialog)
    {
        ConsoleDialog->setWindowTitle(QApplication::translate("ConsoleDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("ConsoleDialog", "Console", Q_NULLPTR));
        label_2->setText(QApplication::translate("ConsoleDialog", "Input contract code, then press 'Enter'.", Q_NULLPTR));
        checkBox->setText(QApplication::translate("ConsoleDialog", "RPC", Q_NULLPTR));
        closeBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ConsoleDialog: public Ui_ConsoleDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSOLEDIALOG_H
