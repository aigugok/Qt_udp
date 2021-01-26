/****************************************************************************
** Meta object code from reading C++ file 'hex_writing.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hex_writing.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hex_writing.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Write_hex_t {
    QByteArrayData data[21];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Write_hex_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Write_hex_t qt_meta_stringdata_Write_hex = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Write_hex"
QT_MOC_LITERAL(1, 10, 13), // "print_to_info"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 1), // "a"
QT_MOC_LITERAL(4, 27, 22), // "data_for_flash_writing"
QT_MOC_LITERAL(5, 50, 4), // "size"
QT_MOC_LITERAL(6, 55, 6), // "adress"
QT_MOC_LITERAL(7, 62, 8), // "uint8_t*"
QT_MOC_LITERAL(8, 71, 4), // "Data"
QT_MOC_LITERAL(9, 76, 23), // "Start_data_from_HexFile"
QT_MOC_LITERAL(10, 100, 8), // "fileName"
QT_MOC_LITERAL(11, 109, 7), // "segment"
QT_MOC_LITERAL(12, 117, 17), // "Data_to_hexformat"
QT_MOC_LITERAL(13, 135, 8), // "uint32_t"
QT_MOC_LITERAL(14, 144, 9), // "start_add"
QT_MOC_LITERAL(15, 154, 5), // "char*"
QT_MOC_LITERAL(16, 160, 4), // "data"
QT_MOC_LITERAL(17, 165, 12), // "size_of_data"
QT_MOC_LITERAL(18, 178, 4), // "file"
QT_MOC_LITERAL(19, 183, 12), // "Next_segment"
QT_MOC_LITERAL(20, 196, 14) // "segment_number"

    },
    "Write_hex\0print_to_info\0\0a\0"
    "data_for_flash_writing\0size\0adress\0"
    "uint8_t*\0Data\0Start_data_from_HexFile\0"
    "fileName\0segment\0Data_to_hexformat\0"
    "uint32_t\0start_add\0char*\0data\0"
    "size_of_data\0file\0Next_segment\0"
    "segment_number"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Write_hex[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    3,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,   54,    2, 0x0a /* Public */,
       9,    1,   59,    2, 0x2a /* Public | MethodCloned */,
      12,    4,   62,    2, 0x0a /* Public */,
      19,    1,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 7,    5,    6,    8,

 // slots: parameters
    QMetaType::Int, QMetaType::QString, QMetaType::Int,   10,   11,
    QMetaType::Int, QMetaType::QString,   10,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 15, 0x80000000 | 13, QMetaType::QString,   14,   16,   17,   18,
    QMetaType::Void, QMetaType::Int,   20,

       0        // eod
};

void Write_hex::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Write_hex *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->print_to_info((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->data_for_flash_writing((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< uint8_t*(*)>(_a[3]))); break;
        case 2: { int _r = _t->Start_data_from_HexFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: { int _r = _t->Start_data_from_HexFile((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->Data_to_hexformat((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])),(*reinterpret_cast< uint32_t(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 5: _t->Next_segment((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Write_hex::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Write_hex::print_to_info)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Write_hex::*)(int , int , uint8_t * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Write_hex::data_for_flash_writing)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Write_hex::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Write_hex.data,
    qt_meta_data_Write_hex,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Write_hex::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Write_hex::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Write_hex.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Write_hex::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Write_hex::print_to_info(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Write_hex::data_for_flash_writing(int _t1, int _t2, uint8_t * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
