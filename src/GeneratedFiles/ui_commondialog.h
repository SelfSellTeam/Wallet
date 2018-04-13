/********************************************************************************
** Form generated from reading UI file 'commondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMONDIALOG_H
#define UI_COMMONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CommonDialog
{
public:
    QWidget *widget;
    QWidget *containerWidget;
    QLabel *textLabel;
    QToolButton *okBtn;
    QToolButton *cancelBtn;
    QCheckBox *checkBox;

    void setupUi(QDialog *CommonDialog)
    {
        if (CommonDialog->objectName().isEmpty())
            CommonDialog->setObjectName(QStringLiteral("CommonDialog"));
        CommonDialog->resize(960, 580);
        widget = new QWidget(CommonDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 960, 580));
        containerWidget = new QWidget(widget);
        containerWidget->setObjectName(QStringLiteral("containerWidget"));
        containerWidget->setGeometry(QRect(317, 205, 325, 170));
        textLabel = new QLabel(containerWidget);
        textLabel->setObjectName(QStringLiteral("textLabel"));
        textLabel->setGeometry(QRect(40, -10, 250, 94));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        textLabel->setFont(font);
        textLabel->setStyleSheet(QStringLiteral("color: rgb(53, 53, 53);"));
        textLabel->setAlignment(Qt::AlignCenter);
        textLabel->setWordWrap(true);
        okBtn = new QToolButton(containerWidget);
        okBtn->setObjectName(QStringLiteral("okBtn"));
        okBtn->setGeometry(QRect(35, 96, 120, 36));
        okBtn->setFont(font);
        okBtn->setCursor(QCursor(Qt::PointingHandCursor));
        cancelBtn = new QToolButton(containerWidget);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(171, 96, 120, 36));
        cancelBtn->setFont(font);
        cancelBtn->setCursor(QCursor(Qt::PointingHandCursor));
        checkBox = new QCheckBox(containerWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(80, 50, 201, 31));
        checkBox->setFocusPolicy(Qt::NoFocus);

        retranslateUi(CommonDialog);

        QMetaObject::connectSlotsByName(CommonDialog);
    } // setupUi

    void retranslateUi(QDialog *CommonDialog)
    {
        CommonDialog->setWindowTitle(QApplication::translate("CommonDialog", "Dialog", Q_NULLPTR));
        textLabel->setText(QApplication::translate("CommonDialog", "Do you add that address to a contact?", Q_NULLPTR));
        okBtn->setText(QString());
        cancelBtn->setText(QString());
        checkBox->setText(QApplication::translate("CommonDialog", "I know that no more tips", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CommonDialog: public Ui_CommonDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMONDIALOG_H
