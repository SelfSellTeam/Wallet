/****************************************************************************
** Meta object code from reading C++ file 'transferpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../transferpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transferpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TransferPage_t {
    QByteArrayData data[25];
    char stringdata0[445];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TransferPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TransferPage_t qt_meta_stringdata_TransferPage = {
    {
QT_MOC_LITERAL(0, 0, 12), // "TransferPage"
QT_MOC_LITERAL(1, 13, 14), // "accountChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 16), // "showShadowWidget"
QT_MOC_LITERAL(4, 46, 16), // "hideShadowWidget"
QT_MOC_LITERAL(5, 63, 15), // "showAccountPage"
QT_MOC_LITERAL(6, 79, 4), // "back"
QT_MOC_LITERAL(7, 84, 7), // "refresh"
QT_MOC_LITERAL(8, 92, 15), // "tokenTransferTo"
QT_MOC_LITERAL(9, 108, 6), // "result"
QT_MOC_LITERAL(10, 115, 38), // "on_accountComboBox_currentInd..."
QT_MOC_LITERAL(11, 154, 4), // "arg1"
QT_MOC_LITERAL(12, 159, 18), // "on_sendBtn_clicked"
QT_MOC_LITERAL(13, 178, 29), // "on_amountLineEdit_textChanged"
QT_MOC_LITERAL(14, 208, 29), // "on_sendtoLineEdit_textChanged"
QT_MOC_LITERAL(15, 238, 24), // "on_addContactBtn_clicked"
QT_MOC_LITERAL(16, 263, 15), // "contactSelected"
QT_MOC_LITERAL(17, 279, 23), // "on_voteCheckBox_clicked"
QT_MOC_LITERAL(18, 303, 18), // "on_infoBtn_clicked"
QT_MOC_LITERAL(19, 322, 26), // "on_feeLineEdit_textChanged"
QT_MOC_LITERAL(20, 349, 30), // "on_messageLineEdit_textChanged"
QT_MOC_LITERAL(21, 380, 18), // "on_copyBtn_clicked"
QT_MOC_LITERAL(22, 399, 23), // "walletTransferToAddress"
QT_MOC_LITERAL(23, 423, 2), // "id"
QT_MOC_LITERAL(24, 426, 18) // "walletCheckAddress"

    },
    "TransferPage\0accountChanged\0\0"
    "showShadowWidget\0hideShadowWidget\0"
    "showAccountPage\0back\0refresh\0"
    "tokenTransferTo\0result\0"
    "on_accountComboBox_currentIndexChanged\0"
    "arg1\0on_sendBtn_clicked\0"
    "on_amountLineEdit_textChanged\0"
    "on_sendtoLineEdit_textChanged\0"
    "on_addContactBtn_clicked\0contactSelected\0"
    "on_voteCheckBox_clicked\0on_infoBtn_clicked\0"
    "on_feeLineEdit_textChanged\0"
    "on_messageLineEdit_textChanged\0"
    "on_copyBtn_clicked\0walletTransferToAddress\0"
    "id\0walletCheckAddress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransferPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  114,    2, 0x06 /* Public */,
       3,    0,  117,    2, 0x06 /* Public */,
       4,    0,  118,    2, 0x06 /* Public */,
       5,    1,  119,    2, 0x06 /* Public */,
       6,    0,  122,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  123,    2, 0x0a /* Public */,
       8,    1,  124,    2, 0x0a /* Public */,
      10,    1,  127,    2, 0x08 /* Private */,
      12,    0,  130,    2, 0x08 /* Private */,
      13,    1,  131,    2, 0x08 /* Private */,
      14,    1,  134,    2, 0x08 /* Private */,
      15,    0,  137,    2, 0x08 /* Private */,
      16,    1,  138,    2, 0x08 /* Private */,
      17,    0,  141,    2, 0x08 /* Private */,
      18,    0,  142,    2, 0x08 /* Private */,
      19,    1,  143,    2, 0x08 /* Private */,
      20,    1,  146,    2, 0x08 /* Private */,
      21,    0,  149,    2, 0x08 /* Private */,
      22,    2,  150,    2, 0x08 /* Private */,
      24,    1,  155,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   23,    9,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void TransferPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TransferPage *_t = static_cast<TransferPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accountChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->showShadowWidget(); break;
        case 2: _t->hideShadowWidget(); break;
        case 3: _t->showAccountPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->back(); break;
        case 5: _t->refresh(); break;
        case 6: _t->tokenTransferTo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->on_accountComboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_sendBtn_clicked(); break;
        case 9: _t->on_amountLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_sendtoLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->on_addContactBtn_clicked(); break;
        case 12: _t->contactSelected((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->on_voteCheckBox_clicked(); break;
        case 14: _t->on_infoBtn_clicked(); break;
        case 15: _t->on_feeLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->on_messageLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->on_copyBtn_clicked(); break;
        case 18: _t->walletTransferToAddress((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 19: _t->walletCheckAddress((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TransferPage::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TransferPage::accountChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TransferPage::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TransferPage::showShadowWidget)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TransferPage::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TransferPage::hideShadowWidget)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (TransferPage::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TransferPage::showAccountPage)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (TransferPage::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TransferPage::back)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject TransferPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TransferPage.data,
      qt_meta_data_TransferPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TransferPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransferPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TransferPage.stringdata0))
        return static_cast<void*>(const_cast< TransferPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int TransferPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void TransferPage::accountChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TransferPage::showShadowWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void TransferPage::hideShadowWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void TransferPage::showAccountPage(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TransferPage::back()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
