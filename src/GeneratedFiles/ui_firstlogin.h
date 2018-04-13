/********************************************************************************
** Form generated from reading UI file 'firstlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTLOGIN_H
#define UI_FIRSTLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FirstLogin
{
public:
    QLineEdit *pwdLineEdit;
    QLineEdit *pwdLineEdit2;
    QLabel *pwdLabel;
    QLabel *pwdLabel2;
    QPushButton *createBtn;
    QLabel *tipLabel;
    QToolButton *closeBtn;
    QToolButton *minBtn;
    QLabel *tipLabel2;
    QLabel *versionLabel_2;
    QLabel *versionLabel;
    QLabel *correctLabel;
    QLabel *correctLabel2;
    QLabel *pwdLabel2_2;

    void setupUi(QWidget *FirstLogin)
    {
        if (FirstLogin->objectName().isEmpty())
            FirstLogin->setObjectName(QStringLiteral("FirstLogin"));
        FirstLogin->resize(960, 580);
        pwdLineEdit = new QLineEdit(FirstLogin);
        pwdLineEdit->setObjectName(QStringLiteral("pwdLineEdit"));
        pwdLineEdit->setGeometry(QRect(367, 195, 228, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        pwdLineEdit->setFont(font);
        pwdLineEdit->setContextMenuPolicy(Qt::DefaultContextMenu);
        pwdLineEdit->setEchoMode(QLineEdit::Password);
        pwdLineEdit2 = new QLineEdit(FirstLogin);
        pwdLineEdit2->setObjectName(QStringLiteral("pwdLineEdit2"));
        pwdLineEdit2->setGeometry(QRect(367, 267, 228, 20));
        pwdLineEdit2->setFont(font);
        pwdLineEdit2->setCursor(QCursor(Qt::IBeamCursor));
        pwdLineEdit2->setContextMenuPolicy(Qt::DefaultContextMenu);
        pwdLineEdit2->setEchoMode(QLineEdit::Password);
        pwdLabel = new QLabel(FirstLogin);
        pwdLabel->setObjectName(QStringLiteral("pwdLabel"));
        pwdLabel->setGeometry(QRect(367, 162, 160, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        pwdLabel->setFont(font1);
        pwdLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        pwdLabel2 = new QLabel(FirstLogin);
        pwdLabel2->setObjectName(QStringLiteral("pwdLabel2"));
        pwdLabel2->setGeometry(QRect(367, 239, 120, 20));
        pwdLabel2->setFont(font1);
        pwdLabel2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        createBtn = new QPushButton(FirstLogin);
        createBtn->setObjectName(QStringLiteral("createBtn"));
        createBtn->setGeometry(QRect(367, 320, 227, 24));
        createBtn->setFont(font);
        createBtn->setCursor(QCursor(Qt::PointingHandCursor));
        createBtn->setFocusPolicy(Qt::NoFocus);
        createBtn->setStyleSheet(QLatin1String("QPushButton{border:none;\n"
"border-radius:3px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(53, 53, 53);\n"
"}\n"
"QPushButton::hover{color: rgb(153, 153, 153);}\n"
"\n"
""));
        tipLabel = new QLabel(FirstLogin);
        tipLabel->setObjectName(QStringLiteral("tipLabel"));
        tipLabel->setGeometry(QRect(367, 377, 240, 16));
        tipLabel->setFont(font);
        tipLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        tipLabel->setAlignment(Qt::AlignCenter);
        closeBtn = new QToolButton(FirstLogin);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));
        closeBtn->setGeometry(QRect(938, 10, 14, 14));
        closeBtn->setCursor(QCursor(Qt::PointingHandCursor));
        closeBtn->setFocusPolicy(Qt::NoFocus);
        minBtn = new QToolButton(FirstLogin);
        minBtn->setObjectName(QStringLiteral("minBtn"));
        minBtn->setGeometry(QRect(916, 10, 14, 14));
        minBtn->setCursor(QCursor(Qt::PointingHandCursor));
        minBtn->setFocusPolicy(Qt::NoFocus);
        tipLabel2 = new QLabel(FirstLogin);
        tipLabel2->setObjectName(QStringLiteral("tipLabel2"));
        tipLabel2->setGeometry(QRect(620, 140, 316, 79));
        versionLabel_2 = new QLabel(FirstLogin);
        versionLabel_2->setObjectName(QStringLiteral("versionLabel_2"));
        versionLabel_2->setGeometry(QRect(12, 10, 91, 16));
        versionLabel_2->setFont(font1);
        versionLabel_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        versionLabel = new QLabel(FirstLogin);
        versionLabel->setObjectName(QStringLiteral("versionLabel"));
        versionLabel->setGeometry(QRect(108, 12, 81, 14));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(9);
        versionLabel->setFont(font2);
        versionLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        correctLabel = new QLabel(FirstLogin);
        correctLabel->setObjectName(QStringLiteral("correctLabel"));
        correctLabel->setGeometry(QRect(600, 200, 16, 12));
        correctLabel->setFont(font);
        correctLabel2 = new QLabel(FirstLogin);
        correctLabel2->setObjectName(QStringLiteral("correctLabel2"));
        correctLabel2->setGeometry(QRect(600, 270, 16, 12));
        correctLabel2->setFont(font);
        pwdLabel2_2 = new QLabel(FirstLogin);
        pwdLabel2_2->setObjectName(QStringLiteral("pwdLabel2_2"));
        pwdLabel2_2->setGeometry(QRect(370, 410, 480, 51));
        pwdLabel2_2->setFont(font1);
        pwdLabel2_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        retranslateUi(FirstLogin);

        QMetaObject::connectSlotsByName(FirstLogin);
    } // setupUi

    void retranslateUi(QWidget *FirstLogin)
    {
        FirstLogin->setWindowTitle(QApplication::translate("FirstLogin", "FirstLogin", Q_NULLPTR));
        pwdLabel->setText(QApplication::translate("FirstLogin", "Set your login password:", Q_NULLPTR));
        pwdLabel2->setText(QApplication::translate("FirstLogin", "Verify password:", Q_NULLPTR));
        createBtn->setText(QApplication::translate("FirstLogin", "Create new wallet", Q_NULLPTR));
        tipLabel->setText(QString());
        closeBtn->setText(QString());
        minBtn->setText(QString());
        tipLabel2->setText(QString());
        versionLabel_2->setText(QApplication::translate("FirstLogin", "SelfSell Wallet", Q_NULLPTR));
        versionLabel->setText(QApplication::translate("FirstLogin", "Ver.1.0.0", Q_NULLPTR));
        correctLabel->setText(QString());
        correctLabel2->setText(QString());
        pwdLabel2_2->setText(QApplication::translate("FirstLogin", "Please keep your private key properly", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FirstLogin: public Ui_FirstLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTLOGIN_H
