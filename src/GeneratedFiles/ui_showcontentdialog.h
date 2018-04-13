/********************************************************************************
** Form generated from reading UI file 'showcontentdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWCONTENTDIALOG_H
#define UI_SHOWCONTENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_ShowContentDialog
{
public:
    QLabel *textLabel;
    QToolButton *copyBtn;

    void setupUi(QDialog *ShowContentDialog)
    {
        if (ShowContentDialog->objectName().isEmpty())
            ShowContentDialog->setObjectName(QStringLiteral("ShowContentDialog"));
        ShowContentDialog->resize(400, 40);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        ShowContentDialog->setFont(font);
        textLabel = new QLabel(ShowContentDialog);
        textLabel->setObjectName(QStringLiteral("textLabel"));
        textLabel->setGeometry(QRect(1, 1, 111, 18));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setBold(false);
        font1.setWeight(50);
        textLabel->setFont(font1);
        textLabel->setTextInteractionFlags(Qt::TextSelectableByMouse);
        copyBtn = new QToolButton(ShowContentDialog);
        copyBtn->setObjectName(QStringLiteral("copyBtn"));
        copyBtn->setGeometry(QRect(150, 0, 11, 13));
        copyBtn->setCursor(QCursor(Qt::PointingHandCursor));
        copyBtn->setFocusPolicy(Qt::NoFocus);

        retranslateUi(ShowContentDialog);

        QMetaObject::connectSlotsByName(ShowContentDialog);
    } // setupUi

    void retranslateUi(QDialog *ShowContentDialog)
    {
        ShowContentDialog->setWindowTitle(QApplication::translate("ShowContentDialog", "Dialog", Q_NULLPTR));
        textLabel->setText(QString());
        copyBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ShowContentDialog: public Ui_ShowContentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWCONTENTDIALOG_H
