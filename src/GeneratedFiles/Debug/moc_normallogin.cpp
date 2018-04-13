/****************************************************************************
** Meta object code from reading C++ file 'normallogin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../normallogin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'normallogin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NormalLogin_t {
    QByteArrayData data[18];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NormalLogin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NormalLogin_t qt_meta_stringdata_NormalLogin = {
    {
QT_MOC_LITERAL(0, 0, 11), // "NormalLogin"
QT_MOC_LITERAL(1, 12, 5), // "login"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 7), // "minimum"
QT_MOC_LITERAL(4, 27, 8), // "closeGOP"
QT_MOC_LITERAL(5, 36, 4), // "tray"
QT_MOC_LITERAL(6, 41, 16), // "showShadowWidget"
QT_MOC_LITERAL(7, 58, 16), // "hideShadowWidget"
QT_MOC_LITERAL(8, 75, 19), // "on_enterBtn_clicked"
QT_MOC_LITERAL(9, 95, 28), // "on_pwdLineEdit_returnPressed"
QT_MOC_LITERAL(10, 124, 17), // "on_minBtn_clicked"
QT_MOC_LITERAL(11, 142, 19), // "on_closeBtn_clicked"
QT_MOC_LITERAL(12, 162, 26), // "on_pwdLineEdit_textChanged"
QT_MOC_LITERAL(13, 189, 4), // "arg1"
QT_MOC_LITERAL(14, 194, 12), // "pwdConfirmed"
QT_MOC_LITERAL(15, 207, 6), // "result"
QT_MOC_LITERAL(16, 214, 8), // "lockTime"
QT_MOC_LITERAL(17, 223, 9) // "checkLock"

    },
    "NormalLogin\0login\0\0minimum\0closeGOP\0"
    "tray\0showShadowWidget\0hideShadowWidget\0"
    "on_enterBtn_clicked\0on_pwdLineEdit_returnPressed\0"
    "on_minBtn_clicked\0on_closeBtn_clicked\0"
    "on_pwdLineEdit_textChanged\0arg1\0"
    "pwdConfirmed\0result\0lockTime\0checkLock"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NormalLogin[] = {

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
      14,    1,   97,    2, 0x08 /* Private */,
      16,    0,  100,    2, 0x08 /* Private */,
      17,    0,  101,    2, 0x08 /* Private */,

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
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Int,
    QMetaType::Void,

       0        // eod
};

void NormalLogin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NormalLogin *_t = static_cast<NormalLogin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->login(); break;
        case 1: _t->minimum(); break;
        case 2: _t->closeGOP(); break;
        case 3: _t->tray(); break;
        case 4: _t->showShadowWidget(); break;
        case 5: _t->hideShadowWidget(); break;
        case 6: _t->on_enterBtn_clicked(); break;
        case 7: _t->on_pwdLineEdit_returnPressed(); break;
        case 8: _t->on_minBtn_clicked(); break;
        case 9: _t->on_closeBtn_clicked(); break;
        case 10: _t->on_pwdLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->pwdConfirmed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: { int _r = _t->lockTime();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: _t->checkLock(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NormalLogin::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NormalLogin::login)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (NormalLogin::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NormalLogin::minimum)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (NormalLogin::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NormalLogin::closeGOP)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (NormalLogin::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NormalLogin::tray)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (NormalLogin::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NormalLogin::showShadowWidget)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (NormalLogin::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NormalLogin::hideShadowWidget)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject NormalLogin::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NormalLogin.data,
      qt_meta_data_NormalLogin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NormalLogin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NormalLogin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NormalLogin.stringdata0))
        return static_cast<void*>(const_cast< NormalLogin*>(this));
    return QWidget::qt_metacast(_clname);
}

int NormalLogin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void NormalLogin::login()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void NormalLogin::minimum()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void NormalLogin::closeGOP()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void NormalLogin::tray()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void NormalLogin::showShadowWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void NormalLogin::hideShadowWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
