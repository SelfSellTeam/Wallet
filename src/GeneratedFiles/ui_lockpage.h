/********************************************************************************
** Form generated from reading UI file 'lockpage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOCKPAGE_H
#define UI_LOCKPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LockPage
{
public:
    QLabel *logoLabel;
    QLineEdit *pwdLineEdit;
    QToolButton *unlockBtn;
    QLabel *lockedLabel;
    QLabel *tipLabel;
    QToolButton *minBtn;
    QToolButton *closeBtn;
    QLabel *chanceLabel;
    QLabel *textLabel;
    QLabel *versionLabel_2;
    QLabel *versionLabel;

    void setupUi(QWidget *LockPage)
    {
        if (LockPage->objectName().isEmpty())
            LockPage->setObjectName(QStringLiteral("LockPage"));
        LockPage->resize(960, 538);
        logoLabel = new QLabel(LockPage);
        logoLabel->setObjectName(QStringLiteral("logoLabel"));
        logoLabel->setGeometry(QRect(390, 150, 221, 112));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(26);
        font.setBold(true);
        font.setWeight(75);
        logoLabel->setFont(font);
        pwdLineEdit = new QLineEdit(LockPage);
        pwdLineEdit->setObjectName(QStringLiteral("pwdLineEdit"));
        pwdLineEdit->setGeometry(QRect(370, 350, 226, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        pwdLineEdit->setFont(font1);
        pwdLineEdit->setContextMenuPolicy(Qt::DefaultContextMenu);
        pwdLineEdit->setEchoMode(QLineEdit::Password);
        pwdLineEdit->setAlignment(Qt::AlignCenter);
        pwdLineEdit->setClearButtonEnabled(false);
        unlockBtn = new QToolButton(LockPage);
        unlockBtn->setObjectName(QStringLiteral("unlockBtn"));
        unlockBtn->setGeometry(QRect(610, 357, 18, 7));
        unlockBtn->setCursor(QCursor(Qt::PointingHandCursor));
        unlockBtn->setFocusPolicy(Qt::NoFocus);
        lockedLabel = new QLabel(LockPage);
        lockedLabel->setObjectName(QStringLiteral("lockedLabel"));
        lockedLabel->setGeometry(QRect(454, 310, 55, 13));
        tipLabel = new QLabel(LockPage);
        tipLabel->setObjectName(QStringLiteral("tipLabel"));
        tipLabel->setGeometry(QRect(300, 392, 381, 20));
        tipLabel->setFont(font1);
        tipLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        tipLabel->setAlignment(Qt::AlignCenter);
        minBtn = new QToolButton(LockPage);
        minBtn->setObjectName(QStringLiteral("minBtn"));
        minBtn->setGeometry(QRect(916, 10, 14, 14));
        minBtn->setCursor(QCursor(Qt::PointingHandCursor));
        minBtn->setFocusPolicy(Qt::NoFocus);
        closeBtn = new QToolButton(LockPage);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));
        closeBtn->setGeometry(QRect(938, 10, 14, 14));
        closeBtn->setCursor(QCursor(Qt::PointingHandCursor));
        closeBtn->setFocusPolicy(Qt::NoFocus);
        chanceLabel = new QLabel(LockPage);
        chanceLabel->setObjectName(QStringLiteral("chanceLabel"));
        chanceLabel->setGeometry(QRect(640, 350, 161, 20));
        chanceLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        textLabel = new QLabel(LockPage);
        textLabel->setObjectName(QStringLiteral("textLabel"));
        textLabel->setGeometry(QRect(381, 220, 197, 29));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(24);
        font2.setBold(true);
        font2.setWeight(75);
        textLabel->setFont(font2);
        textLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        textLabel->setAlignment(Qt::AlignCenter);
        versionLabel_2 = new QLabel(LockPage);
        versionLabel_2->setObjectName(QStringLiteral("versionLabel_2"));
        versionLabel_2->setGeometry(QRect(12, 10, 91, 16));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(10);
        versionLabel_2->setFont(font3);
        versionLabel_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        versionLabel = new QLabel(LockPage);
        versionLabel->setObjectName(QStringLiteral("versionLabel"));
        versionLabel->setGeometry(QRect(108, 12, 81, 14));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(9);
        versionLabel->setFont(font4);
        versionLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        retranslateUi(LockPage);

        QMetaObject::connectSlotsByName(LockPage);
    } // setupUi

    void retranslateUi(QWidget *LockPage)
    {
        LockPage->setWindowTitle(QApplication::translate("LockPage", "Form", Q_NULLPTR));
        logoLabel->setText(QString());
        unlockBtn->setText(QString());
        lockedLabel->setText(QString());
        tipLabel->setText(QString());
        minBtn->setText(QString());
        closeBtn->setText(QString());
        chanceLabel->setText(QString());
        textLabel->setText(QString());
        versionLabel_2->setText(QApplication::translate("LockPage", "SelfSell Wallet", Q_NULLPTR));
        versionLabel->setText(QApplication::translate("LockPage", "Ver.1.0.0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LockPage: public Ui_LockPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOCKPAGE_H
