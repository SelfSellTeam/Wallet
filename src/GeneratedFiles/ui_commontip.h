/********************************************************************************
** Form generated from reading UI file 'commontip.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMONTIP_H
#define UI_COMMONTIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_CommonTip
{
public:
    QLabel *label;

    void setupUi(QDialog *CommonTip)
    {
        if (CommonTip->objectName().isEmpty())
            CommonTip->setObjectName(QStringLiteral("CommonTip"));
        CommonTip->resize(338, 167);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        CommonTip->setFont(font);
        label = new QLabel(CommonTip);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 50, 71, 21));
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("background-color: rgb(238,238,238);"));

        retranslateUi(CommonTip);

        QMetaObject::connectSlotsByName(CommonTip);
    } // setupUi

    void retranslateUi(QDialog *CommonTip)
    {
        CommonTip->setWindowTitle(QApplication::translate("CommonTip", "Dialog", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CommonTip: public Ui_CommonTip {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMONTIP_H
