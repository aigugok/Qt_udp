/****************************************************************************
** Meta object code from reading C++ file 'udp_.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../udp_.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'udp_.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ThreadUdp_t {
    QByteArrayData data[16];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ThreadUdp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ThreadUdp_t qt_meta_stringdata_ThreadUdp = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ThreadUdp"
QT_MOC_LITERAL(1, 10, 8), // "finished"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 11), // "UdpPack_rcv"
QT_MOC_LITERAL(4, 32, 5), // "char*"
QT_MOC_LITERAL(5, 38, 6), // "rxData"
QT_MOC_LITERAL(6, 45, 8), // "sizedata"
QT_MOC_LITERAL(7, 54, 7), // "process"
QT_MOC_LITERAL(8, 62, 4), // "read"
QT_MOC_LITERAL(9, 67, 9), // "send_pack"
QT_MOC_LITERAL(10, 77, 3), // "buf"
QT_MOC_LITERAL(11, 81, 4), // "size"
QT_MOC_LITERAL(12, 86, 9), // "change_ip"
QT_MOC_LITERAL(13, 96, 6), // "new_ip"
QT_MOC_LITERAL(14, 103, 15), // "connectToServer"
QT_MOC_LITERAL(15, 119, 5) // "_port"

    },
    "ThreadUdp\0finished\0\0UdpPack_rcv\0char*\0"
    "rxData\0sizedata\0process\0read\0send_pack\0"
    "buf\0size\0change_ip\0new_ip\0connectToServer\0"
    "_port"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ThreadUdp[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    2,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   60,    2, 0x0a /* Public */,
       8,    0,   61,    2, 0x0a /* Public */,
       9,    2,   62,    2, 0x0a /* Public */,
      12,    1,   67,    2, 0x0a /* Public */,
      14,    1,   70,    2, 0x0a /* Public */,
      14,    0,   73,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::UInt,    5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int,   10,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::UShort,   15,
    QMetaType::Void,

       0        // eod
};

void ThreadUdp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ThreadUdp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->UdpPack_rcv((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 2: _t->process(); break;
        case 3: _t->read(); break;
        case 4: _t->send_pack((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->change_ip((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->connectToServer((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 7: _t->connectToServer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ThreadUdp::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadUdp::finished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ThreadUdp::*)(char * , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadUdp::UdpPack_rcv)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ThreadUdp::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ThreadUdp.data,
    qt_meta_data_ThreadUdp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ThreadUdp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ThreadUdp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ThreadUdp.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ThreadUdp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void ThreadUdp::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ThreadUdp::UdpPack_rcv(char * _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
