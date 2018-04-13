/********************************************************************************
** Form generated from reading UI file 'accountdetailwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTDETAILWIDGET_H
#define UI_ACCOUNTDETAILWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AccountDetailWidget
{
public:
    QToolButton *closeBtn;
    QLabel *nameLabel;
    QTableWidget *recentTransactionTableWidget;
    QLabel *label;
    QToolButton *moreTransactionBtn;
    QLabel *noTransactionLabel;
    QLabel *addressLabel;
    QLabel *addressLabel2;
    QToolButton *copyBtn;
    QToolButton *exportBtn;
    QToolButton *transferBtn;
    QToolButton *upgradeBtn;
    QLabel *balanceLabel;
    QLabel *balanceLabel2;
    QLabel *delegateRankLabel;
    QLabel *identityLabel;
    QLabel *salaryLabel2;
    QLabel *salaryLabel;
    QToolButton *withdrawBtn;
    QWidget *produceWidget;
    QLabel *produceLabel;
    QToolButton *switchBtn;

    void setupUi(QWidget *AccountDetailWidget)
    {
        if (AccountDetailWidget->objectName().isEmpty())
            AccountDetailWidget->setObjectName(QStringLiteral("AccountDetailWidget"));
        AccountDetailWidget->resize(530, 450);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        AccountDetailWidget->setFont(font);
        closeBtn = new QToolButton(AccountDetailWidget);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));
        closeBtn->setGeometry(QRect(20, 20, 19, 19));
        closeBtn->setCursor(QCursor(Qt::PointingHandCursor));
        closeBtn->setFocusPolicy(Qt::NoFocus);
        nameLabel = new QLabel(AccountDetailWidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setGeometry(QRect(180, 13, 121, 21));
        QFont font1;
        font1.setPointSize(12);
        nameLabel->setFont(font1);
        recentTransactionTableWidget = new QTableWidget(AccountDetailWidget);
        if (recentTransactionTableWidget->columnCount() < 3)
            recentTransactionTableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        recentTransactionTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        recentTransactionTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        recentTransactionTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        recentTransactionTableWidget->setObjectName(QStringLiteral("recentTransactionTableWidget"));
        recentTransactionTableWidget->setGeometry(QRect(25, 325, 478, 100));
        recentTransactionTableWidget->setFocusPolicy(Qt::NoFocus);
        recentTransactionTableWidget->setStyleSheet(QStringLiteral("background-color: rgb(246, 247, 249);"));
        recentTransactionTableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        recentTransactionTableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        recentTransactionTableWidget->verticalHeader()->setVisible(false);
        recentTransactionTableWidget->verticalHeader()->setHighlightSections(false);
        label = new QLabel(AccountDetailWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(24, 287, 121, 16));
        label->setFont(font);
        label->setStyleSheet(QStringLiteral(""));
        moreTransactionBtn = new QToolButton(AccountDetailWidget);
        moreTransactionBtn->setObjectName(QStringLiteral("moreTransactionBtn"));
        moreTransactionBtn->setGeometry(QRect(469, 282, 51, 21));
        moreTransactionBtn->setFont(font);
        moreTransactionBtn->setCursor(QCursor(Qt::PointingHandCursor));
        moreTransactionBtn->setFocusPolicy(Qt::NoFocus);
        moreTransactionBtn->setStyleSheet(QLatin1String("background:transparent;\n"
"color: rgb(244, 159, 23);"));
        noTransactionLabel = new QLabel(AccountDetailWidget);
        noTransactionLabel->setObjectName(QStringLiteral("noTransactionLabel"));
        noTransactionLabel->setGeometry(QRect(165, 344, 191, 41));
        QFont font2;
        noTransactionLabel->setFont(font2);
        noTransactionLabel->setStyleSheet(QLatin1String("font-size: 14px;\n"
"color: rgb(178, 178, 178);"));
        noTransactionLabel->setAlignment(Qt::AlignCenter);
        addressLabel = new QLabel(AccountDetailWidget);
        addressLabel->setObjectName(QStringLiteral("addressLabel"));
        addressLabel->setGeometry(QRect(150, 154, 291, 20));
        addressLabel2 = new QLabel(AccountDetailWidget);
        addressLabel2->setObjectName(QStringLiteral("addressLabel2"));
        addressLabel2->setGeometry(QRect(40, 154, 54, 20));
        addressLabel2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        copyBtn = new QToolButton(AccountDetailWidget);
        copyBtn->setObjectName(QStringLiteral("copyBtn"));
        copyBtn->setGeometry(QRect(450, 154, 11, 13));
        copyBtn->setFont(font);
        copyBtn->setCursor(QCursor(Qt::PointingHandCursor));
        copyBtn->setFocusPolicy(Qt::NoFocus);
        exportBtn = new QToolButton(AccountDetailWidget);
        exportBtn->setObjectName(QStringLiteral("exportBtn"));
        exportBtn->setGeometry(QRect(453, 15, 70, 24));
        exportBtn->setCursor(QCursor(Qt::PointingHandCursor));
        exportBtn->setFocusPolicy(Qt::NoFocus);
        exportBtn->setLayoutDirection(Qt::LeftToRight);
        transferBtn = new QToolButton(AccountDetailWidget);
        transferBtn->setObjectName(QStringLiteral("transferBtn"));
        transferBtn->setGeometry(QRect(305, 185, 90, 24));
        transferBtn->setCursor(QCursor(Qt::PointingHandCursor));
        transferBtn->setFocusPolicy(Qt::NoFocus);
        transferBtn->setToolButtonStyle(Qt::ToolButtonTextOnly);
        upgradeBtn = new QToolButton(AccountDetailWidget);
        upgradeBtn->setObjectName(QStringLiteral("upgradeBtn"));
        upgradeBtn->setGeometry(QRect(378, 15, 61, 24));
        upgradeBtn->setCursor(QCursor(Qt::PointingHandCursor));
        upgradeBtn->setFocusPolicy(Qt::NoFocus);
        balanceLabel = new QLabel(AccountDetailWidget);
        balanceLabel->setObjectName(QStringLiteral("balanceLabel"));
        balanceLabel->setGeometry(QRect(157, 192, 91, 20));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(9);
        balanceLabel->setFont(font3);
        balanceLabel2 = new QLabel(AccountDetailWidget);
        balanceLabel2->setObjectName(QStringLiteral("balanceLabel2"));
        balanceLabel2->setGeometry(QRect(80, 189, 51, 20));
        delegateRankLabel = new QLabel(AccountDetailWidget);
        delegateRankLabel->setObjectName(QStringLiteral("delegateRankLabel"));
        delegateRankLabel->setGeometry(QRect(310, 20, 21, 16));
        delegateRankLabel->setFont(font);
        delegateRankLabel->setStyleSheet(QStringLiteral(""));
        identityLabel = new QLabel(AccountDetailWidget);
        identityLabel->setObjectName(QStringLiteral("identityLabel"));
        identityLabel->setGeometry(QRect(140, 30, 16, 16));
        identityLabel->setFont(font);
        identityLabel->setStyleSheet(QStringLiteral("background:transparent;"));
        identityLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        salaryLabel2 = new QLabel(AccountDetailWidget);
        salaryLabel2->setObjectName(QStringLiteral("salaryLabel2"));
        salaryLabel2->setGeometry(QRect(40, 231, 101, 20));
        salaryLabel = new QLabel(AccountDetailWidget);
        salaryLabel->setObjectName(QStringLiteral("salaryLabel"));
        salaryLabel->setGeometry(QRect(150, 231, 81, 20));
        withdrawBtn = new QToolButton(AccountDetailWidget);
        withdrawBtn->setObjectName(QStringLiteral("withdrawBtn"));
        withdrawBtn->setGeometry(QRect(280, 228, 51, 24));
        withdrawBtn->setCursor(QCursor(Qt::PointingHandCursor));
        withdrawBtn->setFocusPolicy(Qt::NoFocus);
        produceWidget = new QWidget(AccountDetailWidget);
        produceWidget->setObjectName(QStringLiteral("produceWidget"));
        produceWidget->setGeometry(QRect(441, 57, 71, 55));
        produceLabel = new QLabel(produceWidget);
        produceLabel->setObjectName(QStringLiteral("produceLabel"));
        produceLabel->setGeometry(QRect(0, 10, 71, 20));
        produceLabel->setAlignment(Qt::AlignCenter);
        switchBtn = new QToolButton(produceWidget);
        switchBtn->setObjectName(QStringLiteral("switchBtn"));
        switchBtn->setGeometry(QRect(21, 34, 20, 16));
        switchBtn->setCursor(QCursor(Qt::PointingHandCursor));
        switchBtn->setFocusPolicy(Qt::NoFocus);

        retranslateUi(AccountDetailWidget);

        QMetaObject::connectSlotsByName(AccountDetailWidget);
    } // setupUi

    void retranslateUi(QWidget *AccountDetailWidget)
    {
        AccountDetailWidget->setWindowTitle(QApplication::translate("AccountDetailWidget", "Form", Q_NULLPTR));
        closeBtn->setText(QString());
        nameLabel->setText(QApplication::translate("AccountDetailWidget", "accountName", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = recentTransactionTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("AccountDetailWidget", "Time", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = recentTransactionTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("AccountDetailWidget", "Other account", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = recentTransactionTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("AccountDetailWidget", "Transaction amount/ACT", Q_NULLPTR));
        label->setText(QApplication::translate("AccountDetailWidget", "Recent transaction", Q_NULLPTR));
        moreTransactionBtn->setText(QApplication::translate("AccountDetailWidget", "More+ ", Q_NULLPTR));
        noTransactionLabel->setText(QApplication::translate("AccountDetailWidget", "No transaction record", Q_NULLPTR));
        addressLabel->setText(QApplication::translate("AccountDetailWidget", "addr", Q_NULLPTR));
        addressLabel2->setText(QApplication::translate("AccountDetailWidget", "Address:", Q_NULLPTR));
        copyBtn->setText(QString());
        exportBtn->setText(QApplication::translate("AccountDetailWidget", "Export", Q_NULLPTR));
        transferBtn->setText(QApplication::translate("AccountDetailWidget", " Start transfer", Q_NULLPTR));
        upgradeBtn->setText(QApplication::translate("AccountDetailWidget", "Upgrade", Q_NULLPTR));
        balanceLabel->setText(QApplication::translate("AccountDetailWidget", "0 SSC", Q_NULLPTR));
        balanceLabel2->setText(QApplication::translate("AccountDetailWidget", "Balance:", Q_NULLPTR));
        delegateRankLabel->setText(QString());
        identityLabel->setText(QString());
        salaryLabel2->setText(QApplication::translate("AccountDetailWidget", "Current earnings:", Q_NULLPTR));
        salaryLabel->setText(QApplication::translate("AccountDetailWidget", "0 SSC", Q_NULLPTR));
        withdrawBtn->setText(QApplication::translate("AccountDetailWidget", "Receive", Q_NULLPTR));
        produceLabel->setText(QApplication::translate("AccountDetailWidget", "Block switch", Q_NULLPTR));
        switchBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AccountDetailWidget: public Ui_AccountDetailWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTDETAILWIDGET_H
