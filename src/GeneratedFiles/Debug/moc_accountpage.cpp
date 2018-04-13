/****************************************************************************
** Meta object code from reading C++ file 'accountpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../accountpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accountpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AccountPage_t {
    QByteArrayData data[25];
    char stringdata0[470];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AccountPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AccountPage_t qt_meta_stringdata_AccountPage = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AccountPage"
QT_MOC_LITERAL(1, 12, 4), // "back"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 15), // "showUpgradePage"
QT_MOC_LITERAL(4, 34, 14), // "accountChanged"
QT_MOC_LITERAL(5, 49, 16), // "showShadowWidget"
QT_MOC_LITERAL(6, 66, 16), // "hideShadowWidget"
QT_MOC_LITERAL(7, 83, 21), // "showApplyDelegatePage"
QT_MOC_LITERAL(8, 105, 7), // "refresh"
QT_MOC_LITERAL(9, 113, 12), // "retranslator"
QT_MOC_LITERAL(10, 126, 21), // "displayTokenTrxVector"
QT_MOC_LITERAL(11, 148, 18), // "on_copyBtn_clicked"
QT_MOC_LITERAL(12, 167, 38), // "on_accountComboBox_currentInd..."
QT_MOC_LITERAL(13, 206, 4), // "arg1"
QT_MOC_LITERAL(14, 211, 46), // "on_transactionTypeComboBox_cu..."
QT_MOC_LITERAL(15, 258, 5), // "index"
QT_MOC_LITERAL(16, 264, 45), // "on_accountTransactionsTableWi..."
QT_MOC_LITERAL(17, 310, 3), // "row"
QT_MOC_LITERAL(18, 314, 6), // "column"
QT_MOC_LITERAL(19, 321, 21), // "on_prePageBtn_clicked"
QT_MOC_LITERAL(20, 343, 22), // "on_nextPageBtn_clicked"
QT_MOC_LITERAL(21, 366, 31), // "on_pageLineEdit_editingFinished"
QT_MOC_LITERAL(22, 398, 26), // "on_pageLineEdit_textEdited"
QT_MOC_LITERAL(23, 425, 7), // "balance"
QT_MOC_LITERAL(24, 433, 36) // "walletTransactionHistorySplit..."

    },
    "AccountPage\0back\0\0showUpgradePage\0"
    "accountChanged\0showShadowWidget\0"
    "hideShadowWidget\0showApplyDelegatePage\0"
    "refresh\0retranslator\0displayTokenTrxVector\0"
    "on_copyBtn_clicked\0"
    "on_accountComboBox_currentIndexChanged\0"
    "arg1\0on_transactionTypeComboBox_currentIndexChanged\0"
    "index\0on_accountTransactionsTableWidget_cellClicked\0"
    "row\0column\0on_prePageBtn_clicked\0"
    "on_nextPageBtn_clicked\0"
    "on_pageLineEdit_editingFinished\0"
    "on_pageLineEdit_textEdited\0balance\0"
    "walletTransactionHistorySpliteWithId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AccountPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x06 /* Public */,
       3,    1,  110,    2, 0x06 /* Public */,
       4,    1,  113,    2, 0x06 /* Public */,
       5,    0,  116,    2, 0x06 /* Public */,
       6,    0,  117,    2, 0x06 /* Public */,
       7,    1,  118,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,  121,    2, 0x0a /* Public */,
       9,    0,  122,    2, 0x0a /* Public */,
      10,    0,  123,    2, 0x0a /* Public */,
      11,    0,  124,    2, 0x08 /* Private */,
      12,    1,  125,    2, 0x08 /* Private */,
      14,    1,  128,    2, 0x08 /* Private */,
      16,    2,  131,    2, 0x08 /* Private */,
      19,    0,  136,    2, 0x08 /* Private */,
      20,    0,  137,    2, 0x08 /* Private */,
      21,    0,  138,    2, 0x08 /* Private */,
      22,    1,  139,    2, 0x08 /* Private */,
      23,    0,  142,    2, 0x08 /* Private */,
      24,    2,  143,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,

       0        // eod
};

void AccountPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AccountPage *_t = static_cast<AccountPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->back(); break;
        case 1: _t->showUpgradePage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->accountChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->showShadowWidget(); break;
        case 4: _t->hideShadowWidget(); break;
        case 5: _t->showApplyDelegatePage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->refresh(); break;
        case 7: _t->retranslator(); break;
        case 8: _t->displayTokenTrxVector(); break;
        case 9: _t->on_copyBtn_clicked(); break;
        case 10: _t->on_accountComboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->on_transactionTypeComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_accountTransactionsTableWidget_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->on_prePageBtn_clicked(); break;
        case 14: _t->on_nextPageBtn_clicked(); break;
        case 15: _t->on_pageLineEdit_editingFinished(); break;
        case 16: _t->on_pageLineEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->balance(); break;
        case 18: _t->walletTransactionHistorySpliteWithId((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AccountPage::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AccountPage::back)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AccountPage::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AccountPage::showUpgradePage)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AccountPage::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AccountPage::accountChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (AccountPage::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AccountPage::showShadowWidget)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (AccountPage::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AccountPage::hideShadowWidget)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (AccountPage::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AccountPage::showApplyDelegatePage)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject AccountPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AccountPage.data,
      qt_meta_data_AccountPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AccountPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AccountPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AccountPage.stringdata0))
        return static_cast<void*>(const_cast< AccountPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int AccountPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void AccountPage::back()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void AccountPage::showUpgradePage(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AccountPage::accountChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AccountPage::showShadowWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void AccountPage::hideShadowWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void AccountPage::showApplyDelegatePage(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
