/********************************************************************************
** Form generated from reading UI file 'incomecellwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INCOMECELLWIDGET_H
#define UI_INCOMECELLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IncomeCellWidget
{
public:
    QLabel *label;

    void setupUi(QWidget *IncomeCellWidget)
    {
        if (IncomeCellWidget->objectName().isEmpty())
            IncomeCellWidget->setObjectName(QStringLiteral("IncomeCellWidget"));
        IncomeCellWidget->resize(120, 65);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        IncomeCellWidget->setFont(font);
        label = new QLabel(IncomeCellWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 120, 65));
        label->setFont(font);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        retranslateUi(IncomeCellWidget);

        QMetaObject::connectSlotsByName(IncomeCellWidget);
    } // setupUi

    void retranslateUi(QWidget *IncomeCellWidget)
    {
        IncomeCellWidget->setWindowTitle(QApplication::translate("IncomeCellWidget", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("IncomeCellWidget", "--", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class IncomeCellWidget: public Ui_IncomeCellWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INCOMECELLWIDGET_H
