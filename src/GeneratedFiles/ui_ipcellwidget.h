/********************************************************************************
** Form generated from reading UI file 'ipcellwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IPCELLWIDGET_H
#define UI_IPCELLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IpCellWidget
{
public:
    QLabel *ipLabel;
    QToolButton *nodeSetBtn;

    void setupUi(QWidget *IpCellWidget)
    {
        if (IpCellWidget->objectName().isEmpty())
            IpCellWidget->setObjectName(QStringLiteral("IpCellWidget"));
        IpCellWidget->resize(170, 37);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        IpCellWidget->setFont(font);
        ipLabel = new QLabel(IpCellWidget);
        ipLabel->setObjectName(QStringLiteral("ipLabel"));
        ipLabel->setGeometry(QRect(0, 10, 54, 16));
        nodeSetBtn = new QToolButton(IpCellWidget);
        nodeSetBtn->setObjectName(QStringLiteral("nodeSetBtn"));
        nodeSetBtn->setGeometry(QRect(80, 13, 8, 10));
        nodeSetBtn->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(IpCellWidget);

        QMetaObject::connectSlotsByName(IpCellWidget);
    } // setupUi

    void retranslateUi(QWidget *IpCellWidget)
    {
        IpCellWidget->setWindowTitle(QApplication::translate("IpCellWidget", "Form", Q_NULLPTR));
        ipLabel->setText(QApplication::translate("IpCellWidget", "0.0.0.0", Q_NULLPTR));
        nodeSetBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class IpCellWidget: public Ui_IpCellWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IPCELLWIDGET_H
