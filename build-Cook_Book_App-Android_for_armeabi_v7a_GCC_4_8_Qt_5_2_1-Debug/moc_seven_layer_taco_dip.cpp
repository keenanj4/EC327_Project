/****************************************************************************
** Meta object code from reading C++ file 'seven_layer_taco_dip.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Cook_Book_App/seven_layer_taco_dip.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'seven_layer_taco_dip.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Seven_Layer_Taco_Dip_t {
    QByteArrayData data[4];
    char stringdata[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Seven_Layer_Taco_Dip_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Seven_Layer_Taco_Dip_t qt_meta_stringdata_Seven_Layer_Taco_Dip = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 30),
QT_MOC_LITERAL(2, 52, 0),
QT_MOC_LITERAL(3, 53, 8)
    },
    "Seven_Layer_Taco_Dip\0"
    "on_label_windowIconTextChanged\0\0"
    "iconText\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Seven_Layer_Taco_Dip[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};



const QMetaObject Seven_Layer_Taco_Dip::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Seven_Layer_Taco_Dip.data,
      qt_meta_data_Seven_Layer_Taco_Dip,  qt_static_metacall, 0, 0}
};


const QMetaObject *Seven_Layer_Taco_Dip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Seven_Layer_Taco_Dip::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Seven_Layer_Taco_Dip.stringdata))
        return static_cast<void*>(const_cast< Seven_Layer_Taco_Dip*>(this));
    return QDialog::qt_metacast(_clname);
}

int Seven_Layer_Taco_Dip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
