/****************************************************************************
** Meta object code from reading C++ file 'read_flash.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../read_flash.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'read_flash.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Read_Flash_t {
    QByteArrayData data[29];
    char stringdata0[308];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Read_Flash_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Read_Flash_t qt_meta_stringdata_Read_Flash = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Read_Flash"
QT_MOC_LITERAL(1, 11, 9), // "send_pack"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 5), // "char*"
QT_MOC_LITERAL(4, 28, 1), // "a"
QT_MOC_LITERAL(5, 30, 1), // "b"
QT_MOC_LITERAL(6, 32, 12), // "send_hexdata"
QT_MOC_LITERAL(7, 45, 8), // "uint32_t"
QT_MOC_LITERAL(8, 54, 13), // "start_address"
QT_MOC_LITERAL(9, 68, 4), // "data"
QT_MOC_LITERAL(10, 73, 8), // "datasize"
QT_MOC_LITERAL(11, 82, 7), // "fileout"
QT_MOC_LITERAL(12, 90, 19), // "send_udp_messangers"
QT_MOC_LITERAL(13, 110, 4), // "Data"
QT_MOC_LITERAL(14, 115, 15), // "send_udp_sector"
QT_MOC_LITERAL(15, 131, 14), // "send_udp_flags"
QT_MOC_LITERAL(16, 146, 6), // "header"
QT_MOC_LITERAL(17, 153, 24), // "send_upd_clearned_sector"
QT_MOC_LITERAL(18, 178, 6), // "Data_0"
QT_MOC_LITERAL(19, 185, 25), // "send_udp_check_power_flag"
QT_MOC_LITERAL(20, 211, 18), // "Progress_bar_write"
QT_MOC_LITERAL(21, 230, 5), // "value"
QT_MOC_LITERAL(22, 236, 9), // "StartRead"
QT_MOC_LITERAL(23, 246, 4), // "addr"
QT_MOC_LITERAL(24, 251, 4), // "size"
QT_MOC_LITERAL(25, 256, 11), // "CurrentRead"
QT_MOC_LITERAL(26, 268, 12), // "ProccessData"
QT_MOC_LITERAL(27, 281, 8), // "sizedata"
QT_MOC_LITERAL(28, 290, 17) // "Repead_fl_sending"

    },
    "Read_Flash\0send_pack\0\0char*\0a\0b\0"
    "send_hexdata\0uint32_t\0start_address\0"
    "data\0datasize\0fileout\0send_udp_messangers\0"
    "Data\0send_udp_sector\0send_udp_flags\0"
    "header\0send_upd_clearned_sector\0Data_0\0"
    "send_udp_check_power_flag\0Progress_bar_write\0"
    "value\0StartRead\0addr\0size\0CurrentRead\0"
    "ProccessData\0sizedata\0Repead_fl_sending"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Read_Flash[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   74,    2, 0x06 /* Public */,
       6,    4,   79,    2, 0x06 /* Public */,
      12,    1,   88,    2, 0x06 /* Public */,
      14,    1,   91,    2, 0x06 /* Public */,
      15,    1,   94,    2, 0x06 /* Public */,
      17,    1,   97,    2, 0x06 /* Public */,
      19,    1,  100,    2, 0x06 /* Public */,
      20,    1,  103,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      22,    3,  106,    2, 0x0a /* Public */,
      25,    2,  113,    2, 0x0a /* Public */,
      26,    2,  118,    2, 0x0a /* Public */,
      28,    0,  123,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 3, 0x80000000 | 7, QMetaType::QString,    8,    9,   10,   11,
    QMetaType::Void, 0x80000000 | 3,   13,
    QMetaType::Void, 0x80000000 | 3,   13,
    QMetaType::Void, QMetaType::UInt,   16,
    QMetaType::Void, QMetaType::UInt,   18,
    QMetaType::Void, QMetaType::UInt,   16,
    QMetaType::Void, QMetaType::Int,   21,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7, QMetaType::QString,   23,   24,   11,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7,   23,   24,
    QMetaType::Void, 0x80000000 | 3, QMetaType::UInt,   13,   27,
    QMetaType::Void,

       0        // eod
};

void Read_Flash::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Read_Flash *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_pack((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->send_hexdata((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])),(*reinterpret_cast< uint32_t(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 2: _t->send_udp_messangers((*reinterpret_cast< char*(*)>(_a[1]))); break;
        case 3: _t->send_udp_sector((*reinterpret_cast< char*(*)>(_a[1]))); break;
        case 4: _t->send_udp_flags((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 5: _t->send_upd_clearned_sector((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 6: _t->send_udp_check_power_flag((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 7: _t->Progress_bar_write((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->StartRead((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 9: _t->CurrentRead((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2]))); break;
        case 10: _t->ProccessData((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 11: _t->Repead_fl_sending(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Read_Flash::*)(char * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Read_Flash::send_pack)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Read_Flash::*)(uint32_t , char * , uint32_t , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Read_Flash::send_hexdata)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Read_Flash::*)(char * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Read_Flash::send_udp_messangers)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Read_Flash::*)(char * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Read_Flash::send_udp_sector)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Read_Flash::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Read_Flash::send_udp_flags)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Read_Flash::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Read_Flash::send_upd_clearned_sector)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Read_Flash::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Read_Flash::send_udp_check_power_flag)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Read_Flash::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Read_Flash::Progress_bar_write)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Read_Flash::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Read_Flash.data,
    qt_meta_data_Read_Flash,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Read_Flash::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Read_Flash::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Read_Flash.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Read_Flash::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void Read_Flash::send_pack(char * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Read_Flash::send_hexdata(uint32_t _t1, char * _t2, uint32_t _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Read_Flash::send_udp_messangers(char * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Read_Flash::send_udp_sector(char * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Read_Flash::send_udp_flags(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Read_Flash::send_upd_clearned_sector(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Read_Flash::send_udp_check_power_flag(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Read_Flash::Progress_bar_write(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
