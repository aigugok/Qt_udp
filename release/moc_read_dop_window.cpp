/****************************************************************************
** Meta object code from reading C++ file 'read_dop_window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../read_dop_window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'read_dop_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Read_dop_window_t {
    QByteArrayData data[10];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Read_dop_window_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Read_dop_window_t qt_meta_stringdata_Read_dop_window = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Read_dop_window"
QT_MOC_LITERAL(1, 16, 10), // "read_flash"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 8), // "uint32_t"
QT_MOC_LITERAL(4, 37, 4), // "addr"
QT_MOC_LITERAL(5, 42, 4), // "size"
QT_MOC_LITERAL(6, 47, 7), // "fileout"
QT_MOC_LITERAL(7, 55, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(8, 77, 8), // "get_info"
QT_MOC_LITERAL(9, 86, 3) // "msg"

    },
    "Read_dop_window\0read_flash\0\0uint32_t\0"
    "addr\0size\0fileout\0on_pushButton_clicked\0"
    "get_info\0msg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Read_dop_window[] = {

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
       1,    3,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   36,    2, 0x08 /* Private */,
       8,    1,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, QMetaType::QString,    4,    5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void Read_dop_window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Read_dop_window *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->read_flash((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->get_info((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Read_dop_window::*)(uint32_t , uint32_t , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Read_dop_window::read_flash)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Read_dop_window::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_Read_dop_window.data,
    qt_meta_data_Read_dop_window,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Read_dop_window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Read_dop_window::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Read_dop_window.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Read_dop_window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Read_dop_window::read_flash(uint32_t _t1, uint32_t _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
