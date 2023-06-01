/********************************************************************************
** Form generated from reading UI file 'paintmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINTMAINWINDOW_H
#define UI_PAINTMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_paintMainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *m_topLayout;
    QPushButton *m_fileButton;
    QPushButton *m_mainButton;
    QWidget *m_mainLayout_2;
    QHBoxLayout *m_mainLayout;
    QPushButton *m_pbPencil;
    QPushButton *m_pbBrush;
    QPushButton *m_pbText;
    QPushButton *m_pbEraser;
    QPushButton *m_pbRect;
    QPushButton *m_pbColor;
    QWidget *m_graphLayout;
    QHBoxLayout *m_grapLayout;
    QGraphicsView *m_graphScene;

    void setupUi(QMainWindow *paintMainWindow)
    {
        if (paintMainWindow->objectName().isEmpty())
            paintMainWindow->setObjectName("paintMainWindow");
        paintMainWindow->resize(800, 600);
        paintMainWindow->setMaximumSize(QSize(1920, 1080));
        centralwidget = new QWidget(paintMainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMaximumSize(QSize(1920, 1080));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        m_topLayout = new QHBoxLayout();
        m_topLayout->setSpacing(0);
        m_topLayout->setObjectName("m_topLayout");
        m_fileButton = new QPushButton(centralwidget);
        m_fileButton->setObjectName("m_fileButton");
        m_fileButton->setMaximumSize(QSize(100, 40));
        m_fileButton->setFlat(true);

        m_topLayout->addWidget(m_fileButton);

        m_mainButton = new QPushButton(centralwidget);
        m_mainButton->setObjectName("m_mainButton");
        m_mainButton->setMaximumSize(QSize(100, 40));
        m_mainButton->setCheckable(true);
        m_mainButton->setFlat(true);

        m_topLayout->addWidget(m_mainButton);


        verticalLayout->addLayout(m_topLayout);

        m_mainLayout_2 = new QWidget(centralwidget);
        m_mainLayout_2->setObjectName("m_mainLayout_2");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_mainLayout_2->sizePolicy().hasHeightForWidth());
        m_mainLayout_2->setSizePolicy(sizePolicy);
        m_mainLayout_2->setMaximumSize(QSize(16777215, 40));
        m_mainLayout = new QHBoxLayout(m_mainLayout_2);
        m_mainLayout->setSpacing(0);
        m_mainLayout->setObjectName("m_mainLayout");
        m_mainLayout->setContentsMargins(0, 0, 0, 0);
        m_pbPencil = new QPushButton(m_mainLayout_2);
        m_pbPencil->setObjectName("m_pbPencil");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(100);
        sizePolicy1.setVerticalStretch(100);
        sizePolicy1.setHeightForWidth(m_pbPencil->sizePolicy().hasHeightForWidth());
        m_pbPencil->setSizePolicy(sizePolicy1);
        m_pbPencil->setMaximumSize(QSize(100, 40));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rsc/rsc/pencil.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_pbPencil->setIcon(icon);
        m_pbPencil->setIconSize(QSize(40, 40));
        m_pbPencil->setCheckable(false);

        m_mainLayout->addWidget(m_pbPencil);

        m_pbBrush = new QPushButton(m_mainLayout_2);
        m_pbBrush->setObjectName("m_pbBrush");
        sizePolicy1.setHeightForWidth(m_pbBrush->sizePolicy().hasHeightForWidth());
        m_pbBrush->setSizePolicy(sizePolicy1);
        m_pbBrush->setMaximumSize(QSize(100, 40));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rsc/rsc/brush.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_pbBrush->setIcon(icon1);
        m_pbBrush->setIconSize(QSize(40, 40));
        m_pbBrush->setCheckable(false);

        m_mainLayout->addWidget(m_pbBrush);

        m_pbText = new QPushButton(m_mainLayout_2);
        m_pbText->setObjectName("m_pbText");
        sizePolicy.setHeightForWidth(m_pbText->sizePolicy().hasHeightForWidth());
        m_pbText->setSizePolicy(sizePolicy);
        m_pbText->setMaximumSize(QSize(100, 40));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/rsc/rsc/text-font.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_pbText->setIcon(icon2);
        m_pbText->setIconSize(QSize(40, 40));
        m_pbText->setCheckable(false);

        m_mainLayout->addWidget(m_pbText);

        m_pbEraser = new QPushButton(m_mainLayout_2);
        m_pbEraser->setObjectName("m_pbEraser");
        sizePolicy.setHeightForWidth(m_pbEraser->sizePolicy().hasHeightForWidth());
        m_pbEraser->setSizePolicy(sizePolicy);
        m_pbEraser->setMaximumSize(QSize(100, 40));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/rsc/rsc/erase.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_pbEraser->setIcon(icon3);
        m_pbEraser->setIconSize(QSize(40, 40));
        m_pbEraser->setCheckable(false);

        m_mainLayout->addWidget(m_pbEraser);

        m_pbRect = new QPushButton(m_mainLayout_2);
        m_pbRect->setObjectName("m_pbRect");
        sizePolicy1.setHeightForWidth(m_pbRect->sizePolicy().hasHeightForWidth());
        m_pbRect->setSizePolicy(sizePolicy1);
        m_pbRect->setMaximumSize(QSize(100, 40));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/rsc/rsc/shapes.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_pbRect->setIcon(icon4);
        m_pbRect->setIconSize(QSize(40, 40));
        m_pbRect->setCheckable(false);

        m_mainLayout->addWidget(m_pbRect);

        m_pbColor = new QPushButton(m_mainLayout_2);
        m_pbColor->setObjectName("m_pbColor");
        sizePolicy.setHeightForWidth(m_pbColor->sizePolicy().hasHeightForWidth());
        m_pbColor->setSizePolicy(sizePolicy);
        m_pbColor->setMaximumSize(QSize(100, 40));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/rsc/rsc/color-palette.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_pbColor->setIcon(icon5);
        m_pbColor->setIconSize(QSize(40, 40));

        m_mainLayout->addWidget(m_pbColor);


        verticalLayout->addWidget(m_mainLayout_2);

        m_graphLayout = new QWidget(centralwidget);
        m_graphLayout->setObjectName("m_graphLayout");
        sizePolicy.setHeightForWidth(m_graphLayout->sizePolicy().hasHeightForWidth());
        m_graphLayout->setSizePolicy(sizePolicy);
        m_graphLayout->setMaximumSize(QSize(1920, 1080));
        m_grapLayout = new QHBoxLayout(m_graphLayout);
        m_grapLayout->setObjectName("m_grapLayout");
        m_graphScene = new QGraphicsView(m_graphLayout);
        m_graphScene->setObjectName("m_graphScene");
        sizePolicy.setHeightForWidth(m_graphScene->sizePolicy().hasHeightForWidth());
        m_graphScene->setSizePolicy(sizePolicy);
        m_graphScene->setMaximumSize(QSize(165577, 165577));
        m_graphScene->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        m_graphScene->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        m_graphScene->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        m_graphScene->setInteractive(true);
        m_graphScene->setAlignment(Qt::AlignCenter);
        m_graphScene->setDragMode(QGraphicsView::NoDrag);
        m_graphScene->setTransformationAnchor(QGraphicsView::NoAnchor);
        m_graphScene->setViewportUpdateMode(QGraphicsView::MinimalViewportUpdate);

        m_grapLayout->addWidget(m_graphScene);


        verticalLayout->addWidget(m_graphLayout);

        paintMainWindow->setCentralWidget(centralwidget);

        retranslateUi(paintMainWindow);

        QMetaObject::connectSlotsByName(paintMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *paintMainWindow)
    {
        paintMainWindow->setWindowTitle(QCoreApplication::translate("paintMainWindow", "CrappyPaint", nullptr));
        m_fileButton->setText(QCoreApplication::translate("paintMainWindow", "File", nullptr));
        m_mainButton->setText(QCoreApplication::translate("paintMainWindow", "Main", nullptr));
        m_pbPencil->setText(QCoreApplication::translate("paintMainWindow", "Pencil", nullptr));
        m_pbBrush->setText(QCoreApplication::translate("paintMainWindow", "Brush", nullptr));
        m_pbText->setText(QString());
        m_pbEraser->setText(QCoreApplication::translate("paintMainWindow", "Eraser", nullptr));
        m_pbRect->setText(QCoreApplication::translate("paintMainWindow", "Shapes", nullptr));
        m_pbColor->setText(QCoreApplication::translate("paintMainWindow", "Color", nullptr));
    } // retranslateUi

};

namespace Ui {
    class paintMainWindow: public Ui_paintMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINTMAINWINDOW_H
