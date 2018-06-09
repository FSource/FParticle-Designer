/****************************************************************************
** Meta object code from reading C++ file 'MpProjectExploreWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../FParticleDesigner/src/widget/MpProjectExploreWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MpProjectExploreWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MpProjectExploreWidget_t {
    QByteArrayData data[9];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MpProjectExploreWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MpProjectExploreWidget_t qt_meta_stringdata_MpProjectExploreWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "MpProjectExploreWidget"
QT_MOC_LITERAL(1, 23, 14), // "slotMousePress"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 27), // "slotCurParticleEffectChange"
QT_MOC_LITERAL(4, 67, 20), // "slotCurProjectChange"
QT_MOC_LITERAL(5, 88, 28), // "slotParticleEffectAttrChange"
QT_MOC_LITERAL(6, 117, 17), // "MpParticleEffect*"
QT_MOC_LITERAL(7, 135, 6), // "effect"
QT_MOC_LITERAL(8, 142, 24) // "slotRemoveParticleEffect"

    },
    "MpProjectExploreWidget\0slotMousePress\0"
    "\0slotCurParticleEffectChange\0"
    "slotCurProjectChange\0slotParticleEffectAttrChange\0"
    "MpParticleEffect*\0effect\0"
    "slotRemoveParticleEffect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MpProjectExploreWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       3,    0,   42,    2, 0x0a /* Public */,
       4,    0,   43,    2, 0x0a /* Public */,
       5,    1,   44,    2, 0x0a /* Public */,
       8,    1,   47,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void MpProjectExploreWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MpProjectExploreWidget *_t = static_cast<MpProjectExploreWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotMousePress((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->slotCurParticleEffectChange(); break;
        case 2: _t->slotCurProjectChange(); break;
        case 3: _t->slotParticleEffectAttrChange((*reinterpret_cast< MpParticleEffect*(*)>(_a[1]))); break;
        case 4: _t->slotRemoveParticleEffect((*reinterpret_cast< MpParticleEffect*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MpProjectExploreWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MpProjectExploreWidget.data,
      qt_meta_data_MpProjectExploreWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MpProjectExploreWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MpProjectExploreWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MpProjectExploreWidget.stringdata0))
        return static_cast<void*>(const_cast< MpProjectExploreWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int MpProjectExploreWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
