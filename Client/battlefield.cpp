#include "battlefield.h"
#include "ui_battlefield.h"

Battlefield::Battlefield(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Battlefield)
{
    ui->setupUi(this);
}

Battlefield::~Battlefield()
{
    delete ui;
}

void Battlefield::OpponentCharacter(int characterNumber_, int place)
{
    switch (characterNumber_)
    {
    case 0:
        image = new QPixmap(":/resource/character/Reaper.png");
        if(place == 0)
        {
            ui->m_Lab_OpponentCharacter_1->setPixmap(*image);
            ui->m_Lab_OpponentCharacter_1->show();
        }
        if(place == 1)
        {
            ui->m_Lab_OpponentCharacter_2->setPixmap(*image);
            ui->m_Lab_OpponentCharacter_2->show();
        }
        if(place == 2)
        {
            ui->m_Lab_OpponentCharacter_3->setPixmap(*image);
            ui->m_Lab_OpponentCharacter_3->show();
        }
        break;
    case 1:
        image = new QPixmap(":/resource/character/Paladin.png");
        if(place == 0)
        {
            ui->m_Lab_OpponentCharacter_1->setPixmap(*image);
            ui->m_Lab_OpponentCharacter_1->show();
        }
        if(place == 1)
        {
            ui->m_Lab_OpponentCharacter_2->setPixmap(*image);
            ui->m_Lab_OpponentCharacter_2->show();
        }
        if(place == 2)
        {
            ui->m_Lab_OpponentCharacter_3->setPixmap(*image);
            ui->m_Lab_OpponentCharacter_3->show();
        }
        break;
    case 2:
        image = new QPixmap(":/resource/character/Corgi.png");
        if(place == 0)
        {
            ui->m_Lab_OpponentCharacter_1->setPixmap(*image);
            ui->m_Lab_OpponentCharacter_1->show();
        }
        if(place == 1)
        {
            ui->m_Lab_OpponentCharacter_2->setPixmap(*image);
            ui->m_Lab_OpponentCharacter_2->show();
        }
        if(place == 2)
        {
            ui->m_Lab_OpponentCharacter_3->setPixmap(*image);
            ui->m_Lab_OpponentCharacter_3->show();
        }
        break;
    case 3:
        image = new QPixmap(":/resource/character/Black_Cat.png");
        if(place == 0)
        {
            ui->m_Lab_OpponentCharacter_1->setPixmap(*image);
            ui->m_Lab_OpponentCharacter_1->show();
        }
        if(place == 1)
        {
            ui->m_Lab_OpponentCharacter_2->setPixmap(*image);
            ui->m_Lab_OpponentCharacter_2->show();
        }
        if(place == 2)
        {
            ui->m_Lab_OpponentCharacter_3->setPixmap(*image);
            ui->m_Lab_OpponentCharacter_3->show();
        }
        break;
    default:
        break;
    }
}

void Battlefield::YourCharacter(int characterNumber_, int place)
{
    switch (characterNumber_)
    {
    case 0:
        image = new QPixmap(":/resource/character/Reaper.png");
        if(place == 0)
        {
            ui->m_Lab_YourCharacter_1->setPixmap(*image);
            ui->m_Lab_YourCharacter_1->show();
        }
        if(place == 1)
        {
            ui->m_Lab_YourCharacter_2->setPixmap(*image);
            ui->m_Lab_YourCharacter_2->show();
        }
        if(place == 2)
        {
            ui->m_Lab_YourCharacter_3->setPixmap(*image);
            ui->m_Lab_YourCharacter_3->show();
        }
        break;
    case 1:
        image = new QPixmap(":/resource/character/Paladin.png");
        if(place == 0)
        {
            ui->m_Lab_YourCharacter_1->setPixmap(*image);
            ui->m_Lab_YourCharacter_1->show();
        }
        if(place == 1)
        {
            ui->m_Lab_YourCharacter_2->setPixmap(*image);
            ui->m_Lab_YourCharacter_2->show();
        }
        if(place == 2)
        {
            ui->m_Lab_YourCharacter_3->setPixmap(*image);
            ui->m_Lab_YourCharacter_3->show();
        }
        break;
    case 2:
        image = new QPixmap(":/resource/character/Corgi.png");
        if(place == 0)
        {
            ui->m_Lab_YourCharacter_1->setPixmap(*image);
            ui->m_Lab_YourCharacter_1->show();
        }
        if(place == 1)
        {
            ui->m_Lab_YourCharacter_2->setPixmap(*image);
            ui->m_Lab_YourCharacter_2->show();
        }
        if(place == 2)
        {
            ui->m_Lab_YourCharacter_3->setPixmap(*image);
            ui->m_Lab_YourCharacter_3->show();
        }
        break;
    case 3:
        image = new QPixmap(":/resource/character/Black_Cat.png");
        if(place == 0)
        {
            ui->m_Lab_YourCharacter_1->setPixmap(*image);
            ui->m_Lab_YourCharacter_1->show();
        }
        if(place == 1)
        {
            ui->m_Lab_YourCharacter_2->setPixmap(*image);
            ui->m_Lab_YourCharacter_2->show();
        }
        if(place == 2)
        {
            ui->m_Lab_YourCharacter_3->setPixmap(*image);
            ui->m_Lab_YourCharacter_3->show();
        }
        break;
    default:
        break;
    }
}

void Battlefield::slotBeginBattle(QJsonObject Jobj, QString player)
{
    if(player == "First")
    {
        if(Jobj["Hp_1"].toInt() > 0)
            YourCharacter(Jobj["Avan"].toInt(), 0);
        else
            ui->m_Lab_YourCharacter_1->clear();

        if(Jobj["Hp_2"].toInt() > 0)
            YourCharacter(Jobj["Cord"].toInt(), 1);
        else
            ui->m_Lab_YourCharacter_2->clear();

        if(Jobj["Hp_3"].toInt() > 0)
            YourCharacter(Jobj["Ar"].toInt(), 2);
        else
            ui->m_Lab_YourCharacter_3->clear();
    }
    else if(player == "Second")
    {
        if(Jobj["Hp_1"].toInt() > 0)
            OpponentCharacter(Jobj["Avan"].toInt(), 0);
        else
            ui->m_Lab_OpponentCharacter_1->clear();

        if(Jobj["Hp_2"].toInt() > 0)
            OpponentCharacter(Jobj["Cord"].toInt(), 1);
        else
            ui->m_Lab_OpponentCharacter_2->clear();

        if(Jobj["Hp_3"].toInt() > 0)
            OpponentCharacter(Jobj["Ar"].toInt(), 2);
        else
            ui->m_Lab_OpponentCharacter_3->clear();
    }
    else
        qDebug() << "Error";
}
