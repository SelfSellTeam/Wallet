/********************************************************************************
** Form generated from reading UI file 'remarkcellwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMARKCELLWIDGET_H
#define UI_REMARKCELLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RemarkCellWidget
{
public:
    QLabel *label;

    void setupUi(QWidget *RemarkCellWidget)
    {
        if (RemarkCellWidget->objectName().isEmpty())
            RemarkCellWidget->setObjectName(QStringLiteral("RemarkCellWidget"));
        RemarkCellWidget->resize(120, 57);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        RemarkCellWidget->setFont(font);
        label = new QLabel(RemarkCellWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 120, 57));

        retranslateUi(RemarkCellWidget);

        QMetaObject::connectSlotsByName(RemarkCellWidget);
    } // setupUi

    void retranslateUi(QWidget *RemarkCellWidget)
    {
        RemarkCellWidget->setWindowTitle(QApplication::translate("RemarkCellWidget", "Form", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RemarkCellWidget: public Ui_RemarkCellWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMARKCELLWIDGET_H
