/********************************************************************************
** Form generated from reading UI file 'mymainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYMAINWINDOW_H
#define UI_MYMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyMainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_8;
    QGridLayout *gridLayout_3;
    QLabel *m_Lab_Mes;
    QLabel *m_Lab_EnterNumber;
    QPushButton *m_PB_NewGame;
    QPushButton *m_PB_Records;
    QPushButton *m_PB_Check;
    QTableWidget *m_Table_BAC;
    QLineEdit *m_LE_Enter;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MyMainWindow)
    {
        if (MyMainWindow->objectName().isEmpty())
            MyMainWindow->setObjectName("MyMainWindow");
        MyMainWindow->setWindowModality(Qt::NonModal);
        MyMainWindow->resize(612, 519);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
        QBrush brush1(QColor(29, 84, 92, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        MyMainWindow->setPalette(palette);
        MyMainWindow->setTabletTracking(false);
        centralwidget = new QWidget(MyMainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_8 = new QVBoxLayout(centralwidget);
        verticalLayout_8->setObjectName("verticalLayout_8");
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        m_Lab_Mes = new QLabel(centralwidget);
        m_Lab_Mes->setObjectName("m_Lab_Mes");

        gridLayout_3->addWidget(m_Lab_Mes, 0, 1, 1, 1);

        m_Lab_EnterNumber = new QLabel(centralwidget);
        m_Lab_EnterNumber->setObjectName("m_Lab_EnterNumber");
        m_Lab_EnterNumber->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(m_Lab_EnterNumber, 2, 0, 1, 1);

        m_PB_NewGame = new QPushButton(centralwidget);
        m_PB_NewGame->setObjectName("m_PB_NewGame");

        gridLayout_3->addWidget(m_PB_NewGame, 0, 0, 1, 1);

        m_PB_Records = new QPushButton(centralwidget);
        m_PB_Records->setObjectName("m_PB_Records");

        gridLayout_3->addWidget(m_PB_Records, 0, 2, 1, 1);

        m_PB_Check = new QPushButton(centralwidget);
        m_PB_Check->setObjectName("m_PB_Check");

        gridLayout_3->addWidget(m_PB_Check, 2, 2, 1, 1);

        m_Table_BAC = new QTableWidget(centralwidget);
        m_Table_BAC->setObjectName("m_Table_BAC");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_Table_BAC->sizePolicy().hasHeightForWidth());
        m_Table_BAC->setSizePolicy(sizePolicy);
        m_Table_BAC->setSizeIncrement(QSize(0, 0));
        m_Table_BAC->setTabletTracking(false);
        m_Table_BAC->setAcceptDrops(false);
        m_Table_BAC->setLayoutDirection(Qt::LeftToRight);
        m_Table_BAC->setSortingEnabled(false);
        m_Table_BAC->setRowCount(0);
        m_Table_BAC->setColumnCount(0);
        m_Table_BAC->horizontalHeader()->setCascadingSectionResizes(true);
        m_Table_BAC->horizontalHeader()->setMinimumSectionSize(40);
        m_Table_BAC->horizontalHeader()->setDefaultSectionSize(231);
        m_Table_BAC->horizontalHeader()->setHighlightSections(true);
        m_Table_BAC->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        m_Table_BAC->horizontalHeader()->setStretchLastSection(true);
        m_Table_BAC->verticalHeader()->setCascadingSectionResizes(false);
        m_Table_BAC->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        m_Table_BAC->verticalHeader()->setStretchLastSection(false);

        gridLayout_3->addWidget(m_Table_BAC, 3, 0, 1, 3);

        m_LE_Enter = new QLineEdit(centralwidget);
        m_LE_Enter->setObjectName("m_LE_Enter");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_LE_Enter->sizePolicy().hasHeightForWidth());
        m_LE_Enter->setSizePolicy(sizePolicy1);
        m_LE_Enter->setMinimumSize(QSize(350, 0));

        gridLayout_3->addWidget(m_LE_Enter, 2, 1, 1, 1);


        verticalLayout_8->addLayout(gridLayout_3);

        MyMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MyMainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 612, 21));
        MyMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MyMainWindow);
        statusbar->setObjectName("statusbar");
        MyMainWindow->setStatusBar(statusbar);

        retranslateUi(MyMainWindow);

        QMetaObject::connectSlotsByName(MyMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MyMainWindow)
    {
#if QT_CONFIG(tooltip)
        MyMainWindow->setToolTip(QCoreApplication::translate("MyMainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        m_Lab_Mes->setText(QCoreApplication::translate("MyMainWindow", "\320\224\320\276\320\261\321\200\320\276 \320\277\320\276\320\266\320\260\320\273\320\276\320\262\320\260\321\202\321\214 \320\262 \320\270\320\263\321\200\321\203. \320\243\320\264\320\260\321\207\320\270!", nullptr));
        m_Lab_EnterNumber->setText(QCoreApplication::translate("MyMainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\320\270\321\201\320\273\320\276:", nullptr));
        m_PB_NewGame->setText(QCoreApplication::translate("MyMainWindow", "\320\235\320\276\320\262\320\260\321\217 \320\270\320\263\321\200\320\260", nullptr));
        m_PB_Records->setText(QCoreApplication::translate("MyMainWindow", "\320\240\320\265\320\272\320\276\321\200\320\264\321\213", nullptr));
        m_PB_Check->setText(QCoreApplication::translate("MyMainWindow", "\320\237\321\200\320\276\320\262\320\265\321\200\320\270\321\202\321\214!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyMainWindow: public Ui_MyMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMAINWINDOW_H
