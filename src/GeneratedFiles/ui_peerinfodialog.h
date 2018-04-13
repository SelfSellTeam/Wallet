/********************************************************************************
** Form generated from reading UI file 'peerinfodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEERINFODIALOG_H
#define UI_PEERINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PeerInfoDialog
{
public:
    QWidget *widget;
    QWidget *containerWidget;
    QToolButton *refreshBtn;
    QLabel *gifLabel;
    QWidget *widget2;
    QLabel *label_3;
    QTableWidget *peerInfoTableWidget;
    QLabel *label;
    QLabel *numLabel;
    QLabel *label_4;
    QToolButton *addNodeBtn;
    QToolButton *closeBtn;
    QLabel *label_2;
    QLabel *localIPLabel;

    void setupUi(QDialog *PeerInfoDialog)
    {
        if (PeerInfoDialog->objectName().isEmpty())
            PeerInfoDialog->setObjectName(QStringLiteral("PeerInfoDialog"));
        PeerInfoDialog->resize(960, 580);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        PeerInfoDialog->setFont(font);
        PeerInfoDialog->setStyleSheet(QStringLiteral(""));
        widget = new QWidget(PeerInfoDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 960, 580));
        containerWidget = new QWidget(widget);
        containerWidget->setObjectName(QStringLiteral("containerWidget"));
        containerWidget->setGeometry(QRect(166, 56, 628, 468));
        refreshBtn = new QToolButton(containerWidget);
        refreshBtn->setObjectName(QStringLiteral("refreshBtn"));
        refreshBtn->setGeometry(QRect(560, 420, 18, 18));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(8);
        refreshBtn->setFont(font1);
        refreshBtn->setCursor(QCursor(Qt::PointingHandCursor));
        refreshBtn->setFocusPolicy(Qt::NoFocus);
        gifLabel = new QLabel(containerWidget);
        gifLabel->setObjectName(QStringLiteral("gifLabel"));
        gifLabel->setGeometry(QRect(557, 417, 23, 23));
        widget2 = new QWidget(containerWidget);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(40, 130, 521, 261));
        widget2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_3 = new QLabel(widget2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 20, 130, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        peerInfoTableWidget = new QTableWidget(widget2);
        if (peerInfoTableWidget->columnCount() < 4)
            peerInfoTableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        __qtablewidgetitem->setFont(font);
        peerInfoTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        __qtablewidgetitem1->setFont(font);
        peerInfoTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        __qtablewidgetitem2->setFont(font);
        peerInfoTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        __qtablewidgetitem3->setFont(font);
        peerInfoTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        peerInfoTableWidget->setObjectName(QStringLiteral("peerInfoTableWidget"));
        peerInfoTableWidget->setGeometry(QRect(20, 60, 480, 180));
        peerInfoTableWidget->setFocusPolicy(Qt::NoFocus);
        peerInfoTableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        peerInfoTableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        peerInfoTableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        peerInfoTableWidget->setAutoScroll(true);
        peerInfoTableWidget->setEditTriggers(QAbstractItemView::DoubleClicked);
        peerInfoTableWidget->setTabKeyNavigation(false);
        peerInfoTableWidget->setProperty("showDropIndicator", QVariant(false));
        peerInfoTableWidget->setDragDropOverwriteMode(false);
        peerInfoTableWidget->setTextElideMode(Qt::ElideRight);
        peerInfoTableWidget->setShowGrid(false);
        peerInfoTableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        peerInfoTableWidget->verticalHeader()->setVisible(false);
        peerInfoTableWidget->verticalHeader()->setCascadingSectionResizes(true);
        label = new QLabel(containerWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 20, 171, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);
        label->setStyleSheet(QStringLiteral("color: rgb(40,40,40);"));
        label->setAlignment(Qt::AlignCenter);
        numLabel = new QLabel(containerWidget);
        numLabel->setObjectName(QStringLiteral("numLabel"));
        numLabel->setGeometry(QRect(330, 80, 51, 20));
        numLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_4 = new QLabel(containerWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(200, 80, 165, 20));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        addNodeBtn = new QToolButton(containerWidget);
        addNodeBtn->setObjectName(QStringLiteral("addNodeBtn"));
        addNodeBtn->setGeometry(QRect(450, 80, 125, 25));
        addNodeBtn->setCursor(QCursor(Qt::PointingHandCursor));
        addNodeBtn->setFocusPolicy(Qt::NoFocus);
        closeBtn = new QToolButton(containerWidget);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));
        closeBtn->setGeometry(QRect(594, 29, 9, 9));
        closeBtn->setCursor(QCursor(Qt::PointingHandCursor));
        closeBtn->setFocusPolicy(Qt::NoFocus);
        label_2 = new QLabel(containerWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 80, 61, 20));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        localIPLabel = new QLabel(containerWidget);
        localIPLabel->setObjectName(QStringLiteral("localIPLabel"));
        localIPLabel->setGeometry(QRect(90, 80, 151, 20));
        localIPLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        retranslateUi(PeerInfoDialog);

        QMetaObject::connectSlotsByName(PeerInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *PeerInfoDialog)
    {
        PeerInfoDialog->setWindowTitle(QApplication::translate("PeerInfoDialog", "Dialog", Q_NULLPTR));
        refreshBtn->setText(QString());
        gifLabel->setText(QString());
        label_3->setText(QApplication::translate("PeerInfoDialog", "Neighbor node list", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = peerInfoTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("PeerInfoDialog", "IP", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = peerInfoTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("PeerInfoDialog", "Connection time", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = peerInfoTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("PeerInfoDialog", "Duration", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = peerInfoTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("PeerInfoDialog", "Remark", Q_NULLPTR));
        label->setText(QApplication::translate("PeerInfoDialog", "Node connection information", Q_NULLPTR));
        numLabel->setText(QString());
        label_4->setText(QApplication::translate("PeerInfoDialog", "Current num of connections:", Q_NULLPTR));
        addNodeBtn->setText(QApplication::translate("PeerInfoDialog", "Manually add nodes", Q_NULLPTR));
        closeBtn->setText(QString());
        label_2->setText(QApplication::translate("PeerInfoDialog", "Local IP:", Q_NULLPTR));
        localIPLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PeerInfoDialog: public Ui_PeerInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEERINFODIALOG_H
