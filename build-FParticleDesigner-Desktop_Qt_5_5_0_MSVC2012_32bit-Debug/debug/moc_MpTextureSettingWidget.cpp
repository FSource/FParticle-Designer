/****************************************************************************
** Meta object code from reading C++ file 'MpTextureSettingWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../FParticleDesigner/src/widget/MpTextureSettingWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MpTextureSettingWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MpTextureSettingWidget_t {
    QByteArrayData data[8];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MpTextureSettingWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MpTextureSettingWidget_t qt_meta_stringdata_MpTextureSettingWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "MpTextureSettingWidget"
QT_MOC_LITERAL(1, 23, 16), // "slotOnSetTexture"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 27), // "slotCurParticleEffectChange"
QT_MOC_LITERAL(4, 69, 20), // "slotCurProjectChange"
QT_MOC_LITERAL(5, 90, 18), // "slotBlendSrcChange"
QT_MOC_LITERAL(6, 109, 5), // "index"
QT_MOC_LITERAL(7, 115, 18) // "slotBlendDstChange"

    },
    "MpTextureSettingWidget\0slotOnSetTexture\0"
    "\0slotCurParticleEffectChange\0"
    "slotCurProjectChange\0slotBlendSrcChange\0"
    "index\0slotBlendDstChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MpTextureSettingWidget[] = {

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
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    1,   42,    2, 0x0a /* Public */,
       7,    1,   45,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void MpTextureSettingWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MpTextureSettingWidget *_t = static_cast<MpTextureSettingWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotOnSetTexture(); break;
        case 1: _t->slotCurParticleEffectChange(); break;
        case 2: _t->slotCurProjectChange(); break;
        case 3: _t->slotBlendSrcChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slotBlendDstChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MpTextureSettingWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MpTextureSettingWidget.data,
      qt_meta_data_MpTextureSettingWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MpTextureSettingWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MpTextureSettingWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MpTextureSettingWidget.stringdata0))
        return static_cast<void*>(const_cast< MpTextureSettingWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int MpTextureSettingWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
