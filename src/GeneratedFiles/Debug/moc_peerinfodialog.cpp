/****************************************************************************
** Meta object code from reading C++ file 'peerinfodialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../peerinfodialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'peerinfodialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PeerInfoDialog_t {
    QByteArrayData data[15];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PeerInfoDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PeerInfoDialog_t qt_meta_stringdata_PeerInfoDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PeerInfoDialog"
QT_MOC_LITERAL(1, 15, 21), // "on_refreshBtn_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 15), // "jsonDataUpdated"
QT_MOC_LITERAL(4, 54, 2), // "id"
QT_MOC_LITERAL(5, 57, 19), // "on_closeBtn_clicked"
QT_MOC_LITERAL(6, 77, 21), // "on_addNodeBtn_clicked"
QT_MOC_LITERAL(7, 99, 11), // "gifPlayOnce"
QT_MOC_LITERAL(8, 111, 3), // "num"
QT_MOC_LITERAL(9, 115, 7), // "refresh"
QT_MOC_LITERAL(10, 123, 11), // "stopRefresh"
QT_MOC_LITERAL(11, 135, 12), // "startRefresh"
QT_MOC_LITERAL(12, 148, 13), // "setBlockOrNot"
QT_MOC_LITERAL(13, 162, 2), // "ip"
QT_MOC_LITERAL(14, 165, 10) // "blockOrNot"

    },
    "PeerInfoDialog\0on_refreshBtn_clicked\0"
    "\0jsonDataUpdated\0id\0on_closeBtn_clicked\0"
    "on_addNodeBtn_clicked\0gifPlayOnce\0num\0"
    "refresh\0stopRefresh\0startRefresh\0"
    "setBlockOrNot\0ip\0blockOrNot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PeerInfoDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    1,   60,    2, 0x08 /* Private */,
       5,    0,   63,    2, 0x08 /* Private */,
       6,    0,   64,    2, 0x08 /* Private */,
       7,    1,   65,    2, 0x08 /* Private */,
       9,    0,   68,    2, 0x08 /* Private */,
      10,    0,   69,    2, 0x08 /* Private */,
      11,    0,   70,    2, 0x08 /* Private */,
      12,    2,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   13,   14,

       0        // eod
};

void PeerInfoDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PeerInfoDialog *_t = static_cast<PeerInfoDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_refreshBtn_clicked(); break;
        case 1: _t->jsonDataUpdated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_closeBtn_clicked(); break;
        case 3: _t->on_addNodeBtn_clicked(); break;
        case 4: _t->gifPlayOnce((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->refresh(); break;
        case 6: _t->stopRefresh(); break;
        case 7: _t->startRefresh(); break;
        case 8: _t->setBlockOrNot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject PeerInfoDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PeerInfoDialog.data,
      qt_meta_data_PeerInfoDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PeerInfoDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PeerInfoDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PeerInfoDialog.stringdata0))
        return static_cast<void*>(const_cast< PeerInfoDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int PeerInfoDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
