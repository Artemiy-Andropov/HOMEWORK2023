/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *m_Lab_YourCharacter_1;
    QLabel *m_Lab_YourCharacter_2;
    QLabel *m_Lab_Direction_Up;
    QLabel *m_Lab_YourCharacter_3;
    QPushButton *m_PB_Connect;
    QPushButton *m_PB_Send;
    QPushButton *m_PB_SelectCharacter;
    QPushButton *m_PB_Attack;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(406, 555);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        m_Lab_YourCharacter_1 = new QLabel(centralwidget);
        m_Lab_YourCharacter_1->setObjectName("m_Lab_YourCharacter_1");
        m_Lab_YourCharacter_1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_Lab_YourCharacter_1, 1, 1, 1, 1);

        m_Lab_YourCharacter_2 = new QLabel(centralwidget);
        m_Lab_YourCharacter_2->setObjectName("m_Lab_YourCharacter_2");
        m_Lab_YourCharacter_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_Lab_YourCharacter_2, 2, 1, 1, 1);

        m_Lab_Direction_Up = new QLabel(centralwidget);
        m_Lab_Direction_Up->setObjectName("m_Lab_Direction_Up");
        m_Lab_Direction_Up->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_Lab_Direction_Up, 0, 1, 1, 1);

        m_Lab_YourCharacter_3 = new QLabel(centralwidget);
        m_Lab_YourCharacter_3->setObjectName("m_Lab_YourCharacter_3");
        m_Lab_YourCharacter_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_Lab_YourCharacter_3, 3, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 2);

        m_PB_Connect = new QPushButton(centralwidget);
        m_PB_Connect->setObjectName("m_PB_Connect");
        QFont font;
        font.setPointSize(12);
        m_PB_Connect->setFont(font);

        gridLayout_2->addWidget(m_PB_Connect, 0, 0, 1, 2);

        m_PB_Send = new QPushButton(centralwidget);
        m_PB_Send->setObjectName("m_PB_Send");
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(true);
        m_PB_Send->setFont(font1);

        gridLayout_2->addWidget(m_PB_Send, 2, 0, 1, 2);

        m_PB_SelectCharacter = new QPushButton(centralwidget);
        m_PB_SelectCharacter->setObjectName("m_PB_SelectCharacter");
        m_PB_SelectCharacter->setFont(font);

        gridLayout_2->addWidget(m_PB_SelectCharacter, 3, 0, 1, 2);

        m_PB_Attack = new QPushButton(centralwidget);
        m_PB_Attack->setObjectName("m_PB_Attack");
        m_PB_Attack->setFont(font);

        gridLayout_2->addWidget(m_PB_Attack, 4, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 406, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        m_Lab_YourCharacter_1->setText(QString());
        m_Lab_YourCharacter_2->setText(QString());
        m_Lab_Direction_Up->setText(QCoreApplication::translate("MainWindow", "Up", nullptr));
        m_Lab_YourCharacter_3->setText(QString());
        m_PB_Connect->setText(QCoreApplication::translate("MainWindow", "connect", nullptr));
        m_PB_Send->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214 \320\276\321\202\321\200\321\217\320\264", nullptr));
        m_PB_SelectCharacter->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\276\321\200 \320\276\321\202\321\200\321\217\320\264\320\260", nullptr));
        m_PB_Attack->setText(QCoreApplication::translate("MainWindow", "\320\220\321\202\320\260\320\272\320\276\320\262\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
