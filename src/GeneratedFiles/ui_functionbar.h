/********************************************************************************
** Form generated from reading UI file 'functionbar.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCTIONBAR_H
#define UI_FUNCTIONBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FunctionBar
{
public:
    QToolButton *surveyBtn;
    QToolButton *accountBtn;
    QToolButton *transferBtn;
    QToolButton *delegateBtn;
    QToolButton *contactBtn;
    QLabel *activeLabel;
    QLabel *versionLabel_2;
    QLabel *logoLabel;
    QComboBox *assertComboBox;

    void setupUi(QWidget *FunctionBar)
    {
        if (FunctionBar->objectName().isEmpty())
            FunctionBar->setObjectName(QStringLiteral("FunctionBar"));
        FunctionBar->resize(133, 545);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FunctionBar->sizePolicy().hasHeightForWidth());
        FunctionBar->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        FunctionBar->setFont(font);
        FunctionBar->setStyleSheet(QStringLiteral(""));
        surveyBtn = new QToolButton(FunctionBar);
        surveyBtn->setObjectName(QStringLiteral("surveyBtn"));
        surveyBtn->setGeometry(QRect(20, 70, 92, 63));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        surveyBtn->setFont(font1);
        surveyBtn->setCursor(QCursor(Qt::PointingHandCursor));
        surveyBtn->setFocusPolicy(Qt::NoFocus);
        surveyBtn->setStyleSheet(QStringLiteral(""));
        accountBtn = new QToolButton(FunctionBar);
        accountBtn->setObjectName(QStringLiteral("accountBtn"));
        accountBtn->setGeometry(QRect(20, 160, 92, 63));
        accountBtn->setFont(font1);
        accountBtn->setCursor(QCursor(Qt::PointingHandCursor));
        accountBtn->setFocusPolicy(Qt::NoFocus);
        transferBtn = new QToolButton(FunctionBar);
        transferBtn->setObjectName(QStringLiteral("transferBtn"));
        transferBtn->setGeometry(QRect(20, 250, 92, 63));
        transferBtn->setFont(font1);
        transferBtn->setCursor(QCursor(Qt::PointingHandCursor));
        transferBtn->setFocusPolicy(Qt::NoFocus);
        delegateBtn = new QToolButton(FunctionBar);
        delegateBtn->setObjectName(QStringLiteral("delegateBtn"));
        delegateBtn->setGeometry(QRect(20, 340, 92, 63));
        delegateBtn->setFont(font1);
        delegateBtn->setCursor(QCursor(Qt::PointingHandCursor));
        delegateBtn->setFocusPolicy(Qt::NoFocus);
        contactBtn = new QToolButton(FunctionBar);
        contactBtn->setObjectName(QStringLiteral("contactBtn"));
        contactBtn->setGeometry(QRect(20, 460, 92, 63));
        contactBtn->setFont(font1);
        contactBtn->setCursor(QCursor(Qt::PointingHandCursor));
        contactBtn->setFocusPolicy(Qt::NoFocus);
        activeLabel = new QLabel(FunctionBar);
        activeLabel->setObjectName(QStringLiteral("activeLabel"));
        activeLabel->setGeometry(QRect(10, 17, 7, 93));
        versionLabel_2 = new QLabel(FunctionBar);
        versionLabel_2->setObjectName(QStringLiteral("versionLabel_2"));
        versionLabel_2->setGeometry(QRect(38, 512, 91, 26));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        versionLabel_2->setFont(font2);
        versionLabel_2->setStyleSheet(QStringLiteral("color: rgb(229,229,229);"));
        logoLabel = new QLabel(FunctionBar);
        logoLabel->setObjectName(QStringLiteral("logoLabel"));
        logoLabel->setGeometry(QRect(7, 515, 25, 16));
        assertComboBox = new QComboBox(FunctionBar);
        assertComboBox->setObjectName(QStringLiteral("assertComboBox"));
        assertComboBox->setGeometry(QRect(40, 20, 51, 26));
        QFont font3;
        font3.setFamily(QStringLiteral("Segoe UI Semibold"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        assertComboBox->setFont(font3);
        assertComboBox->setFocusPolicy(Qt::NoFocus);
        assertComboBox->setAcceptDrops(false);
        assertComboBox->setAutoFillBackground(true);
        assertComboBox->setStyleSheet(QStringLiteral(""));
        assertComboBox->setEditable(false);
        assertComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        assertComboBox->setMinimumContentsLength(0);
        assertComboBox->setModelColumn(0);

        retranslateUi(FunctionBar);

        assertComboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FunctionBar);
    } // setupUi

    void retranslateUi(QWidget *FunctionBar)
    {
        FunctionBar->setWindowTitle(QApplication::translate("FunctionBar", "Form", Q_NULLPTR));
        surveyBtn->setText(QApplication::translate("FunctionBar", "Home", Q_NULLPTR));
        accountBtn->setText(QApplication::translate("FunctionBar", "Bill", Q_NULLPTR));
        transferBtn->setText(QApplication::translate("FunctionBar", "Transaction", Q_NULLPTR));
        delegateBtn->setText(QApplication::translate("FunctionBar", "Develop", Q_NULLPTR));
        contactBtn->setText(QApplication::translate("FunctionBar", "Contactor", Q_NULLPTR));
        activeLabel->setText(QString());
        versionLabel_2->setText(QApplication::translate("FunctionBar", "SelfSell Wallet\n"
"Ver.1.0.0", Q_NULLPTR));
        logoLabel->setText(QString());
        assertComboBox->clear();
        assertComboBox->insertItems(0, QStringList()
         << QApplication::translate("FunctionBar", "SSC", Q_NULLPTR)
        );
        assertComboBox->setCurrentText(QApplication::translate("FunctionBar", "SSC", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FunctionBar: public Ui_FunctionBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCTIONBAR_H
