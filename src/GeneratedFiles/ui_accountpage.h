/********************************************************************************
** Form generated from reading UI file 'accountpage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTPAGE_H
#define UI_ACCOUNTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AccountPage
{
public:
    QLabel *addressLabel2;
    QLabel *addressLabel;
    QToolButton *copyBtn;
    QComboBox *accountComboBox;
    QLabel *label_10;
    QLabel *label;
    QLabel *label_2;
    QComboBox *transactionTypeComboBox;
    QLabel *identityLabel;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *balanceLabel;
    QToolButton *nextPageBtn;
    QLineEdit *pageLineEdit;
    QLabel *numberLabel;
    QLabel *pageLabel;
    QToolButton *prePageBtn;
    QTableWidget *accountTransactionsTableWidget;
    QLabel *initLabel;

    void setupUi(QWidget *AccountPage)
    {
        if (AccountPage->objectName().isEmpty())
            AccountPage->setObjectName(QStringLiteral("AccountPage"));
        AccountPage->resize(827, 525);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setStyleStrategy(QFont::PreferDefault);
        AccountPage->setFont(font);
        AccountPage->setStyleSheet(QStringLiteral("QScrollBar{background-color: rgb(255, 255, 255);}"));
        addressLabel2 = new QLabel(AccountPage);
        addressLabel2->setObjectName(QStringLiteral("addressLabel2"));
        addressLabel2->setGeometry(QRect(290, 44, 51, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        addressLabel2->setFont(font1);
        addressLabel2->setStyleSheet(QLatin1String("color: rgb(40, 40, 40);\n"
"background:transparent;"));
        addressLabel2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        addressLabel = new QLabel(AccountPage);
        addressLabel->setObjectName(QStringLiteral("addressLabel"));
        addressLabel->setGeometry(QRect(349, 46, 111, 16));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setUnderline(false);
        addressLabel->setFont(font2);
        addressLabel->setStyleSheet(QStringLiteral("background:transparent;"));
        addressLabel->setScaledContents(true);
        addressLabel->setTextInteractionFlags(Qt::NoTextInteraction);
        copyBtn = new QToolButton(AccountPage);
        copyBtn->setObjectName(QStringLiteral("copyBtn"));
        copyBtn->setGeometry(QRect(460, 50, 11, 13));
        copyBtn->setFont(font1);
        copyBtn->setCursor(QCursor(Qt::PointingHandCursor));
        copyBtn->setFocusPolicy(Qt::NoFocus);
        accountComboBox = new QComboBox(AccountPage);
        accountComboBox->setObjectName(QStringLiteral("accountComboBox"));
        accountComboBox->setGeometry(QRect(160, 42, 120, 24));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setBold(false);
        font3.setWeight(50);
        accountComboBox->setFont(font3);
        accountComboBox->setFocusPolicy(Qt::NoFocus);
        label_10 = new QLabel(AccountPage);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 18, 70, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(18);
        font4.setBold(true);
        font4.setWeight(75);
        label_10->setFont(font4);
        label_10->setStyleSheet(QStringLiteral("background:transparent;"));
        label = new QLabel(AccountPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(53, 42, 101, 24));
        label->setFont(font1);
        label->setStyleSheet(QLatin1String("color: rgb(40, 40, 40);\n"
"background:transparent;"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(AccountPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(32, 117, 31, 16));
        label_2->setFont(font1);
        label_2->setStyleSheet(QStringLiteral("color: rgb(40, 40, 40);"));
        transactionTypeComboBox = new QComboBox(AccountPage);
        transactionTypeComboBox->setObjectName(QStringLiteral("transactionTypeComboBox"));
        transactionTypeComboBox->setGeometry(QRect(69, 115, 64, 24));
        transactionTypeComboBox->setFont(font1);
        transactionTypeComboBox->setFocusPolicy(Qt::NoFocus);
        identityLabel = new QLabel(AccountPage);
        identityLabel->setObjectName(QStringLiteral("identityLabel"));
        identityLabel->setGeometry(QRect(294, 37, 16, 16));
        identityLabel->setFont(font1);
        identityLabel->setStyleSheet(QStringLiteral("background:transparent;"));
        identityLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(AccountPage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(650, 122, 9, 11));
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral("background-color: rgb(153, 153, 153);"));
        label_4 = new QLabel(AccountPage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(711, 122, 9, 11));
        label_4->setFont(font1);
        label_4->setStyleSheet(QStringLiteral("background-color: rgb(71, 178, 156);"));
        label_5 = new QLabel(AccountPage);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(758, 122, 9, 11));
        label_5->setFont(font1);
        label_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 80, 63);"));
        label_6 = new QLabel(AccountPage);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(660, 119, 45, 16));
        label_6->setFont(font1);
        label_6->setStyleSheet(QStringLiteral("color: rgb(40, 40, 40);"));
        label_7 = new QLabel(AccountPage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(724, 119, 31, 16));
        label_7->setFont(font1);
        label_7->setStyleSheet(QStringLiteral("color: rgb(40, 40, 40);"));
        label_8 = new QLabel(AccountPage);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(771, 119, 31, 16));
        label_8->setFont(font1);
        label_8->setStyleSheet(QStringLiteral("color: rgb(40, 40, 40);"));
        label_9 = new QLabel(AccountPage);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(42, 159, 101, 30));
        label_9->setFont(font1);
        label_9->setStyleSheet(QStringLiteral("color: rgb(134, 134, 134);"));
        label_11 = new QLabel(AccountPage);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(160, 159, 121, 30));
        label_11->setFont(font1);
        label_11->setStyleSheet(QStringLiteral("color: rgb(134, 134, 134);"));
        label_12 = new QLabel(AccountPage);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(290, 159, 121, 30));
        label_12->setFont(font1);
        label_12->setStyleSheet(QStringLiteral("color: rgb(134, 134, 134);"));
        label_13 = new QLabel(AccountPage);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(420, 159, 111, 30));
        label_13->setFont(font1);
        label_13->setStyleSheet(QStringLiteral("color: rgb(134, 134, 134);"));
        label_14 = new QLabel(AccountPage);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(550, 159, 111, 30));
        label_14->setFont(font1);
        label_14->setStyleSheet(QStringLiteral("color: rgb(134, 134, 134);"));
        label_15 = new QLabel(AccountPage);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(680, 159, 111, 30));
        label_15->setFont(font1);
        label_15->setStyleSheet(QStringLiteral("color: rgb(134, 134, 134);"));
        label_16 = new QLabel(AccountPage);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(519, 44, 54, 24));
        label_16->setFont(font1);
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        balanceLabel = new QLabel(AccountPage);
        balanceLabel->setObjectName(QStringLiteral("balanceLabel"));
        balanceLabel->setGeometry(QRect(580, 40, 271, 30));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font5.setPointSize(14);
        balanceLabel->setFont(font5);
        balanceLabel->setStyleSheet(QStringLiteral("background:transparent;"));
        balanceLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        nextPageBtn = new QToolButton(AccountPage);
        nextPageBtn->setObjectName(QStringLiteral("nextPageBtn"));
        nextPageBtn->setGeometry(QRect(710, 473, 60, 30));
        nextPageBtn->setFont(font1);
        nextPageBtn->setCursor(QCursor(Qt::PointingHandCursor));
        nextPageBtn->setFocusPolicy(Qt::NoFocus);
        nextPageBtn->setStyleSheet(QStringLiteral(""));
        pageLineEdit = new QLineEdit(AccountPage);
        pageLineEdit->setObjectName(QStringLiteral("pageLineEdit"));
        pageLineEdit->setGeometry(QRect(660, 478, 21, 21));
        pageLineEdit->setFont(font3);
        pageLineEdit->setCursor(QCursor(Qt::IBeamCursor));
        pageLineEdit->setStyleSheet(QStringLiteral("color: #282828;"));
        pageLineEdit->setFrame(false);
        pageLineEdit->setAlignment(Qt::AlignCenter);
        numberLabel = new QLabel(AccountPage);
        numberLabel->setObjectName(QStringLiteral("numberLabel"));
        numberLabel->setGeometry(QRect(580, 473, 61, 30));
        numberLabel->setFont(font1);
        pageLabel = new QLabel(AccountPage);
        pageLabel->setObjectName(QStringLiteral("pageLabel"));
        pageLabel->setGeometry(QRect(680, 473, 31, 30));
        pageLabel->setFont(font1);
        pageLabel->setStyleSheet(QStringLiteral("color: #282828;"));
        pageLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        prePageBtn = new QToolButton(AccountPage);
        prePageBtn->setObjectName(QStringLiteral("prePageBtn"));
        prePageBtn->setGeometry(QRect(510, 473, 60, 30));
        prePageBtn->setFont(font1);
        prePageBtn->setCursor(QCursor(Qt::PointingHandCursor));
        prePageBtn->setFocusPolicy(Qt::NoFocus);
        prePageBtn->setStyleSheet(QStringLiteral(""));
        accountTransactionsTableWidget = new QTableWidget(AccountPage);
        if (accountTransactionsTableWidget->columnCount() < 6)
            accountTransactionsTableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        __qtablewidgetitem->setFont(font1);
        accountTransactionsTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        __qtablewidgetitem1->setFont(font1);
        accountTransactionsTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        __qtablewidgetitem2->setFont(font1);
        accountTransactionsTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        __qtablewidgetitem3->setFont(font1);
        accountTransactionsTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        __qtablewidgetitem4->setFont(font3);
        accountTransactionsTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        __qtablewidgetitem5->setFont(font1);
        accountTransactionsTableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        accountTransactionsTableWidget->setObjectName(QStringLiteral("accountTransactionsTableWidget"));
        accountTransactionsTableWidget->setGeometry(QRect(39, 190, 770, 285));
        accountTransactionsTableWidget->setStyleSheet(QStringLiteral(""));
        accountTransactionsTableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        accountTransactionsTableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        accountTransactionsTableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        accountTransactionsTableWidget->setAutoScroll(true);
        accountTransactionsTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        accountTransactionsTableWidget->setTabKeyNavigation(true);
        accountTransactionsTableWidget->setProperty("showDropIndicator", QVariant(true));
        accountTransactionsTableWidget->setDragDropOverwriteMode(true);
        accountTransactionsTableWidget->setShowGrid(true);
        accountTransactionsTableWidget->setColumnCount(6);
        accountTransactionsTableWidget->horizontalHeader()->setVisible(false);
        accountTransactionsTableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        accountTransactionsTableWidget->horizontalHeader()->setHighlightSections(false);
        accountTransactionsTableWidget->verticalHeader()->setVisible(false);
        accountTransactionsTableWidget->verticalHeader()->setCascadingSectionResizes(false);
        accountTransactionsTableWidget->verticalHeader()->setHighlightSections(false);
        initLabel = new QLabel(AccountPage);
        initLabel->setObjectName(QStringLiteral("initLabel"));
        initLabel->setGeometry(QRect(220, 280, 401, 51));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font6.setPointSize(12);
        initLabel->setFont(font6);
        initLabel->setStyleSheet(QStringLiteral("color: rgb(178, 178, 178);"));
        initLabel->setAlignment(Qt::AlignCenter);

        retranslateUi(AccountPage);

        QMetaObject::connectSlotsByName(AccountPage);
    } // setupUi

    void retranslateUi(QWidget *AccountPage)
    {
        AccountPage->setWindowTitle(QApplication::translate("AccountPage", "Form", Q_NULLPTR));
        addressLabel2->setText(QApplication::translate("AccountPage", "Address", Q_NULLPTR));
        addressLabel->setText(QString());
        copyBtn->setText(QString());
        label_10->setText(QApplication::translate("AccountPage", "Bill", Q_NULLPTR));
        label->setText(QApplication::translate("AccountPage", "Current account", Q_NULLPTR));
        label_2->setText(QApplication::translate("AccountPage", "Select", Q_NULLPTR));
        transactionTypeComboBox->clear();
        transactionTypeComboBox->insertItems(0, QStringList()
         << QApplication::translate("AccountPage", "All", Q_NULLPTR)
         << QApplication::translate("AccountPage", "In", Q_NULLPTR)
         << QApplication::translate("AccountPage", "Out", Q_NULLPTR)
        );
        transactionTypeComboBox->setCurrentText(QApplication::translate("AccountPage", "All", Q_NULLPTR));
        identityLabel->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QApplication::translate("AccountPage", "Confirm", Q_NULLPTR));
        label_7->setText(QApplication::translate("AccountPage", "In", Q_NULLPTR));
        label_8->setText(QApplication::translate("AccountPage", "Out", Q_NULLPTR));
        label_9->setText(QApplication::translate("AccountPage", "Time", Q_NULLPTR));
        label_11->setText(QApplication::translate("AccountPage", "Account", Q_NULLPTR));
        label_12->setText(QApplication::translate("AccountPage", "Trx", Q_NULLPTR));
        label_13->setText(QApplication::translate("AccountPage", "Fee/SSC", Q_NULLPTR));
        label_14->setText(QApplication::translate("AccountPage", "Balance", Q_NULLPTR));
        label_15->setText(QApplication::translate("AccountPage", "Remarks", Q_NULLPTR));
        label_16->setText(QApplication::translate("AccountPage", "Balance", Q_NULLPTR));
        balanceLabel->setText(QString());
        nextPageBtn->setText(QApplication::translate("AccountPage", "Next", Q_NULLPTR));
        numberLabel->setText(QApplication::translate("AccountPage", "Total:", Q_NULLPTR));
        pageLabel->setText(QApplication::translate("AccountPage", "/100", Q_NULLPTR));
        prePageBtn->setText(QApplication::translate("AccountPage", "Previous", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = accountTransactionsTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("AccountPage", "\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = accountTransactionsTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("AccountPage", "\345\257\271\346\226\271\350\264\246\346\210\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = accountTransactionsTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("AccountPage", "\344\272\244\346\230\223\351\207\221\351\242\235/GOP", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = accountTransactionsTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("AccountPage", "\346\211\213\347\273\255\350\264\271/GOP", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = accountTransactionsTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("AccountPage", "\350\264\246\346\210\267\344\275\231\351\242\235/GOP", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = accountTransactionsTableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("AccountPage", "\345\244\207\346\263\250", Q_NULLPTR));
        initLabel->setText(QApplication::translate("AccountPage", "No query transaction record", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AccountPage: public Ui_AccountPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTPAGE_H
