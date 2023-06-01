/********************************************************************************
** Form generated from reading UI file 'records.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORDS_H
#define UI_RECORDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Records
{
public:
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *Records)
    {
        if (Records->objectName().isEmpty())
            Records->setObjectName("Records");
        Records->resize(400, 300);
        verticalLayout = new QVBoxLayout(Records);
        verticalLayout->setObjectName("verticalLayout");

        retranslateUi(Records);

        QMetaObject::connectSlotsByName(Records);
    } // setupUi

    void retranslateUi(QWidget *Records)
    {
        Records->setWindowTitle(QCoreApplication::translate("Records", "Records", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Records: public Ui_Records {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORDS_H
