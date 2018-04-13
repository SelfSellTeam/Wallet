/****************************************************************************
** Meta object code from reading C++ file 'tokentransaction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tokentransaction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tokentransaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TokenTransaction_t {
    QByteArrayData data[11];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TokenTransaction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TokenTransaction_t qt_meta_stringdata_TokenTransaction = {
    {
QT_MOC_LITERAL(0, 0, 16), // "TokenTransaction"
QT_MOC_LITERAL(1, 17, 18), // "tokenTrxRequestEnd"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 20), // "connectToBlockBrower"
QT_MOC_LITERAL(4, 58, 12), // "account_addr"
QT_MOC_LITERAL(5, 71, 5), // "asset"
QT_MOC_LITERAL(6, 77, 6), // "page_n"
QT_MOC_LITERAL(7, 84, 10), // "per_page_n"
QT_MOC_LITERAL(8, 95, 7), // "block_n"
QT_MOC_LITERAL(9, 103, 13), // "httpReadyread"
QT_MOC_LITERAL(10, 117, 12) // "httpFinished"

    },
    "TokenTransaction\0tokenTrxRequestEnd\0"
    "\0connectToBlockBrower\0account_addr\0"
    "asset\0page_n\0per_page_n\0block_n\0"
    "httpReadyread\0httpFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TokenTransaction[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    5,   45,    2, 0x0a /* Public */,
       3,    4,   56,    2, 0x2a /* Public | MethodCloned */,
       3,    3,   65,    2, 0x2a /* Public | MethodCloned */,
       9,    0,   72,    2, 0x0a /* Public */,
      10,    0,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int,    4,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int,    4,    5,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TokenTransaction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TokenTransaction *_t = static_cast<TokenTransaction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tokenTrxRequestEnd(); break;
        case 1: _t->connectToBlockBrower((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 2: _t->connectToBlockBrower((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 3: _t->connectToBlockBrower((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->httpReadyread(); break;
        case 5: _t->httpFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TokenTransaction::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TokenTransaction::tokenTrxRequestEnd)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject TokenTransaction::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TokenTransaction.data,
      qt_meta_data_TokenTransaction,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TokenTransaction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TokenTransaction::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TokenTransaction.stringdata0))
        return static_cast<void*>(const_cast< TokenTransaction*>(this));
    return QObject::qt_metacast(_clname);
}

int TokenTransaction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void TokenTransaction::tokenTrxRequestEnd()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
