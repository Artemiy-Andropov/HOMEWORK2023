/****************************************************************************
** Meta object code from reading C++ file 'target.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../target.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'target.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSTargetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTargetENDCLASS = QtMocHelpers::stringData(
    "Target",
    "signalTarget_",
    "",
    "characterNumber",
    "slotOpponentDetachment",
    "json",
    "on_m_TB_Attack_1_clicked",
    "on_m_TB_Attack_2_clicked",
    "on_m_TB_Attack_3_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTargetENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[7];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[23];
    char stringdata5[5];
    char stringdata6[25];
    char stringdata7[25];
    char stringdata8[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTargetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTargetENDCLASS_t qt_meta_stringdata_CLASSTargetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Target"
        QT_MOC_LITERAL(7, 13),  // "signalTarget_"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 15),  // "characterNumber"
        QT_MOC_LITERAL(38, 22),  // "slotOpponentDetachment"
        QT_MOC_LITERAL(61, 4),  // "json"
        QT_MOC_LITERAL(66, 24),  // "on_m_TB_Attack_1_clicked"
        QT_MOC_LITERAL(91, 24),  // "on_m_TB_Attack_2_clicked"
        QT_MOC_LITERAL(116, 24)   // "on_m_TB_Attack_3_clicked"
    },
    "Target",
    "signalTarget_",
    "",
    "characterNumber",
    "slotOpponentDetachment",
    "json",
    "on_m_TB_Attack_1_clicked",
    "on_m_TB_Attack_2_clicked",
    "on_m_TB_Attack_3_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTargetENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   47,    2, 0x0a,    3 /* Public */,
       6,    0,   50,    2, 0x08,    5 /* Private */,
       7,    0,   51,    2, 0x08,    6 /* Private */,
       8,    0,   52,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QJsonObject,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Target::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSTargetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTargetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTargetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Target, std::true_type>,
        // method 'signalTarget_'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotOpponentDetachment'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonObject, std::false_type>,
        // method 'on_m_TB_Attack_1_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_TB_Attack_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_TB_Attack_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Target::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Target *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalTarget_((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->slotOpponentDetachment((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 2: _t->on_m_TB_Attack_1_clicked(); break;
        case 3: _t->on_m_TB_Attack_2_clicked(); break;
        case 4: _t->on_m_TB_Attack_3_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Target::*)(int );
            if (_t _q_method = &Target::signalTarget_; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *Target::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Target::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTargetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Target::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Target::signalTarget_(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
