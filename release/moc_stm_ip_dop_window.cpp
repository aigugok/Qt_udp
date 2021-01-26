/****************************************************************************
** Meta object code from reading C++ file 'stm_ip_dop_window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../stm_ip_dop_window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stm_ip_dop_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_STM_IP_t {
    QByteArrayData data[7];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_STM_IP_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_STM_IP_t qt_meta_stringdata_STM_IP = {
    {
QT_MOC_LITERAL(0, 0, 6), // "STM_IP"
QT_MOC_LITERAL(1, 7, 9), // "ip_change"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 3), // "ip4"
QT_MOC_LITERAL(4, 22, 13), // "on_OK_clicked"
QT_MOC_LITERAL(5, 36, 8), // "get_info"
QT_MOC_LITERAL(6, 45, 3) // "msg"

    },
    "STM_IP\0ip_change\0\0ip4\0on_OK_clicked\0"
    "get_info\0msg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_STM_IP[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   32,    2, 0x08 /* Private */,
       5,    1,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void STM_IP::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<STM_IP *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ip_change((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_OK_clicked(); break;
        case 2: _t->get_info((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (STM_IP::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&STM_IP::ip_change)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject STM_IP::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_STM_IP.data,
    qt_meta_data_STM_IP,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *STM_IP::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *STM_IP::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_STM_IP.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int STM_IP::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void STM_IP::ip_change(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
