/********************************************************************************
** Form generated from reading UI file 'battlefield.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATTLEFIELD_H
#define UI_BATTLEFIELD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Battlefield
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *m_Lab_OpponentCharacter_2;
    QLabel *m_Lab_OpponentCharacter_3;
    QLabel *m_Lab_OpponentCharacter_1;
    QLabel *m_Lab_Direction_Up;
    QLabel *m_Lab_Direction_Up_Opponent;
    QLabel *m_Lab_YourCharacter_1;
    QLabel *m_Lab_YourCharacter_2;
    QLabel *m_Lab_YourCharacter_3;

    void setupUi(QWidget *Battlefield)
    {
        if (Battlefield->objectName().isEmpty())
            Battlefield->setObjectName("Battlefield");
        Battlefield->resize(510, 391);
        gridLayout_2 = new QGridLayout(Battlefield);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        m_Lab_OpponentCharacter_2 = new QLabel(Battlefield);
        m_Lab_OpponentCharacter_2->setObjectName("m_Lab_OpponentCharacter_2");
        m_Lab_OpponentCharacter_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_Lab_OpponentCharacter_2, 1, 0, 1, 1);

        m_Lab_OpponentCharacter_3 = new QLabel(Battlefield);
        m_Lab_OpponentCharacter_3->setObjectName("m_Lab_OpponentCharacter_3");
        m_Lab_OpponentCharacter_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_Lab_OpponentCharacter_3, 0, 0, 1, 1);

        m_Lab_OpponentCharacter_1 = new QLabel(Battlefield);
        m_Lab_OpponentCharacter_1->setObjectName("m_Lab_OpponentCharacter_1");
        m_Lab_OpponentCharacter_1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_Lab_OpponentCharacter_1, 2, 0, 1, 1);

        m_Lab_Direction_Up = new QLabel(Battlefield);
        m_Lab_Direction_Up->setObjectName("m_Lab_Direction_Up");
        m_Lab_Direction_Up->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_Lab_Direction_Up, 0, 1, 1, 1);

        m_Lab_Direction_Up_Opponent = new QLabel(Battlefield);
        m_Lab_Direction_Up_Opponent->setObjectName("m_Lab_Direction_Up_Opponent");
        m_Lab_Direction_Up_Opponent->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_Lab_Direction_Up_Opponent, 3, 0, 1, 1);

        m_Lab_YourCharacter_1 = new QLabel(Battlefield);
        m_Lab_YourCharacter_1->setObjectName("m_Lab_YourCharacter_1");
        m_Lab_YourCharacter_1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_Lab_YourCharacter_1, 1, 1, 1, 1);

        m_Lab_YourCharacter_2 = new QLabel(Battlefield);
        m_Lab_YourCharacter_2->setObjectName("m_Lab_YourCharacter_2");
        m_Lab_YourCharacter_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_Lab_YourCharacter_2, 2, 1, 1, 1);

        m_Lab_YourCharacter_3 = new QLabel(Battlefield);
        m_Lab_YourCharacter_3->setObjectName("m_Lab_YourCharacter_3");
        m_Lab_YourCharacter_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_Lab_YourCharacter_3, 3, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(Battlefield);

        QMetaObject::connectSlotsByName(Battlefield);
    } // setupUi

    void retranslateUi(QWidget *Battlefield)
    {
        Battlefield->setWindowTitle(QCoreApplication::translate("Battlefield", "Form", nullptr));
        m_Lab_OpponentCharacter_2->setText(QString());
        m_Lab_OpponentCharacter_3->setText(QString());
        m_Lab_OpponentCharacter_1->setText(QString());
        m_Lab_Direction_Up->setText(QCoreApplication::translate("Battlefield", "Up", nullptr));
        m_Lab_Direction_Up_Opponent->setText(QCoreApplication::translate("Battlefield", "Up", nullptr));
        m_Lab_YourCharacter_1->setText(QString());
        m_Lab_YourCharacter_2->setText(QString());
        m_Lab_YourCharacter_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Battlefield: public Ui_Battlefield {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATTLEFIELD_H
