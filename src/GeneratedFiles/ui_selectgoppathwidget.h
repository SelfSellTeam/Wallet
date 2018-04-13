/********************************************************************************
** Form generated from reading UI file 'selectgoppathwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTGOPPATHWIDGET_H
#define UI_SELECTGOPPATHWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectGopPathWidget
{
public:
    QPushButton *selectPathBtn;
    QLineEdit *pathLineEdit;
    QLabel *label;
    QPushButton *okBtn;
    QToolButton *closeBtn;
    QToolButton *minBtn;
    QLabel *textLabel;
    QLabel *versionLabel_2;
    QLabel *versionLabel;
    QLabel *logoLabel;

    void setupUi(QWidget *SelectGopPathWidget)
    {
        if (SelectGopPathWidget->objectName().isEmpty())
            SelectGopPathWidget->setObjectName(QStringLiteral("SelectGopPathWidget"));
        SelectGopPathWidget->resize(960, 580);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        SelectGopPathWidget->setFont(font);
        selectPathBtn = new QPushButton(SelectGopPathWidget);
        selectPathBtn->setObjectName(QStringLiteral("selectPathBtn"));
        selectPathBtn->setGeometry(QRect(605, 316, 80, 25));
        selectPathBtn->setFont(font);
        selectPathBtn->setCursor(QCursor(Qt::PointingHandCursor));
        selectPathBtn->setStyleSheet(QLatin1String("QPushButton{border:none;\n"
"border-radius:3px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(53, 53, 53);\n"
"}\n"
"QPushButton::hover{color: rgb(153, 153, 153);}"));
        pathLineEdit = new QLineEdit(SelectGopPathWidget);
        pathLineEdit->setObjectName(QStringLiteral("pathLineEdit"));
        pathLineEdit->setGeometry(QRect(368, 314, 227, 29));
        QFont font1;
        font1.setPointSize(10);
        pathLineEdit->setFont(font1);
        pathLineEdit->setReadOnly(true);
        label = new QLabel(SelectGopPathWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(368, 294, 100, 20));
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        okBtn = new QPushButton(SelectGopPathWidget);
        okBtn->setObjectName(QStringLiteral("okBtn"));
        okBtn->setGeometry(QRect(368, 376, 227, 24));
        okBtn->setFont(font);
        okBtn->setCursor(QCursor(Qt::PointingHandCursor));
        okBtn->setStyleSheet(QLatin1String("QPushButton{border:none;\n"
"border-radius:3px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(53, 53, 53);\n"
"}\n"
"QPushButton::hover{color: rgb(153, 153, 153);}"));
        closeBtn = new QToolButton(SelectGopPathWidget);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));
        closeBtn->setGeometry(QRect(938, 10, 14, 14));
        closeBtn->setCursor(QCursor(Qt::PointingHandCursor));
        closeBtn->setFocusPolicy(Qt::NoFocus);
        minBtn = new QToolButton(SelectGopPathWidget);
        minBtn->setObjectName(QStringLiteral("minBtn"));
        minBtn->setGeometry(QRect(916, 10, 14, 14));
        minBtn->setCursor(QCursor(Qt::PointingHandCursor));
        minBtn->setFocusPolicy(Qt::NoFocus);
        textLabel = new QLabel(SelectGopPathWidget);
        textLabel->setObjectName(QStringLiteral("textLabel"));
        textLabel->setGeometry(QRect(381, 205, 197, 29));
        versionLabel_2 = new QLabel(SelectGopPathWidget);
        versionLabel_2->setObjectName(QStringLiteral("versionLabel_2"));
        versionLabel_2->setGeometry(QRect(12, 10, 91, 16));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(10);
        versionLabel_2->setFont(font2);
        versionLabel_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        versionLabel = new QLabel(SelectGopPathWidget);
        versionLabel->setObjectName(QStringLiteral("versionLabel"));
        versionLabel->setGeometry(QRect(108, 12, 81, 14));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(9);
        versionLabel->setFont(font3);
        versionLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        logoLabel = new QLabel(SelectGopPathWidget);
        logoLabel->setObjectName(QStringLiteral("logoLabel"));
        logoLabel->setGeometry(QRect(380, 120, 231, 112));
        QFont font4;
        font4.setFamily(QStringLiteral("Agency FB"));
        font4.setPointSize(26);
        font4.setBold(true);
        font4.setWeight(75);
        logoLabel->setFont(font4);

        retranslateUi(SelectGopPathWidget);

        QMetaObject::connectSlotsByName(SelectGopPathWidget);
    } // setupUi

    void retranslateUi(QWidget *SelectGopPathWidget)
    {
        SelectGopPathWidget->setWindowTitle(QApplication::translate("SelectGopPathWidget", "Form", Q_NULLPTR));
        selectPathBtn->setText(QApplication::translate("SelectGopPathWidget", "Choose", Q_NULLPTR));
        label->setText(QApplication::translate("SelectGopPathWidget", "Local data path:", Q_NULLPTR));
        okBtn->setText(QApplication::translate("SelectGopPathWidget", "Next", Q_NULLPTR));
        closeBtn->setText(QString());
        minBtn->setText(QString());
        textLabel->setText(QString());
        versionLabel_2->setText(QApplication::translate("SelectGopPathWidget", "SelfSell Wallet", Q_NULLPTR));
        versionLabel->setText(QApplication::translate("SelectGopPathWidget", "Ver.1.0.0", Q_NULLPTR));
        logoLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SelectGopPathWidget: public Ui_SelectGopPathWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTGOPPATHWIDGET_H
