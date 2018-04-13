/********************************************************************************
** Form generated from reading UI file 'contactpage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTPAGE_H
#define UI_CONTACTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ContactPage
{
public:
    QStackedWidget *stackedWidget;
    QWidget *allContactPage;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *initLabel;
    QLabel *contactLabel;
    QToolButton *addContactBtn;

    void setupUi(QWidget *ContactPage)
    {
        if (ContactPage->objectName().isEmpty())
            ContactPage->setObjectName(QStringLiteral("ContactPage"));
        ContactPage->resize(827, 525);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        ContactPage->setFont(font);
        ContactPage->setStyleSheet(QStringLiteral(""));
        stackedWidget = new QStackedWidget(ContactPage);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 827, 525));
        stackedWidget->setFont(font);
        stackedWidget->setStyleSheet(QStringLiteral("color: rgb(40, 40, 40);"));
        stackedWidget->setLineWidth(0);
        allContactPage = new QWidget();
        allContactPage->setObjectName(QStringLiteral("allContactPage"));
        scrollArea = new QScrollArea(allContactPage);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(-1, 90, 828, 436));
        scrollArea->setFont(font);
        scrollArea->setStyleSheet(QStringLiteral(""));
        scrollArea->setLineWidth(1);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 826, 434));
        initLabel = new QLabel(scrollAreaWidgetContents);
        initLabel->setObjectName(QStringLiteral("initLabel"));
        initLabel->setGeometry(QRect(220, 140, 401, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        initLabel->setFont(font1);
        initLabel->setStyleSheet(QStringLiteral("color: rgb(178, 178, 178);"));
        initLabel->setAlignment(Qt::AlignCenter);
        scrollArea->setWidget(scrollAreaWidgetContents);
        contactLabel = new QLabel(allContactPage);
        contactLabel->setObjectName(QStringLiteral("contactLabel"));
        contactLabel->setGeometry(QRect(30, 35, 121, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(14);
        contactLabel->setFont(font2);
        contactLabel->setStyleSheet(QLatin1String("background:transparent;\n"
"color: rgb(40, 40, 40);"));
        addContactBtn = new QToolButton(allContactPage);
        addContactBtn->setObjectName(QStringLiteral("addContactBtn"));
        addContactBtn->setGeometry(QRect(677, 26, 120, 36));
        addContactBtn->setFont(font);
        addContactBtn->setCursor(QCursor(Qt::PointingHandCursor));
        addContactBtn->setFocusPolicy(Qt::NoFocus);
        stackedWidget->addWidget(allContactPage);

        retranslateUi(ContactPage);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ContactPage);
    } // setupUi

    void retranslateUi(QWidget *ContactPage)
    {
        ContactPage->setWindowTitle(QApplication::translate("ContactPage", "Form", Q_NULLPTR));
        initLabel->setText(QApplication::translate("ContactPage", "Currently there is no contact", Q_NULLPTR));
        contactLabel->setText(QApplication::translate("ContactPage", "Contact", Q_NULLPTR));
        addContactBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ContactPage: public Ui_ContactPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACTPAGE_H
