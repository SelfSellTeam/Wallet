/********************************************************************************
** Form generated from reading UI file 'mainpage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPAGE_H
#define UI_MAINPAGE_H

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

class Ui_MainPage
{
public:
    QLabel *accountListLabel;
    QLabel *totalBalanceLabel;
    QLabel *label;
    QToolButton *addAccountBtn;
    QTableWidget *accountTableWidget;
    QWidget *loadingWidget;
    QLabel *loadingLabel;
    QLabel *initLabel;

    void setupUi(QWidget *MainPage)
    {
        if (MainPage->objectName().isEmpty())
            MainPage->setObjectName(QStringLiteral("MainPage"));
        MainPage->resize(835, 525);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        MainPage->setFont(font);
        MainPage->setStyleSheet(QStringLiteral("QScrollBar{background-color: rgb(255, 255, 255);}"));
        accountListLabel = new QLabel(MainPage);
        accountListLabel->setObjectName(QStringLiteral("accountListLabel"));
        accountListLabel->setGeometry(QRect(20, 18, 150, 32));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        accountListLabel->setFont(font1);
        accountListLabel->setStyleSheet(QLatin1String("background:transparent;\n"
"color: rgb(40, 40, 40);"));
        totalBalanceLabel = new QLabel(MainPage);
        totalBalanceLabel->setObjectName(QStringLiteral("totalBalanceLabel"));
        totalBalanceLabel->setGeometry(QRect(620, 30, 400, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(14);
        totalBalanceLabel->setFont(font2);
        totalBalanceLabel->setStyleSheet(QStringLiteral("background:transparent;"));
        totalBalanceLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label = new QLabel(MainPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(530, 42, 80, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(12);
        label->setFont(font3);
        label->setStyleSheet(QStringLiteral("background:transparent;"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        addAccountBtn = new QToolButton(MainPage);
        addAccountBtn->setObjectName(QStringLiteral("addAccountBtn"));
        addAccountBtn->setGeometry(QRect(670, 450, 120, 36));
        QFont font4;
        font4.setPointSize(12);
        addAccountBtn->setFont(font4);
        addAccountBtn->setCursor(QCursor(Qt::PointingHandCursor));
        addAccountBtn->setFocusPolicy(Qt::NoFocus);
        addAccountBtn->setToolButtonStyle(Qt::ToolButtonTextOnly);
        addAccountBtn->setArrowType(Qt::UpArrow);
        accountTableWidget = new QTableWidget(MainPage);
        if (accountTableWidget->columnCount() < 3)
            accountTableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        __qtablewidgetitem->setFont(font3);
        accountTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        __qtablewidgetitem1->setFont(font3);
        accountTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        __qtablewidgetitem2->setFont(font3);
        accountTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        accountTableWidget->setObjectName(QStringLiteral("accountTableWidget"));
        accountTableWidget->setGeometry(QRect(50, 124, 770, 291));
        accountTableWidget->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        accountTableWidget->setLayoutDirection(Qt::LeftToRight);
        accountTableWidget->setFrameShape(QFrame::Box);
        accountTableWidget->setFrameShadow(QFrame::Plain);
        accountTableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        accountTableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        accountTableWidget->setAutoScroll(true);
        accountTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        accountTableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        accountTableWidget->setIconSize(QSize(19, 12));
        accountTableWidget->setShowGrid(true);
        accountTableWidget->setGridStyle(Qt::SolidLine);
        accountTableWidget->horizontalHeader()->setVisible(false);
        accountTableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        accountTableWidget->horizontalHeader()->setHighlightSections(false);
        accountTableWidget->verticalHeader()->setVisible(false);
        accountTableWidget->verticalHeader()->setHighlightSections(false);
        loadingWidget = new QWidget(MainPage);
        loadingWidget->setObjectName(QStringLiteral("loadingWidget"));
        loadingWidget->setGeometry(QRect(190, 170, 461, 171));
        loadingWidget->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        loadingLabel = new QLabel(loadingWidget);
        loadingLabel->setObjectName(QStringLiteral("loadingLabel"));
        loadingLabel->setGeometry(QRect(110, 50, 211, 81));
        loadingLabel->setFont(font3);
        loadingLabel->setStyleSheet(QLatin1String("color: rgb(178, 178, 178);\n"
"background-color: rgb(255, 255, 255);"));
        loadingLabel->setAlignment(Qt::AlignCenter);
        initLabel = new QLabel(MainPage);
        initLabel->setObjectName(QStringLiteral("initLabel"));
        initLabel->setGeometry(QRect(200, 200, 450, 51));
        initLabel->setFont(font3);
        initLabel->setStyleSheet(QStringLiteral("color: rgb(178, 178, 178);"));
        initLabel->setAlignment(Qt::AlignCenter);

        retranslateUi(MainPage);

        QMetaObject::connectSlotsByName(MainPage);
    } // setupUi

    void retranslateUi(QWidget *MainPage)
    {
        MainPage->setWindowTitle(QApplication::translate("MainPage", "Form", Q_NULLPTR));
        accountListLabel->setText(QApplication::translate("MainPage", "Home", Q_NULLPTR));
        totalBalanceLabel->setText(QString());
        label->setText(QApplication::translate("MainPage", "Total", Q_NULLPTR));
        addAccountBtn->setText(QApplication::translate("MainPage", "Add account", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = accountTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainPage", "Account Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = accountTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainPage", "Account Addr", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = accountTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainPage", "Balance/ACT", Q_NULLPTR));
        loadingLabel->setText(QApplication::translate("MainPage", "Loading data, please wait...", Q_NULLPTR));
        initLabel->setText(QApplication::translate("MainPage", "Please add your first SelfSell account.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainPage: public Ui_MainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
