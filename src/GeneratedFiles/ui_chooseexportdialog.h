/********************************************************************************
** Form generated from reading UI file 'chooseexportdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEEXPORTDIALOG_H
#define UI_CHOOSEEXPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChooseExportDialog
{
public:
    QWidget *widget;
    QPushButton *notUpgradeBtn;
    QPushButton *delegateBtn;
    QPushButton *upgradeBtn;

    void setupUi(QWidget *ChooseExportDialog)
    {
        if (ChooseExportDialog->objectName().isEmpty())
            ChooseExportDialog->setObjectName(QStringLiteral("ChooseExportDialog"));
        ChooseExportDialog->resize(960, 580);
        widget = new QWidget(ChooseExportDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 960, 580));
        notUpgradeBtn = new QPushButton(widget);
        notUpgradeBtn->setObjectName(QStringLiteral("notUpgradeBtn"));
        notUpgradeBtn->setGeometry(QRect(370, 318, 220, 60));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        notUpgradeBtn->setFont(font);
        notUpgradeBtn->setCursor(QCursor(Qt::PointingHandCursor));
        delegateBtn = new QPushButton(widget);
        delegateBtn->setObjectName(QStringLiteral("delegateBtn"));
        delegateBtn->setGeometry(QRect(370, 259, 220, 60));
        QFont font1;
        font1.setPointSize(10);
        delegateBtn->setFont(font1);
        delegateBtn->setCursor(QCursor(Qt::PointingHandCursor));
        upgradeBtn = new QPushButton(widget);
        upgradeBtn->setObjectName(QStringLiteral("upgradeBtn"));
        upgradeBtn->setGeometry(QRect(370, 200, 220, 60));
        upgradeBtn->setFont(font);
        upgradeBtn->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(ChooseExportDialog);

        QMetaObject::connectSlotsByName(ChooseExportDialog);
    } // setupUi

    void retranslateUi(QWidget *ChooseExportDialog)
    {
        ChooseExportDialog->setWindowTitle(QApplication::translate("ChooseExportDialog", "Form", Q_NULLPTR));
        notUpgradeBtn->setText(QApplication::translate("ChooseExportDialog", "Cancel export", Q_NULLPTR));
        delegateBtn->setText(QApplication::translate("ChooseExportDialog", "Encrypted export", Q_NULLPTR));
        upgradeBtn->setText(QApplication::translate("ChooseExportDialog", "Common export", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ChooseExportDialog: public Ui_ChooseExportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEEXPORTDIALOG_H
