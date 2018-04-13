/****************************************************************************
** Meta object code from reading C++ file 'lockpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../lockpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lockpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LockPage_t {
    QByteArrayData data[18];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LockPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LockPage_t qt_meta_stringdata_LockPage = {
    {
QT_MOC_LITERAL(0, 0, 8), // "LockPage"
QT_MOC_LITERAL(1, 9, 6), // "unlock"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 7), // "minimum"
QT_MOC_LITERAL(4, 25, 8), // "closeGOP"
QT_MOC_LITERAL(5, 34, 4), // "tray"
QT_MOC_LITERAL(6, 39, 16), // "showShadowWidget"
QT_MOC_LITERAL(7, 56, 16), // "hideShadowWidget"
QT_MOC_LITERAL(8, 73, 20), // "on_unlockBtn_clicked"
QT_MOC_LITERAL(9, 94, 28), // "on_pwdLineEdit_returnPressed"
QT_MOC_LITERAL(10, 123, 17), // "on_minBtn_clicked"
QT_MOC_LITERAL(11, 141, 19), // "on_closeBtn_clicked"
QT_MOC_LITERAL(12, 161, 26), // "on_pwdLineEdit_textChanged"
QT_MOC_LITERAL(13, 188, 4), // "arg1"
QT_MOC_LITERAL(14, 193, 8), // "lockTime"
QT_MOC_LITERAL(15, 202, 9), // "checkLock"
QT_MOC_LITERAL(16, 212, 12), // "walletUnlock"
QT_MOC_LITERAL(17, 225, 6) // "result"

    },
    "LockPage\0unlock\0\0minimum\0closeGOP\0"
    "tray\0showShadowWidget\0hideShadowWidget\0"
    "on_unlockBtn_clicked\0on_pwdLineEdit_returnPressed\0"
    "on_minBtn_clicked\0on_closeBtn_clicked\0"
    "on_pwdLineEdit_textChanged\0arg1\0"
    "lockTime\0checkLock\0walletUnlock\0result"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LockPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    0,   85,    2, 0x06 /* Public */,
       4,    0,   86,    2, 0x06 /* Public */,
       5,    0,   87,    2, 0x06 /* Public */,
       6,    0,   88,    2, 0x06 /* Public */,
       7,    0,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    1,   94,    2, 0x08 /* Private */,
      14,    0,   97,    2, 0x08 /* Private */,
      15,    0,   98,    2, 0x08 /* Private */,
      16,    1,   99,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,

       0        // eod
};

void LockPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LockPage *_t = static_cast<LockPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->unlock(); break;
        case 1: _t->minimum(); break;
        case 2: _t->closeGOP(); break;
        case 3: _t->tray(); break;
        case 4: _t->showShadowWidget(); break;
        case 5: _t->hideShadowWidget(); break;
        case 6: _t->on_unlockBtn_clicked(); break;
        case 7: _t->on_pwdLineEdit_returnPressed(); break;
        case 8: _t->on_minBtn_clicked(); break;
        case 9: _t->on_closeBtn_clicked(); break;
        case 10: _t->on_pwdLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: { int _r = _t->lockTime();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: _t->checkLock(); break;
        case 13: _t->walletUnlock((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LockPage::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LockPage::unlock)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (LockPage::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LockPage::minimum)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (LockPage::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LockPage::closeGOP)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (LockPage::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LockPage::tray)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (LockPage::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LockPage::showShadowWidget)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (LockPage::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LockPage::hideShadowWidget)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject LockPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LockPage.data,
      qt_meta_data_LockPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LockPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LockPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LockPage.stringdata0))
        return static_cast<void*>(const_cast< LockPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int LockPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void LockPage::unlock()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void LockPage::minimum()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void LockPage::closeGOP()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void LockPage::tray()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void LockPage::showShadowWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void LockPage::hideShadowWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
