/****************************************************************************
** Meta object code from reading C++ file 'menuwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../data/headers/menuwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menuwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MenuWidget_t {
    const uint offsetsAndSize[24];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MenuWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MenuWidget_t qt_meta_stringdata_MenuWidget = {
    {
QT_MOC_LITERAL(0, 10), // "MenuWidget"
QT_MOC_LITERAL(11, 10), // "sendValues"
QT_MOC_LITERAL(22, 0), // ""
QT_MOC_LITERAL(23, 8), // "username"
QT_MOC_LITERAL(32, 4), // "lang"
QT_MOC_LITERAL(37, 4), // "type"
QT_MOC_LITERAL(42, 14), // "execution_time"
QT_MOC_LITERAL(57, 32), // "on_pushButton_main_start_clicked"
QT_MOC_LITERAL(90, 11), // "updateStats"
QT_MOC_LITERAL(102, 27), // "on_radioButton_spec_clicked"
QT_MOC_LITERAL(130, 25), // "on_radioButton_en_clicked"
QT_MOC_LITERAL(156, 25) // "on_radioButton_ru_clicked"

    },
    "MenuWidget\0sendValues\0\0username\0lang\0"
    "type\0execution_time\0"
    "on_pushButton_main_start_clicked\0"
    "updateStats\0on_radioButton_spec_clicked\0"
    "on_radioButton_en_clicked\0"
    "on_radioButton_ru_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MenuWidget[] = {

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
       1,    4,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   59,    2, 0x08,    6 /* Private */,
       8,    0,   60,    2, 0x08,    7 /* Private */,
       9,    0,   61,    2, 0x08,    8 /* Private */,
      10,    0,   62,    2, 0x08,    9 /* Private */,
      11,    0,   63,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MenuWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MenuWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendValues((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 1: _t->on_pushButton_main_start_clicked(); break;
        case 2: _t->updateStats(); break;
        case 3: _t->on_radioButton_spec_clicked(); break;
        case 4: _t->on_radioButton_en_clicked(); break;
        case 5: _t->on_radioButton_ru_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MenuWidget::*)(QString , QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MenuWidget::sendValues)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MenuWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MenuWidget.offsetsAndSize,
    qt_meta_data_MenuWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MenuWidget_t
, QtPrivate::TypeAndForceComplete<MenuWidget, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MenuWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MenuWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MenuWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MenuWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void MenuWidget::sendValues(QString _t1, QString _t2, QString _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
