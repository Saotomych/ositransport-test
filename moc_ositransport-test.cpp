/****************************************************************************
** Meta object code from reading C++ file 'ositransport-test.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ositransport-test.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ositransport-test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OsiTransportTest_t {
    QByteArrayData data[19];
    char stringdata[288];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_OsiTransportTest_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_OsiTransportTest_t qt_meta_stringdata_OsiTransportTest = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 19),
QT_MOC_LITERAL(2, 37, 0),
QT_MOC_LITERAL(3, 38, 18),
QT_MOC_LITERAL(4, 57, 4),
QT_MOC_LITERAL(5, 62, 22),
QT_MOC_LITERAL(6, 85, 17),
QT_MOC_LITERAL(7, 103, 17),
QT_MOC_LITERAL(8, 121, 17),
QT_MOC_LITERAL(9, 139, 3),
QT_MOC_LITERAL(10, 143, 19),
QT_MOC_LITERAL(11, 163, 20),
QT_MOC_LITERAL(12, 184, 11),
QT_MOC_LITERAL(13, 196, 11),
QT_MOC_LITERAL(14, 208, 11),
QT_MOC_LITERAL(15, 220, 19),
QT_MOC_LITERAL(16, 240, 6),
QT_MOC_LITERAL(17, 247, 16),
QT_MOC_LITERAL(18, 264, 22)
    },
    "OsiTransportTest\0slotClientConnected\0"
    "\0const CConnection*\0that\0"
    "slotClientDisconnected\0slotServerRcvTSdu\0"
    "slotServerCRReady\0slotServerIOError\0"
    "str\0slotConnectionReady\0slotConnectionClosed\0"
    "slotTSReady\0slotCRReady\0slotIOError\0"
    "slotIllegalArgument\0strErr\0slotConnectError\0"
    "slotIllegalClassMember\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OsiTransportTest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x0a,
       5,    1,   82,    2, 0x0a,
       6,    1,   85,    2, 0x0a,
       7,    1,   88,    2, 0x0a,
       8,    1,   91,    2, 0x0a,
      10,    1,   94,    2, 0x0a,
      11,    1,   97,    2, 0x0a,
      12,    1,  100,    2, 0x0a,
      13,    1,  103,    2, 0x0a,
      14,    1,  106,    2, 0x0a,
      15,    1,  109,    2, 0x0a,
      17,    1,  112,    2, 0x0a,
      18,    1,  115,    2, 0x0a,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   16,

       0        // eod
};

void OsiTransportTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OsiTransportTest *_t = static_cast<OsiTransportTest *>(_o);
        switch (_id) {
        case 0: _t->slotClientConnected((*reinterpret_cast< const CConnection*(*)>(_a[1]))); break;
        case 1: _t->slotClientDisconnected((*reinterpret_cast< const CConnection*(*)>(_a[1]))); break;
        case 2: _t->slotServerRcvTSdu((*reinterpret_cast< const CConnection*(*)>(_a[1]))); break;
        case 3: _t->slotServerCRReady((*reinterpret_cast< const CConnection*(*)>(_a[1]))); break;
        case 4: _t->slotServerIOError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->slotConnectionReady((*reinterpret_cast< const CConnection*(*)>(_a[1]))); break;
        case 6: _t->slotConnectionClosed((*reinterpret_cast< const CConnection*(*)>(_a[1]))); break;
        case 7: _t->slotTSReady((*reinterpret_cast< const CConnection*(*)>(_a[1]))); break;
        case 8: _t->slotCRReady((*reinterpret_cast< const CConnection*(*)>(_a[1]))); break;
        case 9: _t->slotIOError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->slotIllegalArgument((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->slotConnectError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->slotIllegalClassMember((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject OsiTransportTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OsiTransportTest.data,
      qt_meta_data_OsiTransportTest,  qt_static_metacall, 0, 0}
};


const QMetaObject *OsiTransportTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OsiTransportTest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OsiTransportTest.stringdata))
        return static_cast<void*>(const_cast< OsiTransportTest*>(this));
    return QObject::qt_metacast(_clname);
}

int OsiTransportTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
