#ifndef FRAME_H
#define FRAME_H
#include <QFrame>
#include <QWidget>
#include <QMap>
#include <QTranslator>
#include <QSystemTrayIcon>

#ifdef WIN32 
#include "windows.h"
#endif //zxlwin

namespace Ui {
   class Frame;
}

class FirstLogin;
class NormalLogin;
class MainPage;
class AccountPage;
class TransferPage;
class BottomBar;
class LockPage;
class DelegatePage;
class TitleBar;
class QMenu;
class WaitingForSync;
class FunctionBar;
class ContactPage;
class UpgradePage;
class ApplyDelegatePage;
class SelectGopPathWidget;
class ShowBottomBarWidget;
class ShadowWidget;

class Frame:public QFrame
{
    Q_OBJECT
public:
    Frame();
    ~Frame();

protected:
    void mousePressEvent(QMouseEvent*event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *);
	void updataView();

public slots:
    void refresh();
    void autoRefresh();
    void shadowWidgetShow();
    void shadowWidgetHide();
    void blockchainStarted();
    void setLanguage(QString);
    void syncFinished();

	void openWallet(QString result);
	void walletListAccounts(QString result);
	void walletAccountBalance(QString result);
	void walletLock(QString result);
	void refreshCombobox();

signals:
    void started();
    void delegateListUpdated();

private slots:
    void alreadyLogin();
    void showAccountPage(QString);
    void showTransferPage(QString);
    void showLockPage();
    void autoLock();
    void autoUpdate();
    void unlock();
    void updateTimer();
    void showDelegatePage();
    void settingSaved();
    void privateKeyImported();

    void jsonDataUpdated(QString id);

    void showMainPage();
    void showTransferPage();
    void showContactPage();
    void showUpgradePage(QString);
    void showApplyDelegatePage(QString name);
    void showTransferPageWithAddress(QString);
    void showWaittingForSyncWidget();
	void showSelectAchainPathWidget();
		
    void iconIsActived(QSystemTrayIcon::ActivationReason reason);
    void showNormalAndActive();

    void rebuild();
    void scan();

	void tokenQueryBalance(QString);
	void tokenTransferTo(QString);

 //   void newAccount(QString name);

private:
    bool mouse_press;
    QPoint move_point;
    SelectGopPathWidget*   selectGopPathWidget;
    FirstLogin* firstLogin;
    NormalLogin* normalLogin;
    MainPage*   mainPage;
    AccountPage* accountPage;
    TransferPage* transferPage;
    BottomBar* bottomBar;
    QWidget* centralWidget;
    LockPage*  lockPage;
    QTimer* timer;
    QTimer* timerUpdate;
    TitleBar* titleBar;
    QString lastPage;
    QString currentAccount;
    WaitingForSync* waitingForSync;
    int currentPageNum;  //  0:mainPage   1:accountPage  2:delegatePgae  3:transferPage    4:contactPage
                         //   6:   7:upgradePage    8:applyDelegatePage
    ShadowWidget* shadowWidget;
    QSystemTrayIcon* trayIcon;
    void createTrayIconActions();
    void retranslateTrayIconUi();
    void createTrayIcon();
    QAction *minimizeAction;
    QAction *restoreAction;
    QAction *quitAction;
    QMenu *trayIconMenu;
    QMenu *trayIconMenuEmpty;//zxlrun
    ShowBottomBarWidget* showBottomBarWidget;

#ifdef WIN32
    RECT rtConfined;   // 由于定义了 framelesswindowhint 为了不让鼠标拖动时能移到任务栏下  //zxlwin
    RECT rtDefault;  //zxlwin
#endif // WIN32

    void  getAccountInfo();
    void startTimerForAutoRefresh();      // 自动刷新
    QTimer* timerForAutoRefresh;
    FunctionBar* functionBar;
    void closeCurrentPage();
    bool eventFilter(QObject *watched, QEvent *e);
    void closeEvent(QCloseEvent* e);
    void init();

    void runUpdate();

    ContactPage* contactPage;
    UpgradePage* upgradePage;
    ApplyDelegatePage* applyDelegatePage;

    QTranslator translator;         //  选择语言
    QTranslator menuTranslator;     //  右键菜单语言
    QTranslator translatorForTextBrowser;   // QTextBrowser的右键菜单翻译

};


#endif // FRAME_H
