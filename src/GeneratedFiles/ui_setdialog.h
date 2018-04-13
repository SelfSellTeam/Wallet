/********************************************************************************
** Form generated from reading UI file 'setdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETDIALOG_H
#define UI_SETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetDialog
{
public:
    QWidget *widget;
    QWidget *containerWidget;
    QLabel *label;
    QToolButton *generalBtn;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QToolButton *saveBtn;
    QLabel *label_2;
    QComboBox *languageComboBox;
    QCheckBox *nolockCheckBox;
    QLabel *label_5;
    QSpinBox *lockTimeSpinBox;
    QLabel *label_6;
    QLabel *label_3;
    QCheckBox *voteCheckBox;
    QCheckBox *minimizeCheckBox;
    QCheckBox *closeCheckBox;
    QWidget *page_2;
    QLineEdit *newPwdLineEdit;
    QLineEdit *confirmPwdLineEdit;
    QToolButton *confirmBtn;
    QLabel *label_7;
    QLabel *tipLabel3;
    QLabel *label_8;
    QLabel *tipLabel2;
    QLabel *label_9;
    QLabel *tipLabel;
    QLineEdit *oldPwdLineEdit;
    QWidget *page_3;
    QToolButton *resyncBtn;
    QToolButton *scanBtn;
    QLabel *linkLabel;
    QPushButton *linkBtn;
    QToolButton *closeBtn;
    QToolButton *safeBtn;
    QToolButton *networkBtn;

    void setupUi(QDialog *SetDialog)
    {
        if (SetDialog->objectName().isEmpty())
            SetDialog->setObjectName(QStringLiteral("SetDialog"));
        SetDialog->resize(960, 580);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        SetDialog->setFont(font);
        SetDialog->setStyleSheet(QStringLiteral(""));
        widget = new QWidget(SetDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 960, 580));
        containerWidget = new QWidget(widget);
        containerWidget->setObjectName(QStringLiteral("containerWidget"));
        containerWidget->setGeometry(QRect(166, 58, 628, 468));
        containerWidget->setFocusPolicy(Qt::ClickFocus);
        label = new QLabel(containerWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 10, 91, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color: rgb(40,40,40);"));
        label->setAlignment(Qt::AlignCenter);
        generalBtn = new QToolButton(containerWidget);
        generalBtn->setObjectName(QStringLiteral("generalBtn"));
        generalBtn->setGeometry(QRect(26, 33, 74, 32));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(13);
        font2.setBold(true);
        font2.setWeight(75);
        generalBtn->setFont(font2);
        generalBtn->setCursor(QCursor(Qt::PointingHandCursor));
        generalBtn->setStyleSheet(QStringLiteral(""));
        stackedWidget = new QStackedWidget(containerWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 70, 628, 398));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        saveBtn = new QToolButton(page);
        saveBtn->setObjectName(QStringLiteral("saveBtn"));
        saveBtn->setGeometry(QRect(255, 297, 120, 36));
        saveBtn->setFont(font);
        saveBtn->setCursor(QCursor(Qt::PointingHandCursor));
        saveBtn->setFocusPolicy(Qt::NoFocus);
        saveBtn->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(72, 40, 230, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(11);
        label_2->setFont(font3);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        languageComboBox = new QComboBox(page);
        languageComboBox->setObjectName(QStringLiteral("languageComboBox"));
        languageComboBox->setGeometry(QRect(245, 170, 109, 22));
        languageComboBox->setFont(font);
        languageComboBox->setFocusPolicy(Qt::NoFocus);
        languageComboBox->setStyleSheet(QStringLiteral(""));
        nolockCheckBox = new QCheckBox(page);
        nolockCheckBox->setObjectName(QStringLiteral("nolockCheckBox"));
        nolockCheckBox->setGeometry(QRect(477, 45, 101, 21));
        nolockCheckBox->setFont(font3);
        nolockCheckBox->setCursor(QCursor(Qt::PointingHandCursor));
        nolockCheckBox->setFocusPolicy(Qt::NoFocus);
        label_5 = new QLabel(page);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(115, 120, 120, 21));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(9);
        label_5->setFont(font4);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lockTimeSpinBox = new QSpinBox(page);
        lockTimeSpinBox->setObjectName(QStringLiteral("lockTimeSpinBox"));
        lockTimeSpinBox->setGeometry(QRect(312, 40, 108, 30));
        lockTimeSpinBox->setFont(font);
        lockTimeSpinBox->setFocusPolicy(Qt::ClickFocus);
        lockTimeSpinBox->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lockTimeSpinBox->setReadOnly(false);
        lockTimeSpinBox->setMinimum(0);
        lockTimeSpinBox->setMaximum(60);
        lockTimeSpinBox->setValue(5);
        label_6 = new QLabel(page);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(64, 170, 161, 20));
        label_6->setFont(font3);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(427, 47, 31, 16));
        label_3->setFont(font3);
        voteCheckBox = new QCheckBox(page);
        voteCheckBox->setObjectName(QStringLiteral("voteCheckBox"));
        voteCheckBox->setGeometry(QRect(255, 120, 261, 23));
        voteCheckBox->setFont(font4);
        voteCheckBox->setCursor(QCursor(Qt::PointingHandCursor));
        voteCheckBox->setFocusPolicy(Qt::NoFocus);
        minimizeCheckBox = new QCheckBox(page);
        minimizeCheckBox->setObjectName(QStringLiteral("minimizeCheckBox"));
        minimizeCheckBox->setGeometry(QRect(255, 220, 171, 21));
        minimizeCheckBox->setFont(font4);
        minimizeCheckBox->setCursor(QCursor(Qt::PointingHandCursor));
        minimizeCheckBox->setFocusPolicy(Qt::NoFocus);
        closeCheckBox = new QCheckBox(page);
        closeCheckBox->setObjectName(QStringLiteral("closeCheckBox"));
        closeCheckBox->setGeometry(QRect(255, 250, 220, 21));
        closeCheckBox->setFont(font4);
        closeCheckBox->setCursor(QCursor(Qt::PointingHandCursor));
        closeCheckBox->setFocusPolicy(Qt::NoFocus);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        newPwdLineEdit = new QLineEdit(page_2);
        newPwdLineEdit->setObjectName(QStringLiteral("newPwdLineEdit"));
        newPwdLineEdit->setGeometry(QRect(225, 105, 195, 28));
        newPwdLineEdit->setFont(font);
        newPwdLineEdit->setContextMenuPolicy(Qt::DefaultContextMenu);
        newPwdLineEdit->setEchoMode(QLineEdit::Password);
        confirmPwdLineEdit = new QLineEdit(page_2);
        confirmPwdLineEdit->setObjectName(QStringLiteral("confirmPwdLineEdit"));
        confirmPwdLineEdit->setGeometry(QRect(225, 162, 195, 28));
        confirmPwdLineEdit->setFont(font);
        confirmPwdLineEdit->setContextMenuPolicy(Qt::DefaultContextMenu);
        confirmPwdLineEdit->setEchoMode(QLineEdit::Password);
        confirmBtn = new QToolButton(page_2);
        confirmBtn->setObjectName(QStringLiteral("confirmBtn"));
        confirmBtn->setGeometry(QRect(232, 238, 120, 36));
        confirmBtn->setCursor(QCursor(Qt::PointingHandCursor));
        confirmBtn->setFocusPolicy(Qt::NoFocus);
        label_7 = new QLabel(page_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(90, 167, 120, 16));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font5.setPointSize(11);
        font5.setStyleStrategy(QFont::PreferDefault);
        label_7->setFont(font5);
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        tipLabel3 = new QLabel(page_2);
        tipLabel3->setObjectName(QStringLiteral("tipLabel3"));
        tipLabel3->setGeometry(QRect(430, 53, 151, 16));
        QFont font6;
        font6.setPointSize(11);
        tipLabel3->setFont(font6);
        tipLabel3->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        label_8 = new QLabel(page_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(69, 53, 141, 20));
        label_8->setFont(font5);
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        tipLabel2 = new QLabel(page_2);
        tipLabel2->setObjectName(QStringLiteral("tipLabel2"));
        tipLabel2->setGeometry(QRect(430, 167, 151, 16));
        tipLabel2->setFont(font6);
        tipLabel2->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        label_9 = new QLabel(page_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(100, 110, 110, 16));
        label_9->setFont(font5);
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        tipLabel = new QLabel(page_2);
        tipLabel->setObjectName(QStringLiteral("tipLabel"));
        tipLabel->setGeometry(QRect(430, 110, 151, 16));
        tipLabel->setFont(font6);
        tipLabel->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        oldPwdLineEdit = new QLineEdit(page_2);
        oldPwdLineEdit->setObjectName(QStringLiteral("oldPwdLineEdit"));
        oldPwdLineEdit->setGeometry(QRect(225, 48, 195, 28));
        oldPwdLineEdit->setFont(font);
        oldPwdLineEdit->setContextMenuPolicy(Qt::DefaultContextMenu);
        oldPwdLineEdit->setEchoMode(QLineEdit::Password);
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        resyncBtn = new QToolButton(page_3);
        resyncBtn->setObjectName(QStringLiteral("resyncBtn"));
        resyncBtn->setGeometry(QRect(177, 170, 120, 36));
        resyncBtn->setCursor(QCursor(Qt::PointingHandCursor));
        resyncBtn->setFocusPolicy(Qt::NoFocus);
        scanBtn = new QToolButton(page_3);
        scanBtn->setObjectName(QStringLiteral("scanBtn"));
        scanBtn->setGeometry(QRect(334, 170, 120, 36));
        scanBtn->setCursor(QCursor(Qt::PointingHandCursor));
        scanBtn->setFocusPolicy(Qt::NoFocus);
        linkLabel = new QLabel(page_3);
        linkLabel->setObjectName(QStringLiteral("linkLabel"));
        linkLabel->setGeometry(QRect(176, 100, 121, 20));
        linkLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        linkBtn = new QPushButton(page_3);
        linkBtn->setObjectName(QStringLiteral("linkBtn"));
        linkBtn->setGeometry(QRect(297, 97, 120, 24));
        linkBtn->setCursor(QCursor(Qt::PointingHandCursor));
        linkBtn->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"text-decoration: underline;\n"
"color: rgb(64, 154, 255);\n"
"background:transparent;"));
        stackedWidget->addWidget(page_3);
        closeBtn = new QToolButton(containerWidget);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));
        closeBtn->setGeometry(QRect(594, 29, 9, 9));
        closeBtn->setCursor(QCursor(Qt::PointingHandCursor));
        closeBtn->setFocusPolicy(Qt::NoFocus);
        safeBtn = new QToolButton(containerWidget);
        safeBtn->setObjectName(QStringLiteral("safeBtn"));
        safeBtn->setGeometry(QRect(98, 33, 74, 32));
        QFont font7;
        font7.setPointSize(13);
        font7.setBold(true);
        font7.setWeight(75);
        safeBtn->setFont(font7);
        safeBtn->setCursor(QCursor(Qt::PointingHandCursor));
        safeBtn->setStyleSheet(QStringLiteral(""));
        networkBtn = new QToolButton(containerWidget);
        networkBtn->setObjectName(QStringLiteral("networkBtn"));
        networkBtn->setGeometry(QRect(170, 33, 74, 32));
        networkBtn->setFont(font7);
        networkBtn->setCursor(QCursor(Qt::PointingHandCursor));
        networkBtn->setStyleSheet(QStringLiteral(""));
        QWidget::setTabOrder(oldPwdLineEdit, newPwdLineEdit);
        QWidget::setTabOrder(newPwdLineEdit, confirmPwdLineEdit);
        QWidget::setTabOrder(confirmPwdLineEdit, lockTimeSpinBox);
        QWidget::setTabOrder(lockTimeSpinBox, generalBtn);
        QWidget::setTabOrder(generalBtn, networkBtn);
        QWidget::setTabOrder(networkBtn, linkBtn);
        QWidget::setTabOrder(linkBtn, safeBtn);

        retranslateUi(SetDialog);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(SetDialog);
    } // setupUi

    void retranslateUi(QDialog *SetDialog)
    {
        SetDialog->setWindowTitle(QApplication::translate("SetDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("SetDialog", "Settings", Q_NULLPTR));
        generalBtn->setText(QApplication::translate("SetDialog", "General", Q_NULLPTR));
        saveBtn->setText(QString());
        label_2->setText(QApplication::translate("SetDialog", "Wallet will be locked exceeding", Q_NULLPTR));
        languageComboBox->clear();
        languageComboBox->insertItems(0, QStringList()
         << QApplication::translate("SetDialog", "English", Q_NULLPTR)
         << QApplication::translate("SetDialog", "\347\256\200\344\275\223\344\270\255\346\226\207", Q_NULLPTR)
        );
        nolockCheckBox->setText(QApplication::translate("SetDialog", "Not lock", Q_NULLPTR));
        label_5->setText(QApplication::translate("SetDialog", "Default vote setting", Q_NULLPTR));
        label_6->setText(QApplication::translate("SetDialog", "Preferred Language", Q_NULLPTR));
        label_3->setText(QApplication::translate("SetDialog", "min", Q_NULLPTR));
        voteCheckBox->setText(QApplication::translate("SetDialog", "Transfer the default check vote", Q_NULLPTR));
        minimizeCheckBox->setText(QApplication::translate("SetDialog", "Minimize the tray", Q_NULLPTR));
        closeCheckBox->setText(QApplication::translate("SetDialog", "Click the Close button to minimize", Q_NULLPTR));
        confirmBtn->setText(QString());
        label_7->setText(QApplication::translate("SetDialog", "Verify password:", Q_NULLPTR));
        tipLabel3->setText(QString());
        label_8->setText(QApplication::translate("SetDialog", "Current password:", Q_NULLPTR));
        tipLabel2->setText(QString());
        label_9->setText(QApplication::translate("SetDialog", "New password:", Q_NULLPTR));
        tipLabel->setText(QString());
        resyncBtn->setText(QApplication::translate("SetDialog", "Resyn the blocks", Q_NULLPTR));
        scanBtn->setText(QApplication::translate("SetDialog", "scan", Q_NULLPTR));
        linkLabel->setText(QApplication::translate("SetDialog", "Official website:", Q_NULLPTR));
        linkBtn->setText(QApplication::translate("SetDialog", "www.selfsell.com", Q_NULLPTR));
        closeBtn->setText(QString());
        safeBtn->setText(QApplication::translate("SetDialog", "Safety", Q_NULLPTR));
        networkBtn->setText(QApplication::translate("SetDialog", "About", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SetDialog: public Ui_SetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETDIALOG_H
