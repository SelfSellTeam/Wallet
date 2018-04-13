/********************************************************************************
** Form generated from reading UI file 'normallogin.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NORMALLOGIN_H
#define UI_NORMALLOGIN_H

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

class Ui_NormalLogin
{
public:
    QLabel *logoLabel;
    QLabel *loginLabel;
    QLineEdit *pwdLineEdit;
    QToolButton *enterBtn;
    QLabel *tipLabel;
    QToolButton *closeBtn;
    QToolButton *minBtn;
    QLabel *chanceLabel;
    QLabel *versionLabel;
    QLabel *versionLabel_2;
    QLabel *textLabel;
    QLabel *pwdLabel2_2;

    void setupUi(QWidget *NormalLogin)
    {
        if (NormalLogin->objectName().isEmpty())
            NormalLogin->setObjectName(QStringLiteral("NormalLogin"));
        NormalLogin->resize(960, 588);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        NormalLogin->setFont(font);
        logoLabel = new QLabel(NormalLogin);
        logoLabel->setObjectName(QStringLiteral("logoLabel"));
        logoLabel->setGeometry(QRect(380, 140, 231, 112));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(26);
        font1.setBold(true);
        font1.setWeight(75);
        logoLabel->setFont(font1);
        loginLabel = new QLabel(NormalLogin);
        loginLabel->setObjectName(QStringLiteral("loginLabel"));
        loginLabel->setGeometry(QRect(420, 315, 131, 16));
        loginLabel->setFont(font);
        loginLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        loginLabel->setAlignment(Qt::AlignCenter);
        pwdLineEdit = new QLineEdit(NormalLogin);
        pwdLineEdit->setObjectName(QStringLiteral("pwdLineEdit"));
        pwdLineEdit->setGeometry(QRect(370, 350, 226, 20));
        pwdLineEdit->setFont(font);
        pwdLineEdit->setContextMenuPolicy(Qt::DefaultContextMenu);
        pwdLineEdit->setEchoMode(QLineEdit::Password);
        pwdLineEdit->setAlignment(Qt::AlignCenter);
        pwdLineEdit->setClearButtonEnabled(false);
        enterBtn = new QToolButton(NormalLogin);
        enterBtn->setObjectName(QStringLiteral("enterBtn"));
        enterBtn->setGeometry(QRect(610, 357, 18, 7));
        enterBtn->setCursor(QCursor(Qt::PointingHandCursor));
        enterBtn->setFocusPolicy(Qt::NoFocus);
        tipLabel = new QLabel(NormalLogin);
        tipLabel->setObjectName(QStringLiteral("tipLabel"));
        tipLabel->setGeometry(QRect(300, 392, 381, 20));
        tipLabel->setFont(font);
        tipLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        tipLabel->setAlignment(Qt::AlignCenter);
        closeBtn = new QToolButton(NormalLogin);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));
        closeBtn->setGeometry(QRect(938, 10, 14, 14));
        closeBtn->setCursor(QCursor(Qt::PointingHandCursor));
        closeBtn->setFocusPolicy(Qt::NoFocus);
        minBtn = new QToolButton(NormalLogin);
        minBtn->setObjectName(QStringLiteral("minBtn"));
        minBtn->setGeometry(QRect(916, 10, 14, 14));
        minBtn->setCursor(QCursor(Qt::PointingHandCursor));
        minBtn->setFocusPolicy(Qt::NoFocus);
        chanceLabel = new QLabel(NormalLogin);
        chanceLabel->setObjectName(QStringLiteral("chanceLabel"));
        chanceLabel->setGeometry(QRect(640, 350, 161, 20));
        chanceLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        versionLabel = new QLabel(NormalLogin);
        versionLabel->setObjectName(QStringLiteral("versionLabel"));
        versionLabel->setGeometry(QRect(108, 12, 81, 14));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(9);
        versionLabel->setFont(font2);
        versionLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        versionLabel_2 = new QLabel(NormalLogin);
        versionLabel_2->setObjectName(QStringLiteral("versionLabel_2"));
        versionLabel_2->setGeometry(QRect(12, 10, 91, 16));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(10);
        versionLabel_2->setFont(font3);
        versionLabel_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        textLabel = new QLabel(NormalLogin);
        textLabel->setObjectName(QStringLiteral("textLabel"));
        textLabel->setGeometry(QRect(381, 220, 197, 29));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font4.setPointSize(24);
        font4.setBold(true);
        font4.setWeight(75);
        textLabel->setFont(font4);
        textLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        textLabel->setAlignment(Qt::AlignCenter);
        pwdLabel2_2 = new QLabel(NormalLogin);
        pwdLabel2_2->setObjectName(QStringLiteral("pwdLabel2_2"));
        pwdLabel2_2->setGeometry(QRect(395, 420, 411, 41));
        pwdLabel2_2->setFont(font3);
        pwdLabel2_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        retranslateUi(NormalLogin);

        QMetaObject::connectSlotsByName(NormalLogin);
    } // setupUi

    void retranslateUi(QWidget *NormalLogin)
    {
        NormalLogin->setWindowTitle(QApplication::translate("NormalLogin", "Form", Q_NULLPTR));
        logoLabel->setText(QString());
        loginLabel->setText(QApplication::translate("NormalLogin", "Password:", Q_NULLPTR));
        enterBtn->setText(QString());
        tipLabel->setText(QString());
        closeBtn->setText(QString());
        minBtn->setText(QString());
        chanceLabel->setText(QString());
        versionLabel->setText(QApplication::translate("NormalLogin", "Ver.1.0.0", Q_NULLPTR));
        versionLabel_2->setText(QApplication::translate("NormalLogin", "SelfSell Wallet", Q_NULLPTR));
        textLabel->setText(QString());
        pwdLabel2_2->setText(QApplication::translate("NormalLogin", "Please keep your private key", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NormalLogin: public Ui_NormalLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NORMALLOGIN_H
