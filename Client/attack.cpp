#include "attack.h"
#include "ui_attack.h"

Attack::Attack(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Attack)
{
    ui->setupUi(this);
}

Attack::~Attack()
{
    delete ui;
}

void Attack::ExposeCharacter(int characterNumber_, int place, int HP)
{
    switch (characterNumber_)
    {
    case 0:
        image = new QPixmap(":/resource/character/Reaper.png");
        if(place == 0)
        {
            ui->m_Lab_YourCharacter_1->setPixmap(*image);
            ui->m_Lab_YourCharacter_1->show();
            ui->m_LCD_Damage_1->display(3);
            ui->m_LCD_HP_1->display(HP);
        }
        if(place == 1)
        {
            ui->m_Lab_YourCharacter_2->setPixmap(*image);
            ui->m_Lab_YourCharacter_2->show();
            ui->m_LCD_Damage_2->display(3);
            ui->m_LCD_HP_2->display(HP);
        }
        if(place == 2)
        {
            ui->m_Lab_YourCharacter_3->setPixmap(*image);
            ui->m_Lab_YourCharacter_3->show();
            ui->m_LCD_Damage_3->display(3);
            ui->m_LCD_HP_3->display(HP);
        }
        break;
    case 1:
        image = new QPixmap(":/resource/character/Paladin.png");
        if(place == 0)
        {
            ui->m_Lab_YourCharacter_1->setPixmap(*image);
            ui->m_Lab_YourCharacter_1->show();
            ui->m_LCD_Damage_1->display(2);
            ui->m_LCD_HP_1->display(HP);
        }
        if(place == 1)
        {
            ui->m_Lab_YourCharacter_2->setPixmap(*image);
            ui->m_Lab_YourCharacter_2->show();
            ui->m_LCD_Damage_2->display(2);
            ui->m_LCD_HP_2->display(HP);
        }
        if(place == 2)
        {
            ui->m_Lab_YourCharacter_3->setPixmap(*image);
            ui->m_Lab_YourCharacter_3->show();
            ui->m_LCD_Damage_3->display(2);
            ui->m_LCD_HP_3->display(HP);
        }
        break;
    case 2:
        image = new QPixmap(":/resource/character/Corgi.png");
        if(place == 0)
        {
            ui->m_Lab_YourCharacter_1->setPixmap(*image);
            ui->m_Lab_YourCharacter_1->show();
            ui->m_LCD_Damage_1->display(1);
            ui->m_LCD_HP_1->display(HP);
        }
        if(place == 1)
        {
            ui->m_Lab_YourCharacter_2->setPixmap(*image);
            ui->m_Lab_YourCharacter_2->show();
            ui->m_LCD_Damage_2->display(1);
            ui->m_LCD_HP_2->display(HP);
        }
        if(place == 2)
        {
            ui->m_Lab_YourCharacter_3->setPixmap(*image);
            ui->m_Lab_YourCharacter_3->show();
            ui->m_LCD_Damage_3->display(1);
            ui->m_LCD_HP_3->display(HP);
        }
        break;
    case 3:
        image = new QPixmap(":/resource/character/Black_Cat.png");
        if(place == 0)
        {
            ui->m_Lab_YourCharacter_1->setPixmap(*image);
            ui->m_Lab_YourCharacter_1->show();
            ui->m_LCD_Damage_1->display(1);
            ui->m_LCD_HP_1->display(HP);
        }
        if(place == 1)
        {
            ui->m_Lab_YourCharacter_2->setPixmap(*image);
            ui->m_Lab_YourCharacter_2->show();
            ui->m_LCD_Damage_2->display(1);
            ui->m_LCD_HP_2->display(HP);
        }
        if(place == 2)
        {
            ui->m_Lab_YourCharacter_3->setPixmap(*image);
            ui->m_Lab_YourCharacter_3->show();
            ui->m_LCD_Damage_3->display(1);
            ui->m_LCD_HP_3->display(HP);
        }
        break;
    default:
        break;
    }
}

void Attack::slotYourDetachment(QJsonObject json)
{
    if(json["Hp_1"].toInt() > 0)
        ExposeCharacter(json["Avan"].toInt(), 0, json["Hp_1"].toInt());
    else
    {
        ui->m_Lab_YourCharacter_1->clear();
        ui->m_LCD_Damage_1->display(0);
        ui->m_LCD_HP_1->display(0);
    }

    if(json["Hp_2"].toInt() > 0)
        ExposeCharacter(json["Cord"].toInt(), 1, json["Hp_2"].toInt());
    else
    {
        ui->m_Lab_YourCharacter_2->clear();
        ui->m_LCD_Damage_2->display(0);
        ui->m_LCD_HP_2->display(0);
    }

    if(json["Hp_3"].toInt() > 0)
        ExposeCharacter(json["Ar"].toInt(), 2, json["Hp_3"].toInt());
    else
    {
        ui->m_Lab_YourCharacter_3->clear();
        ui->m_LCD_Damage_3->display(0);
        ui->m_LCD_HP_3->display(0);
    }
}

void Attack::on_m_TB_Attack_1_clicked()
{
    emit signalDamage(ui->m_LCD_Damage_1->intValue());
    this->close();
}

void Attack::on_m_TB_Attack_2_clicked()
{
    emit signalDamage(ui->m_LCD_Damage_2->intValue());
    this->close();
}
void Attack::on_m_TB_Attack_3_clicked()
{
    emit signalDamage(ui->m_LCD_Damage_3->intValue());
    this->close();
}
