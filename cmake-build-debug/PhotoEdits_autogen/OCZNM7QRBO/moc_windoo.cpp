/****************************************************************************
** Meta object code from reading C++ file 'windoo.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/windoo.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windoo.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_windoo_t {
    QByteArrayData data[11];
    char stringdata0[265];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_windoo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_windoo_t qt_meta_stringdata_windoo = {
    {
QT_MOC_LITERAL(0, 0, 6), // "windoo"
QT_MOC_LITERAL(1, 7, 27), // "on_pushButtonBrowse_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 21), // "on_greyButton_clicked"
QT_MOC_LITERAL(4, 58, 31), // "on_checkBoxChannelMixer_clicked"
QT_MOC_LITERAL(5, 90, 38), // "on_pushButtonChannelMixerRese..."
QT_MOC_LITERAL(6, 129, 32), // "on_sliderChannelRed_valueChanged"
QT_MOC_LITERAL(7, 162, 5), // "value"
QT_MOC_LITERAL(8, 168, 34), // "on_sliderChannelGreen_valueCh..."
QT_MOC_LITERAL(9, 203, 33), // "on_sliderChannelBlue_valueCha..."
QT_MOC_LITERAL(10, 237, 27) // "on_pushButtonSaveAs_clicked"

    },
    "windoo\0on_pushButtonBrowse_clicked\0\0"
    "on_greyButton_clicked\0"
    "on_checkBoxChannelMixer_clicked\0"
    "on_pushButtonChannelMixerReset_clicked\0"
    "on_sliderChannelRed_valueChanged\0value\0"
    "on_sliderChannelGreen_valueChanged\0"
    "on_sliderChannelBlue_valueChanged\0"
    "on_pushButtonSaveAs_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_windoo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    1,   58,    2, 0x08 /* Private */,
       8,    1,   61,    2, 0x08 /* Private */,
       9,    1,   64,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,

       0        // eod
};

void windoo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<windoo *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButtonBrowse_clicked(); break;
        case 1: _t->on_greyButton_clicked(); break;
        case 2: _t->on_checkBoxChannelMixer_clicked(); break;
        case 3: _t->on_pushButtonChannelMixerReset_clicked(); break;
        case 4: _t->on_sliderChannelRed_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_sliderChannelGreen_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_sliderChannelBlue_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_pushButtonSaveAs_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject windoo::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_windoo.data,
    qt_meta_data_windoo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *windoo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *windoo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_windoo.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int windoo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
