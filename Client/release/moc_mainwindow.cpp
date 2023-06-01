/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "signalBeginBattle",
    "",
    "Jobj",
    "persona",
    "signalYourDetachment",
    "json",
    "signalOpponentDetachment",
    "on_m_PB_Connect_clicked",
    "on_m_PB_SelectCharacter_clicked",
    "on_m_PB_Send_clicked",
    "on_m_PB_Attack_clicked",
    "slotReadyRead",
    "slotSelChar",
    "charNum",
    "place",
    "slotDamage",
    "damage",
    "slotTarget_",
    "characterNumber"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[40];
    char stringdata0[11];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[8];
    char stringdata5[21];
    char stringdata6[5];
    char stringdata7[25];
    char stringdata8[24];
    char stringdata9[32];
    char stringdata10[21];
    char stringdata11[23];
    char stringdata12[14];
    char stringdata13[12];
    char stringdata14[8];
    char stringdata15[6];
    char stringdata16[11];
    char stringdata17[7];
    char stringdata18[12];
    char stringdata19[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 17),  // "signalBeginBattle"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 4),  // "Jobj"
        QT_MOC_LITERAL(35, 7),  // "persona"
        QT_MOC_LITERAL(43, 20),  // "signalYourDetachment"
        QT_MOC_LITERAL(64, 4),  // "json"
        QT_MOC_LITERAL(69, 24),  // "signalOpponentDetachment"
        QT_MOC_LITERAL(94, 23),  // "on_m_PB_Connect_clicked"
        QT_MOC_LITERAL(118, 31),  // "on_m_PB_SelectCharacter_clicked"
        QT_MOC_LITERAL(150, 20),  // "on_m_PB_Send_clicked"
        QT_MOC_LITERAL(171, 22),  // "on_m_PB_Attack_clicked"
        QT_MOC_LITERAL(194, 13),  // "slotReadyRead"
        QT_MOC_LITERAL(208, 11),  // "slotSelChar"
        QT_MOC_LITERAL(220, 7),  // "charNum"
        QT_MOC_LITERAL(228, 5),  // "place"
        QT_MOC_LITERAL(234, 10),  // "slotDamage"
        QT_MOC_LITERAL(245, 6),  // "damage"
        QT_MOC_LITERAL(252, 11),  // "slotTarget_"
        QT_MOC_LITERAL(264, 15)   // "characterNumber"
    },
    "MainWindow",
    "signalBeginBattle",
    "",
    "Jobj",
    "persona",
    "signalYourDetachment",
    "json",
    "signalOpponentDetachment",
    "on_m_PB_Connect_clicked",
    "on_m_PB_SelectCharacter_clicked",
    "on_m_PB_Send_clicked",
    "on_m_PB_Attack_clicked",
    "slotReadyRead",
    "slotSelChar",
    "charNum",
    "place",
    "slotDamage",
    "damage",
    "slotTarget_",
    "characterNumber"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   80,    2, 0x06,    1 /* Public */,
       5,    1,   85,    2, 0x06,    4 /* Public */,
       7,    1,   88,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   91,    2, 0x08,    8 /* Private */,
       9,    0,   92,    2, 0x08,    9 /* Private */,
      10,    0,   93,    2, 0x08,   10 /* Private */,
      11,    0,   94,    2, 0x08,   11 /* Private */,
      12,    0,   95,    2, 0x0a,   12 /* Public */,
      13,    2,   96,    2, 0x0a,   13 /* Public */,
      16,    1,  101,    2, 0x0a,   16 /* Public */,
      18,    1,  104,    2, 0x0a,   18 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QJsonObject, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QJsonObject,    6,
    QMetaType::Void, QMetaType::QJsonObject,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   19,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'signalBeginBattle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonObject, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'signalYourDetachment'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonObject, std::false_type>,
        // method 'signalOpponentDetachment'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonObject, std::false_type>,
        // method 'on_m_PB_Connect_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_PB_SelectCharacter_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_PB_Send_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_PB_Attack_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotReadyRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotSelChar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotDamage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotTarget_'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalBeginBattle((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->signalYourDetachment((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 2: _t->signalOpponentDetachment((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 3: _t->on_m_PB_Connect_clicked(); break;
        case 4: _t->on_m_PB_SelectCharacter_clicked(); break;
        case 5: _t->on_m_PB_Send_clicked(); break;
        case 6: _t->on_m_PB_Attack_clicked(); break;
        case 7: _t->slotReadyRead(); break;
        case 8: _t->slotSelChar((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 9: _t->slotDamage((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->slotTarget_((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(QJsonObject , QString );
            if (_t _q_method = &MainWindow::signalBeginBattle; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QJsonObject );
            if (_t _q_method = &MainWindow::signalYourDetachment; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QJsonObject );
            if (_t _q_method = &MainWindow::signalOpponentDetachment; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::signalBeginBattle(QJsonObject _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::signalYourDetachment(QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::signalOpponentDetachment(QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
