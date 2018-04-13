/****************************************************************************
** Meta object code from reading C++ file 'importdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../importdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'importdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ImportDialog_t {
    QByteArrayData data[12];
    char stringdata0[227];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImportDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImportDialog_t qt_meta_stringdata_ImportDialog = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ImportDialog"
QT_MOC_LITERAL(1, 13, 15), // "accountImported"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 20), // "on_cancelBtn_clicked"
QT_MOC_LITERAL(4, 51, 18), // "on_pathBtn_clicked"
QT_MOC_LITERAL(5, 70, 20), // "on_importBtn_clicked"
QT_MOC_LITERAL(6, 91, 33), // "on_privateKeyLineEdit_textCha..."
QT_MOC_LITERAL(7, 125, 4), // "arg1"
QT_MOC_LITERAL(8, 130, 35), // "on_privateKeyLineEdit_returnP..."
QT_MOC_LITERAL(9, 166, 22), // "walletImportPrivateKey"
QT_MOC_LITERAL(10, 189, 6), // "result"
QT_MOC_LITERAL(11, 196, 30) // "walletImportRegisterPrivateKey"

    },
    "ImportDialog\0accountImported\0\0"
    "on_cancelBtn_clicked\0on_pathBtn_clicked\0"
    "on_importBtn_clicked\0"
    "on_privateKeyLineEdit_textChanged\0"
    "arg1\0on_privateKeyLineEdit_returnPressed\0"
    "walletImportPrivateKey\0result\0"
    "walletImportRegisterPrivateKey"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImportDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    1,   58,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    1,   62,    2, 0x08 /* Private */,
      11,    1,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void ImportDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ImportDialog *_t = static_cast<ImportDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accountImported(); break;
        case 1: _t->on_cancelBtn_clicked(); break;
        case 2: _t->on_pathBtn_clicked(); break;
        case 3: _t->on_importBtn_clicked(); break;
        case 4: _t->on_privateKeyLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_privateKeyLineEdit_returnPressed(); break;
        case 6: _t->walletImportPrivateKey((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->walletImportRegisterPrivateKey((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ImportDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImportDialog::accountImported)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ImportDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ImportDialog.data,
      qt_meta_data_ImportDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ImportDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImportDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ImportDialog.stringdata0))
        return static_cast<void*>(const_cast< ImportDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ImportDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ImportDialog::accountImported()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
