/****************************************************************************
** Meta object code from reading C++ file 'inputwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../data/headers/inputwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inputwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InputWidget_t {
    const uint offsetsAndSize[24];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_InputWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_InputWidget_t qt_meta_stringdata_InputWidget = {
    {
QT_MOC_LITERAL(0, 11), // "InputWidget"
QT_MOC_LITERAL(12, 12), // "changeWindow"
QT_MOC_LITERAL(25, 0), // ""
QT_MOC_LITERAL(26, 9), // "setValues"
QT_MOC_LITERAL(36, 8), // "username"
QT_MOC_LITERAL(45, 4), // "lang"
QT_MOC_LITERAL(50, 4), // "type"
QT_MOC_LITERAL(55, 14), // "execution_time"
QT_MOC_LITERAL(70, 8), // "stopTest"
QT_MOC_LITERAL(79, 32), // "on_pushButton_input_quit_clicked"
QT_MOC_LITERAL(112, 32), // "on_pushButton_input_save_clicked"
QT_MOC_LITERAL(145, 32) // "on_pushButton_input_drop_clicked"

    },
    "InputWidget\0changeWindow\0\0setValues\0"
    "username\0lang\0type\0execution_time\0"
    "stopTest\0on_pushButton_input_quit_clicked\0"
    "on_pushButton_input_save_clicked\0"
    "on_pushButton_input_drop_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InputWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    4,   51,    2, 0x0a,    2 /* Public */,
       8,    0,   60,    2, 0x08,    7 /* Private */,
       9,    0,   61,    2, 0x08,    8 /* Private */,
      10,    0,   62,    2, 0x08,    9 /* Private */,
      11,    0,   63,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    4,    5,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void InputWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InputWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changeWindow(); break;
        case 1: _t->setValues((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 2: _t->stopTest(); break;
        case 3: _t->on_pushButton_input_quit_clicked(); break;
        case 4: _t->on_pushButton_input_save_clicked(); break;
        case 5: _t->on_pushButton_input_drop_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InputWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputWidget::changeWindow)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject InputWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_InputWidget.offsetsAndSize,
    qt_meta_data_InputWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_InputWidget_t
, QtPrivate::TypeAndForceComplete<InputWidget, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *InputWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InputWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InputWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int InputWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void InputWidget::changeWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
