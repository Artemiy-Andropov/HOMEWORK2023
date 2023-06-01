/********************************************************************************
** Form generated from reading UI file 'attack.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTACK_H
#define UI_ATTACK_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Attack
{
public:
    QGridLayout *gridLayout;
    QLCDNumber *m_LCD_HP_2;
    QLabel *m_Lab_YourCharacter_3;
    QLabel *label;
    QLCDNumber *m_LCD_Damage_3;
    QLCDNumber *m_LCD_HP_3;
    QToolButton *m_TB_Attack_1;
    QToolButton *m_TB_Attack_2;
    QLabel *label_2;
    QLabel *m_Lab_YourCharacter_1;
    QToolButton *m_TB_Attack_3;
    QLabel *m_Lab_YourCharacter_2;
    QLCDNumber *m_LCD_Damage_1;
    QLCDNumber *m_LCD_HP_1;
    QLCDNumber *m_LCD_Damage_2;
    QLabel *label_3;

    void setupUi(QWidget *Attack)
    {
        if (Attack->objectName().isEmpty())
            Attack->setObjectName("Attack");
        Attack->resize(400, 300);
        gridLayout = new QGridLayout(Attack);
        gridLayout->setObjectName("gridLayout");
        m_LCD_HP_2 = new QLCDNumber(Attack);
        m_LCD_HP_2->setObjectName("m_LCD_HP_2");

        gridLayout->addWidget(m_LCD_HP_2, 2, 2, 1, 1);

        m_Lab_YourCharacter_3 = new QLabel(Attack);
        m_Lab_YourCharacter_3->setObjectName("m_Lab_YourCharacter_3");
        m_Lab_YourCharacter_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_Lab_YourCharacter_3, 3, 1, 1, 1);

        label = new QLabel(Attack);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        m_LCD_Damage_3 = new QLCDNumber(Attack);
        m_LCD_Damage_3->setObjectName("m_LCD_Damage_3");

        gridLayout->addWidget(m_LCD_Damage_3, 3, 3, 1, 1);

        m_LCD_HP_3 = new QLCDNumber(Attack);
        m_LCD_HP_3->setObjectName("m_LCD_HP_3");

        gridLayout->addWidget(m_LCD_HP_3, 3, 2, 1, 1);

        m_TB_Attack_1 = new QToolButton(Attack);
        m_TB_Attack_1->setObjectName("m_TB_Attack_1");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_TB_Attack_1->sizePolicy().hasHeightForWidth());
        m_TB_Attack_1->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resource/character/Katana.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_TB_Attack_1->setIcon(icon);

        gridLayout->addWidget(m_TB_Attack_1, 1, 0, 1, 1);

        m_TB_Attack_2 = new QToolButton(Attack);
        m_TB_Attack_2->setObjectName("m_TB_Attack_2");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_TB_Attack_2->sizePolicy().hasHeightForWidth());
        m_TB_Attack_2->setSizePolicy(sizePolicy1);
        m_TB_Attack_2->setIcon(icon);

        gridLayout->addWidget(m_TB_Attack_2, 2, 0, 1, 1);

        label_2 = new QLabel(Attack);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        m_Lab_YourCharacter_1 = new QLabel(Attack);
        m_Lab_YourCharacter_1->setObjectName("m_Lab_YourCharacter_1");
        m_Lab_YourCharacter_1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_Lab_YourCharacter_1, 1, 1, 1, 1);

        m_TB_Attack_3 = new QToolButton(Attack);
        m_TB_Attack_3->setObjectName("m_TB_Attack_3");
        sizePolicy.setHeightForWidth(m_TB_Attack_3->sizePolicy().hasHeightForWidth());
        m_TB_Attack_3->setSizePolicy(sizePolicy);
        m_TB_Attack_3->setIcon(icon);

        gridLayout->addWidget(m_TB_Attack_3, 3, 0, 1, 1);

        m_Lab_YourCharacter_2 = new QLabel(Attack);
        m_Lab_YourCharacter_2->setObjectName("m_Lab_YourCharacter_2");
        m_Lab_YourCharacter_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_Lab_YourCharacter_2, 2, 1, 1, 1);

        m_LCD_Damage_1 = new QLCDNumber(Attack);
        m_LCD_Damage_1->setObjectName("m_LCD_Damage_1");
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_LCD_Damage_1->sizePolicy().hasHeightForWidth());
        m_LCD_Damage_1->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(m_LCD_Damage_1, 1, 3, 1, 1);

        m_LCD_HP_1 = new QLCDNumber(Attack);
        m_LCD_HP_1->setObjectName("m_LCD_HP_1");
        sizePolicy2.setHeightForWidth(m_LCD_HP_1->sizePolicy().hasHeightForWidth());
        m_LCD_HP_1->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(m_LCD_HP_1, 1, 2, 1, 1);

        m_LCD_Damage_2 = new QLCDNumber(Attack);
        m_LCD_Damage_2->setObjectName("m_LCD_Damage_2");

        gridLayout->addWidget(m_LCD_Damage_2, 2, 3, 1, 1);

        label_3 = new QLabel(Attack);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 3, 1, 1);


        retranslateUi(Attack);

        QMetaObject::connectSlotsByName(Attack);
    } // setupUi

    void retranslateUi(QWidget *Attack)
    {
        Attack->setWindowTitle(QCoreApplication::translate("Attack", "Form", nullptr));
        m_Lab_YourCharacter_3->setText(QString());
        label->setText(QCoreApplication::translate("Attack", "\320\222\320\260\321\210\320\270 \320\277\320\265\321\200\321\201\320\276\320\275\320\260\320\266\320\270", nullptr));
        m_TB_Attack_1->setText(QCoreApplication::translate("Attack", "...", nullptr));
        m_TB_Attack_2->setText(QCoreApplication::translate("Attack", "...", nullptr));
        label_2->setText(QCoreApplication::translate("Attack", "\320\245\320\237", nullptr));
        m_Lab_YourCharacter_1->setText(QString());
        m_TB_Attack_3->setText(QCoreApplication::translate("Attack", "...", nullptr));
        m_Lab_YourCharacter_2->setText(QString());
        label_3->setText(QCoreApplication::translate("Attack", "\320\243\321\200\320\276\320\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Attack: public Ui_Attack {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTACK_H
