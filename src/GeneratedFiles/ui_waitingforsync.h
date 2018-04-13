/********************************************************************************
** Form generated from reading UI file 'waitingforsync.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAITINGFORSYNC_H
#define UI_WAITINGFORSYNC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WaitingForSync
{
public:
    QToolButton *minBtn;
    QToolButton *closeBtn;
    QLabel *logoLabel;
    QLabel *textLabel;
    QLabel *gifLabel;
    QLabel *loadingLabel;
    QLabel *versionLabel_2;
    QLabel *versionLabel;

    void setupUi(QWidget *WaitingForSync)
    {
        if (WaitingForSync->objectName().isEmpty())
            WaitingForSync->setObjectName(QStringLiteral("WaitingForSync"));
        WaitingForSync->resize(960, 579);
        minBtn = new QToolButton(WaitingForSync);
        minBtn->setObjectName(QStringLiteral("minBtn"));
        minBtn->setGeometry(QRect(916, 10, 14, 14));
        minBtn->setCursor(QCursor(Qt::PointingHandCursor));
        minBtn->setFocusPolicy(Qt::NoFocus);
        closeBtn = new QToolButton(WaitingForSync);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));
        closeBtn->setGeometry(QRect(938, 10, 14, 14));
        closeBtn->setCursor(QCursor(Qt::PointingHandCursor));
        closeBtn->setFocusPolicy(Qt::NoFocus);
        logoLabel = new QLabel(WaitingForSync);
        logoLabel->setObjectName(QStringLiteral("logoLabel"));
        logoLabel->setGeometry(QRect(380, 137, 231, 112));
        logoLabel->setAlignment(Qt::AlignCenter);
        textLabel = new QLabel(WaitingForSync);
        textLabel->setObjectName(QStringLiteral("textLabel"));
        textLabel->setGeometry(QRect(381, 220, 197, 29));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        textLabel->setFont(font);
        textLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        textLabel->setAlignment(Qt::AlignCenter);
        gifLabel = new QLabel(WaitingForSync);
        gifLabel->setObjectName(QStringLiteral("gifLabel"));
        gifLabel->setGeometry(QRect(465, 301, 39, 39));
        loadingLabel = new QLabel(WaitingForSync);
        loadingLabel->setObjectName(QStringLiteral("loadingLabel"));
        loadingLabel->setGeometry(QRect(330, 350, 300, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(9);
        loadingLabel->setFont(font1);
        loadingLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        loadingLabel->setAlignment(Qt::AlignCenter);
        versionLabel_2 = new QLabel(WaitingForSync);
        versionLabel_2->setObjectName(QStringLiteral("versionLabel_2"));
        versionLabel_2->setGeometry(QRect(12, 10, 91, 16));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(10);
        versionLabel_2->setFont(font2);
        versionLabel_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        versionLabel = new QLabel(WaitingForSync);
        versionLabel->setObjectName(QStringLiteral("versionLabel"));
        versionLabel->setGeometry(QRect(108, 12, 81, 14));
        versionLabel->setFont(font1);
        versionLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        QWidget::setTabOrder(minBtn, closeBtn);

        retranslateUi(WaitingForSync);

        QMetaObject::connectSlotsByName(WaitingForSync);
    } // setupUi

    void retranslateUi(QWidget *WaitingForSync)
    {
        WaitingForSync->setWindowTitle(QApplication::translate("WaitingForSync", "Form", Q_NULLPTR));
        minBtn->setText(QString());
        closeBtn->setText(QString());
        logoLabel->setText(QString());
        textLabel->setText(QString());
        gifLabel->setText(QString());
        loadingLabel->setText(QApplication::translate("WaitingForSync", "Connecting to the network...", Q_NULLPTR));
        versionLabel_2->setText(QApplication::translate("WaitingForSync", "SelfSell Wallet", Q_NULLPTR));
        versionLabel->setText(QApplication::translate("WaitingForSync", "Ver.1.0.0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WaitingForSync: public Ui_WaitingForSync {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAITINGFORSYNC_H
