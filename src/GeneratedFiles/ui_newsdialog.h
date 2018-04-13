/********************************************************************************
** Form generated from reading UI file 'newsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWSDIALOG_H
#define UI_NEWSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewsDialog
{
public:
    QWidget *widget;
    QWidget *containerWidget;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *amountLabel;
    QLabel *fromLabel;
    QToolButton *nextBtn;
    QLabel *label_7;
    QLabel *toLabel;
    QLabel *numLabel;
    QLabel *label_3;
    QToolButton *closeBtn;
    QToolButton *checkBtn;

    void setupUi(QDialog *NewsDialog)
    {
        if (NewsDialog->objectName().isEmpty())
            NewsDialog->setObjectName(QStringLiteral("NewsDialog"));
        NewsDialog->resize(960, 580);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        NewsDialog->setFont(font);
        widget = new QWidget(NewsDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 960, 580));
        containerWidget = new QWidget(widget);
        containerWidget->setObjectName(QStringLiteral("containerWidget"));
        containerWidget->setGeometry(QRect(165, 110, 630, 360));
        label_2 = new QLabel(containerWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 80, 51, 20));
        label_5 = new QLabel(containerWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(90, 150, 51, 20));
        amountLabel = new QLabel(containerWidget);
        amountLabel->setObjectName(QStringLiteral("amountLabel"));
        amountLabel->setGeometry(QRect(150, 150, 151, 20));
        fromLabel = new QLabel(containerWidget);
        fromLabel->setObjectName(QStringLiteral("fromLabel"));
        fromLabel->setGeometry(QRect(150, 80, 341, 20));
        nextBtn = new QToolButton(containerWidget);
        nextBtn->setObjectName(QStringLiteral("nextBtn"));
        nextBtn->setGeometry(QRect(230, 280, 120, 36));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        nextBtn->setFont(font1);
        nextBtn->setCursor(QCursor(Qt::PointingHandCursor));
        nextBtn->setFocusPolicy(Qt::NoFocus);
        label_7 = new QLabel(containerWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(90, 185, 360, 20));
        toLabel = new QLabel(containerWidget);
        toLabel->setObjectName(QStringLiteral("toLabel"));
        toLabel->setGeometry(QRect(150, 115, 341, 20));
        numLabel = new QLabel(containerWidget);
        numLabel->setObjectName(QStringLiteral("numLabel"));
        numLabel->setGeometry(QRect(260, 40, 141, 21));
        label_3 = new QLabel(containerWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 115, 51, 20));
        closeBtn = new QToolButton(containerWidget);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));
        closeBtn->setGeometry(QRect(590, 29, 9, 9));
        closeBtn->setCursor(QCursor(Qt::PointingHandCursor));
        checkBtn = new QToolButton(containerWidget);
        checkBtn->setObjectName(QStringLiteral("checkBtn"));
        checkBtn->setGeometry(QRect(120, 240, 380, 20));
        checkBtn->setCursor(QCursor(Qt::PointingHandCursor));
        checkBtn->setStyleSheet(QStringLiteral(""));

        retranslateUi(NewsDialog);

        QMetaObject::connectSlotsByName(NewsDialog);
    } // setupUi

    void retranslateUi(QDialog *NewsDialog)
    {
        NewsDialog->setWindowTitle(QApplication::translate("NewsDialog", "Dialog", Q_NULLPTR));
        label_2->setText(QApplication::translate("NewsDialog", "From", Q_NULLPTR));
        label_5->setText(QApplication::translate("NewsDialog", "Count", Q_NULLPTR));
        amountLabel->setText(QApplication::translate("NewsDialog", "1.00 GOP", Q_NULLPTR));
        fromLabel->setText(QApplication::translate("NewsDialog", "DDSSDDSDS", Q_NULLPTR));
        nextBtn->setText(QApplication::translate("NewsDialog", "Next", Q_NULLPTR));
        label_7->setText(QApplication::translate("NewsDialog", "The transaction has been confirmed by the system", Q_NULLPTR));
        toLabel->setText(QApplication::translate("NewsDialog", "GXXXXXX", Q_NULLPTR));
        numLabel->setText(QString());
        label_3->setText(QApplication::translate("NewsDialog", "Sent", Q_NULLPTR));
        closeBtn->setText(QString());
        checkBtn->setText(QApplication::translate("NewsDialog", "For details, please refer to the corresponding billing page>>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NewsDialog: public Ui_NewsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWSDIALOG_H
