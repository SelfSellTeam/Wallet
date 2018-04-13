/****************************************************************************
** Meta object code from reading C++ file 'contactpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../contactpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'contactpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ContactPage_t {
    QByteArrayData data[14];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ContactPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ContactPage_t qt_meta_stringdata_ContactPage = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ContactPage"
QT_MOC_LITERAL(1, 12, 16), // "showShadowWidget"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 16), // "hideShadowWidget"
QT_MOC_LITERAL(4, 47, 16), // "gotoTransferPage"
QT_MOC_LITERAL(5, 64, 24), // "on_addContactBtn_clicked"
QT_MOC_LITERAL(6, 89, 18), // "updateContactsList"
QT_MOC_LITERAL(7, 108, 16), // "shadowWidgetShow"
QT_MOC_LITERAL(8, 125, 16), // "shadowWidgetHide"
QT_MOC_LITERAL(9, 142, 11), // "editContact"
QT_MOC_LITERAL(10, 154, 7), // "address"
QT_MOC_LITERAL(11, 162, 6), // "remark"
QT_MOC_LITERAL(12, 169, 15), // "jsonDataUpdated"
QT_MOC_LITERAL(13, 185, 2) // "id"

    },
    "ContactPage\0showShadowWidget\0\0"
    "hideShadowWidget\0gotoTransferPage\0"
    "on_addContactBtn_clicked\0updateContactsList\0"
    "shadowWidgetShow\0shadowWidgetHide\0"
    "editContact\0address\0remark\0jsonDataUpdated\0"
    "id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ContactPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    1,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   64,    2, 0x08 /* Private */,
       6,    0,   65,    2, 0x08 /* Private */,
       7,    0,   66,    2, 0x08 /* Private */,
       8,    0,   67,    2, 0x08 /* Private */,
       9,    2,   68,    2, 0x08 /* Private */,
      12,    1,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,   11,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

void ContactPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ContactPage *_t = static_cast<ContactPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showShadowWidget(); break;
        case 1: _t->hideShadowWidget(); break;
        case 2: _t->gotoTransferPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->on_addContactBtn_clicked(); break;
        case 4: _t->updateContactsList(); break;
        case 5: _t->shadowWidgetShow(); break;
        case 6: _t->shadowWidgetHide(); break;
        case 7: _t->editContact((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->jsonDataUpdated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ContactPage::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ContactPage::showShadowWidget)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ContactPage::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ContactPage::hideShadowWidget)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ContactPage::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ContactPage::gotoTransferPage)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject ContactPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ContactPage.data,
      qt_meta_data_ContactPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ContactPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ContactPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ContactPage.stringdata0))
        return static_cast<void*>(const_cast< ContactPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int ContactPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ContactPage::showShadowWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void ContactPage::hideShadowWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void ContactPage::gotoTransferPage(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
