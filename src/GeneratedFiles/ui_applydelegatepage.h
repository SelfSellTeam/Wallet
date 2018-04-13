/********************************************************************************
** Form generated from reading UI file 'applydelegatepage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLYDELEGATEPAGE_H
#define UI_APPLYDELEGATEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ApplyDelegatePage
{
public:
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *tipLabel;
    QComboBox *accountComboBox;
    QLabel *addressLabel;
    QLabel *balanceLabel;
    QToolButton *upgradeBtn;
    QLabel *label_4;
    QLabel *label;
    QLabel *wrongLabel;
    QLabel *correctLabel;
    QLineEdit *addressNameLineEdit;
    QLabel *label_6;
    QLabel *tipLabel2;
    QLabel *wrongLabel2;

    void setupUi(QWidget *ApplyDelegatePage)
    {
        if (ApplyDelegatePage->objectName().isEmpty())
            ApplyDelegatePage->setObjectName(QStringLiteral("ApplyDelegatePage"));
        ApplyDelegatePage->resize(827, 525);
        label_9 = new QLabel(ApplyDelegatePage);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 27, 215, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        label_9->setFont(font);
        label_8 = new QLabel(ApplyDelegatePage);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(240, 28, 500, 71));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        label_8->setFont(font1);
        label_8->setStyleSheet(QStringLiteral("color: rgb(127, 127, 127);"));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_7 = new QLabel(ApplyDelegatePage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 150, 150, 24));
        label_7->setFont(font1);
        label_7->setStyleSheet(QStringLiteral("color: rgb(40,40,40);"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(ApplyDelegatePage);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 190, 150, 24));
        label_5->setFont(font1);
        label_5->setStyleSheet(QStringLiteral("color: rgb(40,40,40);"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(ApplyDelegatePage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 230, 120, 24));
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral("color: rgb(40,40,40);"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        tipLabel = new QLabel(ApplyDelegatePage);
        tipLabel->setObjectName(QStringLiteral("tipLabel"));
        tipLabel->setGeometry(QRect(330, 150, 200, 24));
        tipLabel->setStyleSheet(QStringLiteral("color: rgb(255, 96, 82);"));
        accountComboBox = new QComboBox(ApplyDelegatePage);
        accountComboBox->setObjectName(QStringLiteral("accountComboBox"));
        accountComboBox->setGeometry(QRect(177, 150, 120, 24));
        addressLabel = new QLabel(ApplyDelegatePage);
        addressLabel->setObjectName(QStringLiteral("addressLabel"));
        addressLabel->setGeometry(QRect(180, 190, 520, 24));
        addressLabel->setFont(font1);
        addressLabel->setStyleSheet(QStringLiteral("color: rgb(134, 134, 134);"));
        addressLabel->setText(QStringLiteral("GOPSSDDSWEXsdfsdffdfdfd"));
        balanceLabel = new QLabel(ApplyDelegatePage);
        balanceLabel->setObjectName(QStringLiteral("balanceLabel"));
        balanceLabel->setGeometry(QRect(180, 230, 221, 24));
        balanceLabel->setFont(font1);
        balanceLabel->setStyleSheet(QStringLiteral("color: rgb(90, 119, 197);"));
        balanceLabel->setText(QStringLiteral("0 GOP"));
        upgradeBtn = new QToolButton(ApplyDelegatePage);
        upgradeBtn->setObjectName(QStringLiteral("upgradeBtn"));
        upgradeBtn->setGeometry(QRect(180, 440, 120, 36));
        QFont font2;
        upgradeBtn->setFont(font2);
        upgradeBtn->setCursor(QCursor(Qt::PointingHandCursor));
        upgradeBtn->setStyleSheet(QLatin1String("QToolButton{background-color:#469cfc;color:#ffffff;border:0px solid rgb(64,153,255);border-radius:3px;}\n"
"QToolButton:hover{background-color:#62a9f8;}\n"
"QToolButton:disabled{background-color:#cecece;}"));
        label_4 = new QLabel(ApplyDelegatePage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(180, 270, 371, 24));
        label_4->setFont(font1);
        label_4->setStyleSheet(QStringLiteral(""));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label = new QLabel(ApplyDelegatePage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 295, 321, 24));
        label->setStyleSheet(QStringLiteral("color: rgb(134, 134, 134);"));
        wrongLabel = new QLabel(ApplyDelegatePage);
        wrongLabel->setObjectName(QStringLiteral("wrongLabel"));
        wrongLabel->setGeometry(QRect(460, 343, 300, 24));
        wrongLabel->setStyleSheet(QStringLiteral("color: rgb(255, 96, 82);"));
        correctLabel = new QLabel(ApplyDelegatePage);
        correctLabel->setObjectName(QStringLiteral("correctLabel"));
        correctLabel->setGeometry(QRect(460, 343, 350, 24));
        correctLabel->setStyleSheet(QStringLiteral("color: rgb(103,182,103);"));
        addressNameLineEdit = new QLineEdit(ApplyDelegatePage);
        addressNameLineEdit->setObjectName(QStringLiteral("addressNameLineEdit"));
        addressNameLineEdit->setGeometry(QRect(180, 340, 250, 30));
        addressNameLineEdit->setFont(font1);
        addressNameLineEdit->setContextMenuPolicy(Qt::DefaultContextMenu);
        label_6 = new QLabel(ApplyDelegatePage);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(60, 343, 90, 24));
        label_6->setFont(font1);
        label_6->setStyleSheet(QStringLiteral("color: rgb(40,40,40);"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        tipLabel2 = new QLabel(ApplyDelegatePage);
        tipLabel2->setObjectName(QStringLiteral("tipLabel2"));
        tipLabel2->setGeometry(QRect(187, 376, 600, 41));
        tipLabel2->setFont(font2);
        tipLabel2->setStyleSheet(QStringLiteral("color: rgb(134, 134, 134);"));
        wrongLabel2 = new QLabel(ApplyDelegatePage);
        wrongLabel2->setObjectName(QStringLiteral("wrongLabel2"));
        wrongLabel2->setGeometry(QRect(460, 343, 200, 24));
        wrongLabel2->setStyleSheet(QStringLiteral("color: rgb(255, 96, 82);"));

        retranslateUi(ApplyDelegatePage);

        QMetaObject::connectSlotsByName(ApplyDelegatePage);
    } // setupUi

    void retranslateUi(QWidget *ApplyDelegatePage)
    {
        ApplyDelegatePage->setWindowTitle(QApplication::translate("ApplyDelegatePage", "Form", Q_NULLPTR));
        label_9->setText(QApplication::translate("ApplyDelegatePage", "Proxy account upgrade", Q_NULLPTR));
        label_8->setText(QApplication::translate("ApplyDelegatePage", "After upgrading to an agent account, you not only have the function of a registered \n"
"user, but also have the right to vote;  n and when your ranking into the top 99, you \n"
"will get the right to block.", Q_NULLPTR));
        label_7->setText(QApplication::translate("ApplyDelegatePage", "To be upgraded account", Q_NULLPTR));
        label_5->setText(QApplication::translate("ApplyDelegatePage", "To be upgraded address", Q_NULLPTR));
        label_3->setText(QApplication::translate("ApplyDelegatePage", "Account balance", Q_NULLPTR));
        tipLabel->setText(QApplication::translate("ApplyDelegatePage", "Insufficient balance", Q_NULLPTR));
        upgradeBtn->setText(QApplication::translate("ApplyDelegatePage", "Upgrade", Q_NULLPTR));
        label_4->setText(QApplication::translate("ApplyDelegatePage", "<html><head/><body><p><span style=\" font-weight:600; color:#282828;\">Account need </span><span style=\" font-weight:600; color:#ff503f;\">1221.83GOP </span><span style=\" font-weight:600; color:#282828;\">balance to upgrade</span></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("ApplyDelegatePage", "Actual cost is 1221.828181\357\274\210Include 0.01 fee\357\274\211", Q_NULLPTR));
        wrongLabel->setText(QApplication::translate("ApplyDelegatePage", "The account has been used, please choose another.", Q_NULLPTR));
        correctLabel->setText(QApplication::translate("ApplyDelegatePage", "Account is available, once set, we cant change it.", Q_NULLPTR));
        label_6->setText(QApplication::translate("ApplyDelegatePage", "Upgrade account", Q_NULLPTR));
        tipLabel2->setText(QApplication::translate("ApplyDelegatePage", "Only lowercase letters and numbers are allowed and must begin with lowercase, This account will be\n"
"permanently registered on the Goopal block and can not be deleted and modified.", Q_NULLPTR));
        wrongLabel2->setText(QApplication::translate("ApplyDelegatePage", "More than 63 characters", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ApplyDelegatePage: public Ui_ApplyDelegatePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLYDELEGATEPAGE_H
