/********************************************************************************
** Form generated from reading UI file 'singlecontactwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SINGLECONTACTWIDGET_H
#define UI_SINGLECONTACTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SingleContactWidget
{
public:
    QLabel *addressLabel2;
    QLabel *remarkLabel2;
    QToolButton *deleteBtn;
    QLabel *addressLabel;
    QLabel *remarkLabel;
    QToolButton *transferBtn;
    QToolButton *editBtn;

    void setupUi(QWidget *SingleContactWidget)
    {
        if (SingleContactWidget->objectName().isEmpty())
            SingleContactWidget->setObjectName(QStringLiteral("SingleContactWidget"));
        SingleContactWidget->resize(765, 70);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        SingleContactWidget->setFont(font);
        addressLabel2 = new QLabel(SingleContactWidget);
        addressLabel2->setObjectName(QStringLiteral("addressLabel2"));
        addressLabel2->setGeometry(QRect(0, 40, 150, 12));
        addressLabel2->setFont(font);
        addressLabel2->setStyleSheet(QStringLiteral("color: rgb(177, 177, 177);"));
        addressLabel2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        remarkLabel2 = new QLabel(SingleContactWidget);
        remarkLabel2->setObjectName(QStringLiteral("remarkLabel2"));
        remarkLabel2->setGeometry(QRect(0, 17, 100, 12));
        remarkLabel2->setFont(font);
        remarkLabel2->setStyleSheet(QStringLiteral("color: rgb(177, 177, 177);"));
        remarkLabel2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        deleteBtn = new QToolButton(SingleContactWidget);
        deleteBtn->setObjectName(QStringLiteral("deleteBtn"));
        deleteBtn->setGeometry(QRect(725, 30, 9, 9));
        deleteBtn->setCursor(QCursor(Qt::PointingHandCursor));
        deleteBtn->setFocusPolicy(Qt::NoFocus);
        addressLabel = new QLabel(SingleContactWidget);
        addressLabel->setObjectName(QStringLiteral("addressLabel"));
        addressLabel->setGeometry(QRect(150, 38, 71, 16));
        addressLabel->setTextInteractionFlags(Qt::NoTextInteraction);
        remarkLabel = new QLabel(SingleContactWidget);
        remarkLabel->setObjectName(QStringLiteral("remarkLabel"));
        remarkLabel->setGeometry(QRect(150, 16, 61, 16));
        remarkLabel->setFont(font);
        remarkLabel->setStyleSheet(QStringLiteral("color: rgb(0, 154, 0);"));
        remarkLabel->setTextInteractionFlags(Qt::NoTextInteraction);
        transferBtn = new QToolButton(SingleContactWidget);
        transferBtn->setObjectName(QStringLiteral("transferBtn"));
        transferBtn->setGeometry(QRect(603, 28, 41, 13));
        transferBtn->setCursor(QCursor(Qt::PointingHandCursor));
        transferBtn->setFocusPolicy(Qt::NoFocus);
        editBtn = new QToolButton(SingleContactWidget);
        editBtn->setObjectName(QStringLiteral("editBtn"));
        editBtn->setGeometry(QRect(187, 18, 13, 13));
        editBtn->setCursor(QCursor(Qt::PointingHandCursor));
        editBtn->setFocusPolicy(Qt::NoFocus);

        retranslateUi(SingleContactWidget);

        QMetaObject::connectSlotsByName(SingleContactWidget);
    } // setupUi

    void retranslateUi(QWidget *SingleContactWidget)
    {
        SingleContactWidget->setWindowTitle(QApplication::translate("SingleContactWidget", "Form", Q_NULLPTR));
        addressLabel2->setText(QApplication::translate("SingleContactWidget", "Address/Register account", Q_NULLPTR));
        remarkLabel2->setText(QApplication::translate("SingleContactWidget", "Remark name", Q_NULLPTR));
        deleteBtn->setText(QString());
        addressLabel->setText(QApplication::translate("SingleContactWidget", "TextLabel", Q_NULLPTR));
        remarkLabel->setText(QApplication::translate("SingleContactWidget", "TextLabel", Q_NULLPTR));
        transferBtn->setText(QString());
        editBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SingleContactWidget: public Ui_SingleContactWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SINGLECONTACTWIDGET_H
