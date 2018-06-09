/****************************************************************************
** Meta object code from reading C++ file 'MpMsgCenter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../FParticleDesigner/src/MpMsgCenter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MpMsgCenter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MpMsgCenter_t {
    QByteArrayData data[9];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MpMsgCenter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MpMsgCenter_t qt_meta_stringdata_MpMsgCenter = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MpMsgCenter"
QT_MOC_LITERAL(1, 12, 22), // "signalCurProjectChange"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 29), // "signalCurParticleEffectChange"
QT_MOC_LITERAL(4, 66, 30), // "signalParticleEffectAttrChange"
QT_MOC_LITERAL(5, 97, 17), // "MpParticleEffect*"
QT_MOC_LITERAL(6, 115, 6), // "effect"
QT_MOC_LITERAL(7, 122, 26), // "signalRemoveParticleEffect"
QT_MOC_LITERAL(8, 149, 23) // "signalAddParticleEffect"

    },
    "MpMsgCenter\0signalCurProjectChange\0\0"
    "signalCurParticleEffectChange\0"
    "signalParticleEffectAttrChange\0"
    "MpParticleEffect*\0effect\0"
    "signalRemoveParticleEffect\0"
    "signalAddParticleEffect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MpMsgCenter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    1,   41,    2, 0x06 /* Public */,
       7,    1,   44,    2, 0x06 /* Public */,
       8,    1,   47,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void MpMsgCenter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MpMsgCenter *_t = static_cast<MpMsgCenter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalCurProjectChange(); break;
        case 1: _t->signalCurParticleEffectChange(); break;
        case 2: _t->signalParticleEffectAttrChange((*reinterpret_cast< MpParticleEffect*(*)>(_a[1]))); break;
        case 3: _t->signalRemoveParticleEffect((*reinterpret_cast< MpParticleEffect*(*)>(_a[1]))); break;
        case 4: _t->signalAddParticleEffect((*reinterpret_cast< MpParticleEffect*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MpMsgCenter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MpMsgCenter::signalCurProjectChange)) {
                *result = 0;
            }
        }
        {
            typedef void (MpMsgCenter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MpMsgCenter::signalCurParticleEffectChange)) {
                *result = 1;
            }
        }
        {
            typedef void (MpMsgCenter::*_t)(MpParticleEffect * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MpMsgCenter::signalParticleEffectAttrChange)) {
                *result = 2;
            }
        }
        {
            typedef void (MpMsgCenter::*_t)(MpParticleEffect * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MpMsgCenter::signalRemoveParticleEffect)) {
                *result = 3;
            }
        }
        {
            typedef void (MpMsgCenter::*_t)(MpParticleEffect * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MpMsgCenter::signalAddParticleEffect)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject MpMsgCenter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MpMsgCenter.data,
      qt_meta_data_MpMsgCenter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MpMsgCenter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MpMsgCenter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MpMsgCenter.stringdata0))
        return static_cast<void*>(const_cast< MpMsgCenter*>(this));
    return QObject::qt_metacast(_clname);
}

int MpMsgCenter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void MpMsgCenter::signalCurProjectChange()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void MpMsgCenter::signalCurParticleEffectChange()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void MpMsgCenter::signalParticleEffectAttrChange(MpParticleEffect * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MpMsgCenter::signalRemoveParticleEffect(MpParticleEffect * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MpMsgCenter::signalAddParticleEffect(MpParticleEffect * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
