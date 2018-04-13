/********************************************************************************
** Form generated from reading UI file 'transferpage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFERPAGE_H
#define UI_TRANSFERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TransferPage
{
public:
    QLabel *balanceLabel;
    QLabel *addressLabel2;
    QLabel *balanceLabel2;
    QLabel *addressLabel;
    QLabel *changeAccountLabel;
    QLabel *messageLabel;
    QLineEdit *messageLineEdit;
    QLabel *sendtoLabel;
    QLabel *amountLabel;
    QToolButton *sendBtn;
    QLineEdit *amountLineEdit;
    QLabel *unitLabel;
    QLabel *feeLabel;
    QLineEdit *feeLineEdit;
    QLabel *unitLabel2;
    QLabel *tipLabel2;
    QLabel *tipLabel3;
    QLabel *tipLabel4;
    QToolButton *addContactBtn;
    QLabel *delegateLabel2;
    QCheckBox *voteCheckBox;
    QLabel *tipLabel5;
    QToolButton *infoBtn;
    QLabel *identityLabel;
    QComboBox *accountComboBox;
    QLineEdit *sendtoLineEdit;
    QLabel *tipLabel6;
    QToolButton *copyBtn;

    void setupUi(QWidget *TransferPage)
    {
        if (TransferPage->objectName().isEmpty())
            TransferPage->setObjectName(QStringLiteral("TransferPage"));
        TransferPage->resize(827, 525);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        TransferPage->setFont(font);
        TransferPage->setFocusPolicy(Qt::TabFocus);
        TransferPage->setStyleSheet(QStringLiteral(""));
        balanceLabel = new QLabel(TransferPage);
        balanceLabel->setObjectName(QStringLiteral("balanceLabel"));
        balanceLabel->setGeometry(QRect(692, 30, 271, 32));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(20);
        balanceLabel->setFont(font1);
        addressLabel2 = new QLabel(TransferPage);
        addressLabel2->setObjectName(QStringLiteral("addressLabel2"));
        addressLabel2->setGeometry(QRect(60, 110, 85, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        addressLabel2->setFont(font2);
        addressLabel2->setStyleSheet(QStringLiteral(""));
        addressLabel2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        balanceLabel2 = new QLabel(TransferPage);
        balanceLabel2->setObjectName(QStringLiteral("balanceLabel2"));
        balanceLabel2->setGeometry(QRect(540, 42, 110, 18));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(13);
        balanceLabel2->setFont(font3);
        balanceLabel2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        addressLabel = new QLabel(TransferPage);
        addressLabel->setObjectName(QStringLiteral("addressLabel"));
        addressLabel->setGeometry(QRect(140, 110, 631, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(12);
        addressLabel->setFont(font4);
        addressLabel->setStyleSheet(QStringLiteral(""));
        addressLabel->setTextInteractionFlags(Qt::TextSelectableByMouse);
        changeAccountLabel = new QLabel(TransferPage);
        changeAccountLabel->setObjectName(QStringLiteral("changeAccountLabel"));
        changeAccountLabel->setGeometry(QRect(120, 40, 41, 18));
        changeAccountLabel->setFont(font3);
        messageLabel = new QLabel(TransferPage);
        messageLabel->setObjectName(QStringLiteral("messageLabel"));
        messageLabel->setGeometry(QRect(60, 328, 81, 20));
        messageLabel->setFont(font4);
        messageLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        messageLineEdit = new QLineEdit(TransferPage);
        messageLineEdit->setObjectName(QStringLiteral("messageLineEdit"));
        messageLineEdit->setGeometry(QRect(140, 323, 246, 30));
        messageLineEdit->setFocusPolicy(Qt::ClickFocus);
        messageLineEdit->setContextMenuPolicy(Qt::DefaultContextMenu);
        sendtoLabel = new QLabel(TransferPage);
        sendtoLabel->setObjectName(QStringLiteral("sendtoLabel"));
        sendtoLabel->setGeometry(QRect(60, 163, 51, 16));
        sendtoLabel->setFont(font4);
        sendtoLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        amountLabel = new QLabel(TransferPage);
        amountLabel->setObjectName(QStringLiteral("amountLabel"));
        amountLabel->setGeometry(QRect(60, 218, 61, 16));
        amountLabel->setFont(font4);
        amountLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        sendBtn = new QToolButton(TransferPage);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));
        sendBtn->setGeometry(QRect(140, 390, 120, 36));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font5.setPointSize(9);
        sendBtn->setFont(font5);
        sendBtn->setCursor(QCursor(Qt::PointingHandCursor));
        sendBtn->setFocusPolicy(Qt::NoFocus);
        sendBtn->setStyleSheet(QStringLiteral(""));
        amountLineEdit = new QLineEdit(TransferPage);
        amountLineEdit->setObjectName(QStringLiteral("amountLineEdit"));
        amountLineEdit->setGeometry(QRect(140, 213, 246, 30));
        amountLineEdit->setFocusPolicy(Qt::ClickFocus);
        amountLineEdit->setContextMenuPolicy(Qt::DefaultContextMenu);
        amountLineEdit->setMaxLength(20);
        unitLabel = new QLabel(TransferPage);
        unitLabel->setObjectName(QStringLiteral("unitLabel"));
        unitLabel->setGeometry(QRect(338, 220, 51, 16));
        unitLabel->setFont(font);
        unitLabel->setStyleSheet(QStringLiteral(""));
        unitLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        feeLabel = new QLabel(TransferPage);
        feeLabel->setObjectName(QStringLiteral("feeLabel"));
        feeLabel->setGeometry(QRect(60, 273, 51, 21));
        feeLabel->setFont(font4);
        feeLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        feeLineEdit = new QLineEdit(TransferPage);
        feeLineEdit->setObjectName(QStringLiteral("feeLineEdit"));
        feeLineEdit->setGeometry(QRect(140, 268, 246, 30));
        feeLineEdit->setCursor(QCursor(Qt::IBeamCursor));
        feeLineEdit->setFocusPolicy(Qt::ClickFocus);
        feeLineEdit->setContextMenuPolicy(Qt::DefaultContextMenu);
        feeLineEdit->setMaxLength(20);
        feeLineEdit->setReadOnly(true);
        unitLabel2 = new QLabel(TransferPage);
        unitLabel2->setObjectName(QStringLiteral("unitLabel2"));
        unitLabel2->setGeometry(QRect(338, 275, 31, 16));
        unitLabel2->setFont(font);
        unitLabel2->setStyleSheet(QStringLiteral(""));
        tipLabel2 = new QLabel(TransferPage);
        tipLabel2->setObjectName(QStringLiteral("tipLabel2"));
        tipLabel2->setGeometry(QRect(400, 265, 317, 41));
        tipLabel2->setStyleSheet(QStringLiteral("color: rgb(170, 170, 170);"));
        tipLabel3 = new QLabel(TransferPage);
        tipLabel3->setObjectName(QStringLiteral("tipLabel3"));
        tipLabel3->setGeometry(QRect(170, 360, 161, 16));
        tipLabel3->setCursor(QCursor(Qt::ArrowCursor));
        tipLabel3->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        tipLabel4 = new QLabel(TransferPage);
        tipLabel4->setObjectName(QStringLiteral("tipLabel4"));
        tipLabel4->setGeometry(QRect(400, 162, 90, 20));
        tipLabel4->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        addContactBtn = new QToolButton(TransferPage);
        addContactBtn->setObjectName(QStringLiteral("addContactBtn"));
        addContactBtn->setGeometry(QRect(490, 160, 64, 24));
        addContactBtn->setCursor(QCursor(Qt::PointingHandCursor));
        addContactBtn->setFocusPolicy(Qt::NoFocus);
        delegateLabel2 = new QLabel(TransferPage);
        delegateLabel2->setObjectName(QStringLiteral("delegateLabel2"));
        delegateLabel2->setGeometry(QRect(20, 18, 110, 21));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font6.setPointSize(18);
        font6.setBold(true);
        font6.setWeight(75);
        delegateLabel2->setFont(font6);
        delegateLabel2->setStyleSheet(QStringLiteral("color: rgb(40, 40, 40);"));
        voteCheckBox = new QCheckBox(TransferPage);
        voteCheckBox->setObjectName(QStringLiteral("voteCheckBox"));
        voteCheckBox->setGeometry(QRect(400, 215, 61, 23));
        voteCheckBox->setCursor(QCursor(Qt::PointingHandCursor));
        voteCheckBox->setFocusPolicy(Qt::ClickFocus);
        tipLabel5 = new QLabel(TransferPage);
        tipLabel5->setObjectName(QStringLiteral("tipLabel5"));
        tipLabel5->setGeometry(QRect(150, 360, 16, 16));
        infoBtn = new QToolButton(TransferPage);
        infoBtn->setObjectName(QStringLiteral("infoBtn"));
        infoBtn->setGeometry(QRect(400, 275, 18, 18));
        infoBtn->setCursor(QCursor(Qt::PointingHandCursor));
        identityLabel = new QLabel(TransferPage);
        identityLabel->setObjectName(QStringLiteral("identityLabel"));
        identityLabel->setGeometry(QRect(260, 41, 16, 16));
        identityLabel->setFont(font);
        identityLabel->setStyleSheet(QStringLiteral("background:transparent;"));
        identityLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        accountComboBox = new QComboBox(TransferPage);
        accountComboBox->setObjectName(QStringLiteral("accountComboBox"));
        accountComboBox->setGeometry(QRect(160, 40, 120, 24));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font7.setBold(false);
        font7.setWeight(50);
        accountComboBox->setFont(font7);
        accountComboBox->setFocusPolicy(Qt::ClickFocus);
        sendtoLineEdit = new QLineEdit(TransferPage);
        sendtoLineEdit->setObjectName(QStringLiteral("sendtoLineEdit"));
        sendtoLineEdit->setGeometry(QRect(140, 158, 246, 30));
        sendtoLineEdit->setFocusPolicy(Qt::ClickFocus);
        sendtoLineEdit->setContextMenuPolicy(Qt::DefaultContextMenu);
        tipLabel6 = new QLabel(TransferPage);
        tipLabel6->setObjectName(QStringLiteral("tipLabel6"));
        tipLabel6->setGeometry(QRect(400, 327, 221, 20));
        tipLabel6->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        copyBtn = new QToolButton(TransferPage);
        copyBtn->setObjectName(QStringLiteral("copyBtn"));
        copyBtn->setGeometry(QRect(790, 120, 11, 13));
        QWidget::setTabOrder(infoBtn, amountLineEdit);
        QWidget::setTabOrder(amountLineEdit, copyBtn);
        QWidget::setTabOrder(copyBtn, messageLineEdit);
        QWidget::setTabOrder(messageLineEdit, feeLineEdit);
        QWidget::setTabOrder(feeLineEdit, sendtoLineEdit);

        retranslateUi(TransferPage);

        QMetaObject::connectSlotsByName(TransferPage);
    } // setupUi

    void retranslateUi(QWidget *TransferPage)
    {
        TransferPage->setWindowTitle(QApplication::translate("TransferPage", "Form", Q_NULLPTR));
        balanceLabel->setText(QApplication::translate("TransferPage", "<html><head/><body><p><span style=\" font-size:26px;\">0.00</span><span style=\" font-size:12px;\"> ACT</span></p></body></html>", Q_NULLPTR));
        addressLabel2->setText(QApplication::translate("TransferPage", "From", Q_NULLPTR));
        balanceLabel2->setText(QApplication::translate("TransferPage", "Balance", Q_NULLPTR));
        addressLabel->setText(QString());
        changeAccountLabel->setText(QApplication::translate("TransferPage", "From", Q_NULLPTR));
        messageLabel->setText(QApplication::translate("TransferPage", "Remark", Q_NULLPTR));
        sendtoLabel->setText(QApplication::translate("TransferPage", "To", Q_NULLPTR));
        amountLabel->setText(QApplication::translate("TransferPage", "Amount", Q_NULLPTR));
        sendBtn->setText(QString());
        unitLabel->setText(QApplication::translate("TransferPage", "SSC", Q_NULLPTR));
        feeLabel->setText(QApplication::translate("TransferPage", "Fee", Q_NULLPTR));
        feeLineEdit->setText(QString());
        unitLabel2->setText(QApplication::translate("TransferPage", "SSC", Q_NULLPTR));
        tipLabel2->setText(QString());
        tipLabel3->setText(QApplication::translate("TransferPage", "Invalid Balance", Q_NULLPTR));
        tipLabel4->setText(QApplication::translate("TransferPage", "Invalid address", Q_NULLPTR));
        addContactBtn->setText(QString());
        delegateLabel2->setText(QApplication::translate("TransferPage", "Transaction", Q_NULLPTR));
        voteCheckBox->setText(QApplication::translate("TransferPage", "Vote", Q_NULLPTR));
        tipLabel5->setText(QString());
        infoBtn->setText(QString());
        identityLabel->setText(QString());
        tipLabel6->setText(QApplication::translate("TransferPage", "More than 40 bytes in length", Q_NULLPTR));
        copyBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TransferPage: public Ui_TransferPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFERPAGE_H
