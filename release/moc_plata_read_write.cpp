/****************************************************************************
** Meta object code from reading C++ file 'plata_read_write.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../plata_read_write.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plata_read_write.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_plata_read_write_t {
    QByteArrayData data[33];
    char stringdata0[366];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_plata_read_write_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_plata_read_write_t qt_meta_stringdata_plata_read_write = {
    {
QT_MOC_LITERAL(0, 0, 16), // "plata_read_write"
QT_MOC_LITERAL(1, 17, 12), // "send_command"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 5), // "char*"
QT_MOC_LITERAL(4, 37, 1), // "a"
QT_MOC_LITERAL(5, 39, 1), // "b"
QT_MOC_LITERAL(6, 41, 12), // "next_segment"
QT_MOC_LITERAL(7, 54, 7), // "segment"
QT_MOC_LITERAL(8, 62, 12), // "Progress_bar"
QT_MOC_LITERAL(9, 75, 12), // "current_size"
QT_MOC_LITERAL(10, 88, 19), // "send_udp_messangers"
QT_MOC_LITERAL(11, 108, 4), // "Data"
QT_MOC_LITERAL(12, 113, 25), // "send_udp_check_power_flag"
QT_MOC_LITERAL(13, 139, 6), // "header"
QT_MOC_LITERAL(14, 146, 18), // "write_readen_array"
QT_MOC_LITERAL(15, 165, 8), // "uint32_t"
QT_MOC_LITERAL(16, 174, 13), // "start_address"
QT_MOC_LITERAL(17, 188, 4), // "data"
QT_MOC_LITERAL(18, 193, 8), // "datasize"
QT_MOC_LITERAL(19, 202, 7), // "fileout"
QT_MOC_LITERAL(20, 210, 13), // "print_to_info"
QT_MOC_LITERAL(21, 224, 13), // "Start_Writing"
QT_MOC_LITERAL(22, 238, 4), // "size"
QT_MOC_LITERAL(23, 243, 6), // "adress"
QT_MOC_LITERAL(24, 250, 8), // "uint8_t*"
QT_MOC_LITERAL(25, 259, 9), // "StartRead"
QT_MOC_LITERAL(26, 269, 4), // "addr"
QT_MOC_LITERAL(27, 274, 13), // "STM_responces"
QT_MOC_LITERAL(28, 288, 8), // "sizedata"
QT_MOC_LITERAL(29, 297, 13), // "First_sending"
QT_MOC_LITERAL(30, 311, 14), // "Repead_sending"
QT_MOC_LITERAL(31, 326, 17), // "Repead_fl_sending"
QT_MOC_LITERAL(32, 344, 21) // "Update_segment_number"

    },
    "plata_read_write\0send_command\0\0char*\0"
    "a\0b\0next_segment\0segment\0Progress_bar\0"
    "current_size\0send_udp_messangers\0Data\0"
    "send_udp_check_power_flag\0header\0"
    "write_readen_array\0uint32_t\0start_address\0"
    "data\0datasize\0fileout\0print_to_info\0"
    "Start_Writing\0size\0adress\0uint8_t*\0"
    "StartRead\0addr\0STM_responces\0sizedata\0"
    "First_sending\0Repead_sending\0"
    "Repead_fl_sending\0Update_segment_number"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_plata_read_write[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   84,    2, 0x06 /* Public */,
       6,    1,   89,    2, 0x06 /* Public */,
       8,    1,   92,    2, 0x06 /* Public */,
      10,    1,   95,    2, 0x06 /* Public */,
      12,    1,   98,    2, 0x06 /* Public */,
      14,    4,  101,    2, 0x06 /* Public */,
      20,    1,  110,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      21,    3,  113,    2, 0x0a /* Public */,
      25,    3,  120,    2, 0x0a /* Public */,
      27,    2,  127,    2, 0x0a /* Public */,
      29,    0,  132,    2, 0x08 /* Private */,
      30,    0,  133,    2, 0x08 /* Private */,
      31,    0,  134,    2, 0x08 /* Private */,
      32,    0,  135,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, 0x80000000 | 3,   11,
    QMetaType::Void, QMetaType::UInt,   13,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 3, 0x80000000 | 15, QMetaType::QString,   16,   17,   18,   19,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 24,   22,   23,   17,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 15, QMetaType::QString,   26,   22,   19,
    QMetaType::Void, 0x80000000 | 3, QMetaType::UInt,   11,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void plata_read_write::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<plata_read_write *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_command((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->next_segment((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->Progress_bar((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->send_udp_messangers((*reinterpret_cast< char*(*)>(_a[1]))); break;
        case 4: _t->send_udp_check_power_flag((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 5: _t->write_readen_array((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])),(*reinterpret_cast< uint32_t(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 6: _t->print_to_info((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->Start_Writing((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< uint8_t*(*)>(_a[3]))); break;
        case 8: _t->StartRead((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 9: _t->STM_responces((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 10: _t->First_sending(); break;
        case 11: _t->Repead_sending(); break;
        case 12: _t->Repead_fl_sending(); break;
        case 13: _t->Update_segment_number(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (plata_read_write::*)(char * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&plata_read_write::send_command)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (plata_read_write::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&plata_read_write::next_segment)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (plata_read_write::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&plata_read_write::Progress_bar)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (plata_read_write::*)(char * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&plata_read_write::send_udp_messangers)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (plata_read_write::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&plata_read_write::send_udp_check_power_flag)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (plata_read_write::*)(uint32_t , char * , uint32_t , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&plata_read_write::write_readen_array)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (plata_read_write::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&plata_read_write::print_to_info)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject plata_read_write::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_plata_read_write.data,
    qt_meta_data_plata_read_write,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *plata_read_write::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *plata_read_write::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_plata_read_write.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int plata_read_write::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void plata_read_write::send_command(char * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void plata_read_write::next_segment(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void plata_read_write::Progress_bar(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void plata_read_write::send_udp_messangers(char * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void plata_read_write::send_udp_check_power_flag(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void plata_read_write::write_readen_array(uint32_t _t1, char * _t2, uint32_t _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void plata_read_write::print_to_info(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
