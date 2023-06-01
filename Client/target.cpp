#include "target.h"
#include "ui_target.h"

Target::Target(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Target)
{
    ui->setupUi(this);
}

Target::~Target()
{
    delete ui;
}

void Target::ExposeCharacter(int characterNumber_, int place, int HP)
{
    switch (characterNumber_)
    {
    case 0:
        image = new QPixmap(":/resource/character/Reaper.png");
        if(place == 0)
        {
            ui->m_Lab_Character_1->setPixmap(*image);
            ui->m_Lab_Character_1->show();
            ui->m_LCD_Damage_1->display(3);
            ui->m_LCD_HP_1->display(HP);
        }
        if(place == 1)
        {
            ui->m_Lab_Character_2->setPixmap(*image);
            ui->m_Lab_Character_2->show();
            ui->m_LCD_Damage_2->display(3);
            ui->m_LCD_HP_2->display(HP);
        }
        if(place == 2)
        {
            ui->m_Lab_Character_3->setPixmap(*image);
            ui->m_Lab_Character_3->show();
            ui->m_LCD_Damage_3->display(3);
            ui->m_LCD_HP_3->display(HP);
        }
        break;
    case 1:
        image = new QPixmap(":/resource/character/Paladin.png");
        if(place == 0)
        {
            ui->m_Lab_Character_1->setPixmap(*image);
            ui->m_Lab_Character_1->show();
            ui->m_LCD_Damage_1->display(2);
            ui->m_LCD_HP_1->display(HP);
        }
        if(place == 1)
        {
            ui->m_Lab_Character_2->setPixmap(*image);
            ui->m_Lab_Character_2->show();
            ui->m_LCD_Damage_2->display(2);
            ui->m_LCD_HP_2->display(HP);
        }
        if(place == 2)
        {
            ui->m_Lab_Character_3->setPixmap(*image);
            ui->m_Lab_Character_3->show();
            ui->m_LCD_Damage_3->display(2);
            ui->m_LCD_HP_3->display(HP);
        }
        break;
    case 2:
        image = new QPixmap(":/resource/character/Corgi.png");
        if(place == 0)
        {
            ui->m_Lab_Character_1->setPixmap(*image);
            ui->m_Lab_Character_1->show();
            ui->m_LCD_Damage_1->display(1);
            ui->m_LCD_HP_1->display(HP);
        }
        if(place == 1)
        {
            ui->m_Lab_Character_2->setPixmap(*image);
            ui->m_Lab_Character_2->show();
            ui->m_LCD_Damage_2->display(1);
            ui->m_LCD_HP_2->display(HP);
        }
        if(place == 2)
        {
            ui->m_Lab_Character_3->setPixmap(*image);
            ui->m_Lab_Character_3->show();
            ui->m_LCD_Damage_3->display(1);
            ui->m_LCD_HP_3->display(HP);
        }
        break;
    case 3:
        image = new QPixmap(":/resource/character/Black_Cat.png");
        if(place == 0)
        {
            ui->m_Lab_Character_1->setPixmap(*image);
            ui->m_Lab_Character_1->show();
            ui->m_LCD_Damage_1->display(1);
            ui->m_LCD_HP_1->display(HP);
        }
        if(place == 1)
        {
            ui->m_Lab_Character_2->setPixmap(*image);
            ui->m_Lab_Character_2->show();
            ui->m_LCD_Damage_2->display(1);
            ui->m_LCD_HP_2->display(HP);
        }
        if(place == 2)
        {
            ui->m_Lab_Character_3->setPixmap(*image);
            ui->m_Lab_Character_3->show();
            ui->m_LCD_Damage_3->display(1);
            ui->m_LCD_HP_3->display(HP);
        }
        break;
    default:
        break;
    }
}

void Target::slotOpponentDetachment(QJsonObject json)
{
    if(json["Hp_1"].toInt() > 0)
        ExposeCharacter(json["Avan"].toInt(), 0, json["Hp_1"].toInt());
    else
    {
        ui->m_Lab_Character_1->clear();
        ui->m_LCD_Damage_1->display(0);
    }

    if(json["Hp_2"].toInt() > 0)
        ExposeCharacter(json["Cord"].toInt(), 1, json["Hp_2"].toInt());
    else
    {
        ui->m_Lab_Character_2->clear();
        ui->m_LCD_Damage_2->display(0);
    }

    if(json["Hp_3"].toInt() > 0)
        ExposeCharacter(json["Ar"].toInt(), 2, json["Hp_3"].toInt());
    else
    {
        ui->m_Lab_Character_3->clear();
        ui->m_LCD_Damage_3->display(0);
    }
}

void Target::on_m_TB_Attack_1_clicked()
{
    emit signalTarget_(0);
    this->close();
}

void Target::on_m_TB_Attack_2_clicked()
{
    emit signalTarget_(1);
    this->close();
}

void Target::on_m_TB_Attack_3_clicked()
{
    emit signalTarget_(2);
    this->close();
}

