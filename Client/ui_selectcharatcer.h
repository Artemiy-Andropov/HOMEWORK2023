/********************************************************************************
** Form generated from reading UI file 'selectcharatcer.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTCHARATCER_H
#define UI_SELECTCHARATCER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectCharatcer
{
public:
    QGridLayout *gridLayout;
    QPushButton *m_PB_PreviousCharacter;
    QLabel *m_Lab_Character;
    QPushButton *m_PB_NextCharacter;
    QPushButton *m_PB_SelectCharacter;

    void setupUi(QWidget *SelectCharatcer)
    {
        if (SelectCharatcer->objectName().isEmpty())
            SelectCharatcer->setObjectName("SelectCharatcer");
        SelectCharatcer->resize(491, 409);
        gridLayout = new QGridLayout(SelectCharatcer);
        gridLayout->setObjectName("gridLayout");
        m_PB_PreviousCharacter = new QPushButton(SelectCharatcer);
        m_PB_PreviousCharacter->setObjectName("m_PB_PreviousCharacter");
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_PB_PreviousCharacter->sizePolicy().hasHeightForWidth());
        m_PB_PreviousCharacter->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        m_PB_PreviousCharacter->setFont(font);

        gridLayout->addWidget(m_PB_PreviousCharacter, 0, 0, 1, 1);

        m_Lab_Character = new QLabel(SelectCharatcer);
        m_Lab_Character->setObjectName("m_Lab_Character");
        m_Lab_Character->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_Lab_Character, 0, 1, 1, 1);

        m_PB_NextCharacter = new QPushButton(SelectCharatcer);
        m_PB_NextCharacter->setObjectName("m_PB_NextCharacter");
        sizePolicy.setHeightForWidth(m_PB_NextCharacter->sizePolicy().hasHeightForWidth());
        m_PB_NextCharacter->setSizePolicy(sizePolicy);
        m_PB_NextCharacter->setFont(font);

        gridLayout->addWidget(m_PB_NextCharacter, 0, 2, 1, 1);

        m_PB_SelectCharacter = new QPushButton(SelectCharatcer);
        m_PB_SelectCharacter->setObjectName("m_PB_SelectCharacter");
        QFont font1;
        font1.setBold(true);
        m_PB_SelectCharacter->setFont(font1);

        gridLayout->addWidget(m_PB_SelectCharacter, 1, 0, 1, 3);


        retranslateUi(SelectCharatcer);

        QMetaObject::connectSlotsByName(SelectCharatcer);
    } // setupUi

    void retranslateUi(QWidget *SelectCharatcer)
    {
        SelectCharatcer->setWindowTitle(QCoreApplication::translate("SelectCharatcer", "Form", nullptr));
        m_PB_PreviousCharacter->setText(QCoreApplication::translate("SelectCharatcer", "<", nullptr));
        m_Lab_Character->setText(QString());
        m_PB_NextCharacter->setText(QCoreApplication::translate("SelectCharatcer", ">", nullptr));
        m_PB_SelectCharacter->setText(QCoreApplication::translate("SelectCharatcer", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \320\277\320\265\321\200\321\201\320\276\320\275\320\260\320\266\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectCharatcer: public Ui_SelectCharatcer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTCHARATCER_H
