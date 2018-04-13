/****************************************************************************
** Meta object code from reading C++ file 'selectgoppathwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../selectgoppathwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selectgoppathwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SelectGopPathWidget_t {
    QByteArrayData data[11];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SelectGopPathWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SelectGopPathWidget_t qt_meta_stringdata_SelectGopPathWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "SelectGopPathWidget"
QT_MOC_LITERAL(1, 20, 5), // "enter"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 7), // "minimum"
QT_MOC_LITERAL(4, 35, 8), // "closeGOP"
QT_MOC_LITERAL(5, 44, 16), // "showShadowWidget"
QT_MOC_LITERAL(6, 61, 16), // "hideShadowWidget"
QT_MOC_LITERAL(7, 78, 24), // "on_selectPathBtn_clicked"
QT_MOC_LITERAL(8, 103, 16), // "on_okBtn_clicked"
QT_MOC_LITERAL(9, 120, 17), // "on_minBtn_clicked"
QT_MOC_LITERAL(10, 138, 19) // "on_closeBtn_clicked"

    },
    "SelectGopPathWidget\0enter\0\0minimum\0"
    "closeGOP\0showShadowWidget\0hideShadowWidget\0"
    "on_selectPathBtn_clicked\0on_okBtn_clicked\0"
    "on_minBtn_clicked\0on_closeBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SelectGopPathWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,
       6,    0,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
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

       0        // eod
};

void SelectGopPathWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SelectGopPathWidget *_t = static_cast<SelectGopPathWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enter(); break;
        case 1: _t->minimum(); break;
        case 2: _t->closeGOP(); break;
        case 3: _t->showShadowWidget(); break;
        case 4: _t->hideShadowWidget(); break;
        case 5: _t->on_selectPathBtn_clicked(); break;
        case 6: _t->on_okBtn_clicked(); break;
        case 7: _t->on_minBtn_clicked(); break;
        case 8: _t->on_closeBtn_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SelectGopPathWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SelectGopPathWidget::enter)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SelectGopPathWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SelectGopPathWidget::minimum)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SelectGopPathWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SelectGopPathWidget::closeGOP)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SelectGopPathWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SelectGopPathWidget::showShadowWidget)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (SelectGopPathWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SelectGopPathWidget::hideShadowWidget)) {
                *result = 4;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject SelectGopPathWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SelectGopPathWidget.data,
      qt_meta_data_SelectGopPathWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SelectGopPathWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SelectGopPathWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SelectGopPathWidget.stringdata0))
        return static_cast<void*>(const_cast< SelectGopPathWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int SelectGopPathWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void SelectGopPathWidget::enter()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void SelectGopPathWidget::minimum()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void SelectGopPathWidget::closeGOP()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void SelectGopPathWidget::showShadowWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void SelectGopPathWidget::hideShadowWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
