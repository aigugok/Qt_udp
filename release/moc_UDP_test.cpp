/****************************************************************************
** Meta object code from reading C++ file 'UDP_test.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../UDP_test.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UDP_test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UDP_test_t {
    QByteArrayData data[16];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UDP_test_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UDP_test_t qt_meta_stringdata_UDP_test = {
    {
QT_MOC_LITERAL(0, 0, 8), // "UDP_test"
QT_MOC_LITERAL(1, 9, 8), // "get_info"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 3), // "msg"
QT_MOC_LITERAL(4, 23, 13), // "get_info_data"
QT_MOC_LITERAL(5, 37, 5), // "char*"
QT_MOC_LITERAL(6, 43, 1), // "a"
QT_MOC_LITERAL(7, 45, 22), // "get_not_connected_data"
QT_MOC_LITERAL(8, 68, 13), // "Button_Enable"
QT_MOC_LITERAL(9, 82, 3), // "var"
QT_MOC_LITERAL(10, 86, 27), // "on_progressBar_valueChanged"
QT_MOC_LITERAL(11, 114, 5), // "value"
QT_MOC_LITERAL(12, 120, 16), // "on_Start_clicked"
QT_MOC_LITERAL(13, 137, 16), // "on_Write_clicked"
QT_MOC_LITERAL(14, 154, 15), // "on_Read_clicked"
QT_MOC_LITERAL(15, 170, 17) // "on_STM_IP_clicked"

    },
    "UDP_test\0get_info\0\0msg\0get_info_data\0"
    "char*\0a\0get_not_connected_data\0"
    "Button_Enable\0var\0on_progressBar_valueChanged\0"
    "value\0on_Start_clicked\0on_Write_clicked\0"
    "on_Read_clicked\0on_STM_IP_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UDP_test[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a /* Public */,
       4,    1,   62,    2, 0x0a /* Public */,
       7,    1,   65,    2, 0x0a /* Public */,
       8,    1,   68,    2, 0x0a /* Public */,
      10,    1,   71,    2, 0x08 /* Private */,
      12,    0,   74,    2, 0x08 /* Private */,
      13,    0,   75,    2, 0x08 /* Private */,
      14,    0,   76,    2, 0x08 /* Private */,
      15,    0,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UDP_test::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UDP_test *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->get_info((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->get_info_data((*reinterpret_cast< char*(*)>(_a[1]))); break;
        case 2: _t->get_not_connected_data((*reinterpret_cast< char*(*)>(_a[1]))); break;
        case 3: _t->Button_Enable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_progressBar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_Start_clicked(); break;
        case 6: _t->on_Write_clicked(); break;
        case 7: _t->on_Read_clicked(); break;
        case 8: _t->on_STM_IP_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UDP_test::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_UDP_test.data,
    qt_meta_data_UDP_test,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UDP_test::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UDP_test::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UDP_test.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int UDP_test::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
