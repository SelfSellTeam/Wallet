/****************************************************************************
** Meta object code from reading C++ file 'singlecontactwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../singlecontactwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'singlecontactwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SingleContactWidget_t {
    QByteArrayData data[10];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SingleContactWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SingleContactWidget_t qt_meta_stringdata_SingleContactWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "SingleContactWidget"
QT_MOC_LITERAL(1, 20, 13), // "deleteContact"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 16), // "showShadowWidget"
QT_MOC_LITERAL(4, 52, 16), // "hideShadowWidget"
QT_MOC_LITERAL(5, 69, 11), // "editContact"
QT_MOC_LITERAL(6, 81, 16), // "gotoTransferPage"
QT_MOC_LITERAL(7, 98, 20), // "on_deleteBtn_clicked"
QT_MOC_LITERAL(8, 119, 22), // "on_transferBtn_clicked"
QT_MOC_LITERAL(9, 142, 18) // "on_editBtn_clicked"

    },
    "SingleContactWidget\0deleteContact\0\0"
    "showShadowWidget\0hideShadowWidget\0"
    "editContact\0gotoTransferPage\0"
    "on_deleteBtn_clicked\0on_transferBtn_clicked\0"
    "on_editBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SingleContactWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    2,   57,    2, 0x06 /* Public */,
       6,    1,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   65,    2, 0x08 /* Private */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SingleContactWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SingleContactWidget *_t = static_cast<SingleContactWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deleteContact(); break;
        case 1: _t->showShadowWidget(); break;
        case 2: _t->hideShadowWidget(); break;
        case 3: _t->editContact((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->gotoTransferPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->on_deleteBtn_clicked(); break;
        case 6: _t->on_transferBtn_clicked(); break;
        case 7: _t->on_editBtn_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SingleContactWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SingleContactWidget::deleteContact)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SingleContactWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SingleContactWidget::showShadowWidget)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SingleContactWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SingleContactWidget::hideShadowWidget)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SingleContactWidget::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SingleContactWidget::editContact)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (SingleContactWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SingleContactWidget::gotoTransferPage)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject SingleContactWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SingleContactWidget.data,
      qt_meta_data_SingleContactWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SingleContactWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SingleContactWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SingleContactWidget.stringdata0))
        return static_cast<void*>(const_cast< SingleContactWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int SingleContactWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void SingleContactWidget::deleteContact()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void SingleContactWidget::showShadowWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void SingleContactWidget::hideShadowWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void SingleContactWidget::editContact(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SingleContactWidget::gotoTransferPage(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
