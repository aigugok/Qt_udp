/****************************************************************************
** Meta object code from reading C++ file 'write_flash.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../write_flash.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'write_flash.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Write_Flash_t {
    QByteArrayData data[27];
    char stringdata0[291];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Write_Flash_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Write_Flash_t qt_meta_stringdata_Write_Flash = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Write_Flash"
QT_MOC_LITERAL(1, 12, 9), // "send_pack"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 5), // "char*"
QT_MOC_LITERAL(4, 29, 1), // "a"
QT_MOC_LITERAL(5, 31, 1), // "b"
QT_MOC_LITERAL(6, 33, 17), // "print_to_textEdit"
QT_MOC_LITERAL(7, 51, 13), // "print_to_info"
QT_MOC_LITERAL(8, 65, 14), // "print_to_error"
QT_MOC_LITERAL(9, 80, 12), // "Progress_bar"
QT_MOC_LITERAL(10, 93, 12), // "current_size"
QT_MOC_LITERAL(11, 106, 11), // "Start_Write"
QT_MOC_LITERAL(12, 118, 8), // "fileName"
QT_MOC_LITERAL(13, 127, 17), // "Data_from_HexFile"
QT_MOC_LITERAL(14, 145, 15), // "Flag_from_plata"
QT_MOC_LITERAL(15, 161, 6), // "header"
QT_MOC_LITERAL(16, 168, 12), // "Read_Segment"
QT_MOC_LITERAL(17, 181, 7), // "segment"
QT_MOC_LITERAL(18, 189, 3), // "str"
QT_MOC_LITERAL(19, 193, 11), // "Write_Bytes"
QT_MOC_LITERAL(20, 205, 9), // "send_size"
QT_MOC_LITERAL(21, 215, 14), // "Repead_sending"
QT_MOC_LITERAL(22, 230, 13), // "First_sending"
QT_MOC_LITERAL(23, 244, 12), // "Clear_sector"
QT_MOC_LITERAL(24, 257, 12), // "start_adress"
QT_MOC_LITERAL(25, 270, 8), // "char2bin"
QT_MOC_LITERAL(26, 279, 11) // "ucCharacter"

    },
    "Write_Flash\0send_pack\0\0char*\0a\0b\0"
    "print_to_textEdit\0print_to_info\0"
    "print_to_error\0Progress_bar\0current_size\0"
    "Start_Write\0fileName\0Data_from_HexFile\0"
    "Flag_from_plata\0header\0Read_Segment\0"
    "segment\0str\0Write_Bytes\0send_size\0"
    "Repead_sending\0First_sending\0Clear_sector\0"
    "start_adress\0char2bin\0ucCharacter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Write_Flash[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   84,    2, 0x06 /* Public */,
       6,    1,   89,    2, 0x06 /* Public */,
       7,    1,   92,    2, 0x06 /* Public */,
       8,    1,   95,    2, 0x06 /* Public */,
       9,    1,   98,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,  101,    2, 0x0a /* Public */,
      13,    1,  104,    2, 0x0a /* Public */,
      14,    1,  107,    2, 0x0a /* Public */,
      16,    2,  110,    2, 0x0a /* Public */,
      19,    1,  115,    2, 0x0a /* Public */,
      21,    0,  118,    2, 0x0a /* Public */,
      22,    0,  119,    2, 0x0a /* Public */,
      23,    1,  120,    2, 0x0a /* Public */,
      25,    1,  123,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Int, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::UInt,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   17,   18,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::UChar, QMetaType::UChar,   26,

       0        // eod
};

void Write_Flash::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Write_Flash *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_pack((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->print_to_textEdit((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->print_to_info((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->print_to_error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->Progress_bar((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->Start_Write((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: { int _r = _t->Data_from_HexFile((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->Flag_from_plata((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 8: _t->Read_Segment((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->Write_Bytes((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->Repead_sending(); break;
        case 11: _t->First_sending(); break;
        case 12: _t->Clear_sector((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: { unsigned char _r = _t->char2bin((*reinterpret_cast< unsigned char(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< unsigned char*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Write_Flash::*)(char * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Write_Flash::send_pack)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Write_Flash::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Write_Flash::print_to_textEdit)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Write_Flash::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Write_Flash::print_to_info)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Write_Flash::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Write_Flash::print_to_error)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Write_Flash::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Write_Flash::Progress_bar)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Write_Flash::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Write_Flash.data,
    qt_meta_data_Write_Flash,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Write_Flash::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Write_Flash::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Write_Flash.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Write_Flash::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Write_Flash::send_pack(char * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Write_Flash::print_to_textEdit(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Write_Flash::print_to_info(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Write_Flash::print_to_error(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Write_Flash::Progress_bar(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
