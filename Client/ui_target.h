/********************************************************************************
** Form generated from reading UI file 'target.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TARGET_H
#define UI_TARGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Target
{
public:
    QGridLayout *gridLayout;
    QLabel *m_Lab_Character_2;
    QLabel *m_Lab_Character_3;
    QLabel *label_2;
    QLabel *label_3;
    QLCDNumber *m_LCD_Damage_2;
    QLCDNumber *m_LCD_Damage_3;
    QLCDNumber *m_LCD_Damage_1;
    QLCDNumber *m_LCD_HP_1;
    QLCDNumber *m_LCD_HP_2;
    QLCDNumber *m_LCD_HP_3;
    QToolButton *m_TB_Attack_1;
    QLabel *m_Lab_Character_1;
    QLabel *label;
    QToolButton *m_TB_Attack_3;
    QToolButton *m_TB_Attack_2;

    void setupUi(QWidget *Target)
    {
        if (Target->objectName().isEmpty())
            Target->setObjectName("Target");
        Target->resize(400, 300);
        gridLayout = new QGridLayout(Target);
        gridLayout->setObjectName("gridLayout");
        m_Lab_Character_2 = new QLabel(Target);
        m_Lab_Character_2->setObjectName("m_Lab_Character_2");
        m_Lab_Character_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_Lab_Character_2, 6, 2, 1, 1);

        m_Lab_Character_3 = new QLabel(Target);
        m_Lab_Character_3->setObjectName("m_Lab_Character_3");
        m_Lab_Character_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_Lab_Character_3, 8, 2, 1, 1);

        label_2 = new QLabel(Target);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label_3 = new QLabel(Target);
        label_3->setObjectName("label_3");
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        m_LCD_Damage_2 = new QLCDNumber(Target);
        m_LCD_Damage_2->setObjectName("m_LCD_Damage_2");

        gridLayout->addWidget(m_LCD_Damage_2, 6, 0, 1, 1);

        m_LCD_Damage_3 = new QLCDNumber(Target);
        m_LCD_Damage_3->setObjectName("m_LCD_Damage_3");

        gridLayout->addWidget(m_LCD_Damage_3, 8, 0, 1, 1);

        m_LCD_Damage_1 = new QLCDNumber(Target);
        m_LCD_Damage_1->setObjectName("m_LCD_Damage_1");
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_LCD_Damage_1->sizePolicy().hasHeightForWidth());
        m_LCD_Damage_1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(m_LCD_Damage_1, 4, 0, 1, 1);

        m_LCD_HP_1 = new QLCDNumber(Target);
        m_LCD_HP_1->setObjectName("m_LCD_HP_1");
        sizePolicy.setHeightForWidth(m_LCD_HP_1->sizePolicy().hasHeightForWidth());
        m_LCD_HP_1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(m_LCD_HP_1, 4, 1, 1, 1);

        m_LCD_HP_2 = new QLCDNumber(Target);
        m_LCD_HP_2->setObjectName("m_LCD_HP_2");

        gridLayout->addWidget(m_LCD_HP_2, 6, 1, 1, 1);

        m_LCD_HP_3 = new QLCDNumber(Target);
        m_LCD_HP_3->setObjectName("m_LCD_HP_3");

        gridLayout->addWidget(m_LCD_HP_3, 8, 1, 1, 1);

        m_TB_Attack_1 = new QToolButton(Target);
        m_TB_Attack_1->setObjectName("m_TB_Attack_1");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_TB_Attack_1->sizePolicy().hasHeightForWidth());
        m_TB_Attack_1->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resource/character/Target_Dummy.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_TB_Attack_1->setIcon(icon);
        m_TB_Attack_1->setAutoRaise(false);

        gridLayout->addWidget(m_TB_Attack_1, 4, 4, 1, 1);

        m_Lab_Character_1 = new QLabel(Target);
        m_Lab_Character_1->setObjectName("m_Lab_Character_1");
        m_Lab_Character_1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_Lab_Character_1, 4, 2, 1, 1);

        label = new QLabel(Target);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 2, 1, 1);

        m_TB_Attack_3 = new QToolButton(Target);
        m_TB_Attack_3->setObjectName("m_TB_Attack_3");
        sizePolicy1.setHeightForWidth(m_TB_Attack_3->sizePolicy().hasHeightForWidth());
        m_TB_Attack_3->setSizePolicy(sizePolicy1);
        m_TB_Attack_3->setIcon(icon);

        gridLayout->addWidget(m_TB_Attack_3, 8, 4, 1, 1);

        m_TB_Attack_2 = new QToolButton(Target);
        m_TB_Attack_2->setObjectName("m_TB_Attack_2");
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_TB_Attack_2->sizePolicy().hasHeightForWidth());
        m_TB_Attack_2->setSizePolicy(sizePolicy2);
        m_TB_Attack_2->setIcon(icon);

        gridLayout->addWidget(m_TB_Attack_2, 6, 4, 1, 1);


        retranslateUi(Target);

        QMetaObject::connectSlotsByName(Target);
    } // setupUi

    void retranslateUi(QWidget *Target)
    {
        Target->setWindowTitle(QCoreApplication::translate("Target", "Form", nullptr));
        m_Lab_Character_2->setText(QString());
        m_Lab_Character_3->setText(QString());
        label_2->setText(QCoreApplication::translate("Target", "\320\245\320\237", nullptr));
        label_3->setText(QCoreApplication::translate("Target", "\320\243\321\200\320\276\320\275", nullptr));
        m_TB_Attack_1->setText(QCoreApplication::translate("Target", "...", nullptr));
        m_Lab_Character_1->setText(QString());
        label->setText(QCoreApplication::translate("Target", "\320\237\320\265\321\200\321\201\320\276\320\275\320\260\320\266\320\270 \320\277\321\200\320\276\321\202\320\270\320\262\320\275\320\270\320\272\320\260", nullptr));
        m_TB_Attack_3->setText(QCoreApplication::translate("Target", "...", nullptr));
        m_TB_Attack_2->setText(QCoreApplication::translate("Target", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Target: public Ui_Target {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TARGET_H
