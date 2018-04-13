/********************************************************************************
** Form generated from reading UI file 'upgradepage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPGRADEPAGE_H
#define UI_UPGRADEPAGE_H

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

class Ui_UpgradePage
{
public:
    QLabel *addressLabel;
    QLabel *label_3;
    QToolButton *upgradeBtn;
    QLineEdit *addressNameLineEdit;
    QLabel *label_6;
    QLabel *label_5;
    QComboBox *accountComboBox;
    QLabel *label_10;
    QLabel *balanceLabel;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *tipLabel;
    QLabel *tipLabel2;
    QLabel *label_4;
    QLabel *correctLabel;
    QLabel *wrongLabel;
    QLabel *wrongLabel2;

    void setupUi(QWidget *UpgradePage)
    {
        if (UpgradePage->objectName().isEmpty())
            UpgradePage->setObjectName(QStringLiteral("UpgradePage"));
        UpgradePage->resize(827, 525);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        UpgradePage->setFont(font);
        UpgradePage->setStyleSheet(QStringLiteral(""));
        addressLabel = new QLabel(UpgradePage);
        addressLabel->setObjectName(QStringLiteral("addressLabel"));
        addressLabel->setGeometry(QRect(180, 180, 520, 24));
        addressLabel->setFont(font);
        addressLabel->setStyleSheet(QStringLiteral("color: rgb(134, 134, 134);"));
        addressLabel->setText(QStringLiteral("GOPXXXXXXXXXXXX"));
        label_3 = new QLabel(UpgradePage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 220, 100, 24));
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("color: rgb(40,40,40);"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        upgradeBtn = new QToolButton(UpgradePage);
        upgradeBtn->setObjectName(QStringLiteral("upgradeBtn"));
        upgradeBtn->setGeometry(QRect(180, 395, 120, 36));
        QFont font1;
        upgradeBtn->setFont(font1);
        upgradeBtn->setCursor(QCursor(Qt::PointingHandCursor));
        upgradeBtn->setStyleSheet(QLatin1String("QToolButton{background-color:#469cfc;color:#ffffff;border:0px solid rgb(64,153,255);border-radius:3px;}\n"
"QToolButton:hover{background-color:#62a9f8;}\n"
"QToolButton:disabled{background-color:#cecece;}"));
        addressNameLineEdit = new QLineEdit(UpgradePage);
        addressNameLineEdit->setObjectName(QStringLiteral("addressNameLineEdit"));
        addressNameLineEdit->setGeometry(QRect(180, 260, 250, 30));
        addressNameLineEdit->setFont(font);
        addressNameLineEdit->setContextMenuPolicy(Qt::DefaultContextMenu);
        label_6 = new QLabel(UpgradePage);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 263, 150, 24));
        label_6->setFont(font);
        label_6->setStyleSheet(QStringLiteral("color: rgb(40,40,40);"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(UpgradePage);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 180, 150, 24));
        label_5->setFont(font);
        label_5->setStyleSheet(QStringLiteral("color: rgb(40,40,40);"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        accountComboBox = new QComboBox(UpgradePage);
        accountComboBox->setObjectName(QStringLiteral("accountComboBox"));
        accountComboBox->setGeometry(QRect(177, 140, 120, 24));
        label_10 = new QLabel(UpgradePage);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(15, 35, 260, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(14);
        label_10->setFont(font2);
        balanceLabel = new QLabel(UpgradePage);
        balanceLabel->setObjectName(QStringLiteral("balanceLabel"));
        balanceLabel->setGeometry(QRect(177, 220, 221, 24));
        balanceLabel->setFont(font);
        balanceLabel->setStyleSheet(QStringLiteral("color: rgb(90, 119, 197);"));
        balanceLabel->setText(QStringLiteral("0 GOP"));
        label_7 = new QLabel(UpgradePage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 140, 150, 24));
        label_7->setFont(font);
        label_7->setStyleSheet(QStringLiteral("color: rgb(40,40,40);"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_8 = new QLabel(UpgradePage);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(178, 80, 600, 40));
        label_8->setFont(font);
        label_8->setStyleSheet(QStringLiteral("color: rgb(127, 127, 127);"));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        tipLabel = new QLabel(UpgradePage);
        tipLabel->setObjectName(QStringLiteral("tipLabel"));
        tipLabel->setGeometry(QRect(330, 140, 200, 24));
        tipLabel->setStyleSheet(QStringLiteral("color: rgb(255, 96, 82);"));
        tipLabel2 = new QLabel(UpgradePage);
        tipLabel2->setObjectName(QStringLiteral("tipLabel2"));
        tipLabel2->setGeometry(QRect(187, 296, 600, 41));
        tipLabel2->setFont(font1);
        tipLabel2->setStyleSheet(QStringLiteral("color: rgb(171,171,171);"));
        label_4 = new QLabel(UpgradePage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(180, 366, 371, 24));
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral(""));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        correctLabel = new QLabel(UpgradePage);
        correctLabel->setObjectName(QStringLiteral("correctLabel"));
        correctLabel->setGeometry(QRect(460, 263, 350, 24));
        correctLabel->setStyleSheet(QStringLiteral("color: rgb(103,182,103);"));
        wrongLabel = new QLabel(UpgradePage);
        wrongLabel->setObjectName(QStringLiteral("wrongLabel"));
        wrongLabel->setGeometry(QRect(460, 263, 340, 24));
        wrongLabel->setStyleSheet(QStringLiteral("color: rgb(255, 96, 82);"));
        wrongLabel2 = new QLabel(UpgradePage);
        wrongLabel2->setObjectName(QStringLiteral("wrongLabel2"));
        wrongLabel2->setGeometry(QRect(460, 263, 200, 24));
        wrongLabel2->setStyleSheet(QStringLiteral("color: rgb(255, 96, 82);"));

        retranslateUi(UpgradePage);

        QMetaObject::connectSlotsByName(UpgradePage);
    } // setupUi

    void retranslateUi(QWidget *UpgradePage)
    {
        UpgradePage->setWindowTitle(QApplication::translate("UpgradePage", "Form", Q_NULLPTR));
        label_3->setText(QApplication::translate("UpgradePage", "Account balance", Q_NULLPTR));
        upgradeBtn->setText(QApplication::translate("UpgradePage", "Upgrade", Q_NULLPTR));
        label_6->setText(QApplication::translate("UpgradePage", "Upgrade account name", Q_NULLPTR));
        label_5->setText(QApplication::translate("UpgradePage", "To be upgraded address", Q_NULLPTR));
        label_10->setText(QApplication::translate("UpgradePage", "Registered account upgrade", Q_NULLPTR));
        label_7->setText(QApplication::translate("UpgradePage", "To be upgraded account", Q_NULLPTR));
        label_8->setText(QApplication::translate("UpgradePage", "After upgrading to a registered account, the account name will be registered in the block chain,\n"
" support the use of account name directly to the transaction", Q_NULLPTR));
        tipLabel->setText(QApplication::translate("UpgradePage", "Insufficient balance", Q_NULLPTR));
        tipLabel2->setText(QApplication::translate("UpgradePage", "Only lowercase letters and numbers are allowed, and must be written in lowercase. This account \n"
"name will be permanently registered on the Goopal block and can not be deleted and modified", Q_NULLPTR));
        label_4->setText(QApplication::translate("UpgradePage", "<html><head/><body><p><span style=\" font-weight:600; color:#282828;\">Need to pay </span><span style=\" font-weight:600; color:#ff503f;\">0.01GOP </span><span style=\" font-weight:600; color:#282828;\">for the upgrade</span></p></body></html>", Q_NULLPTR));
        correctLabel->setText(QApplication::translate("UpgradePage", "The account name is available once the settings can not be changed", Q_NULLPTR));
        wrongLabel->setText(QApplication::translate("UpgradePage", "The account name has been used, please change another", Q_NULLPTR));
        wrongLabel2->setText(QApplication::translate("UpgradePage", "More than 63 characters", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UpgradePage: public Ui_UpgradePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPGRADEPAGE_H
