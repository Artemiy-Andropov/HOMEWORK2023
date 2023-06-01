#include "selectcharatcer.h"
#include "ui_selectcharatcer.h"

SelectCharatcer::SelectCharatcer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SelectCharatcer)
{
    ui->setupUi(this);
    image = new QPixmap(":/resource/character/Reaper.png");
    ui->m_Lab_Character->setPixmap(*image);
    ui->m_Lab_Character->show();
}

SelectCharatcer::~SelectCharatcer()
{
    delete ui;
}

void SelectCharatcer::on_m_PB_NextCharacter_clicked()
{
    characterNumber++;
    if(characterNumber > 3)
        characterNumber = 0;
    CharacterDisplay();
}

void SelectCharatcer::on_m_PB_PreviousCharacter_clicked()
{
    characterNumber--;
    if(characterNumber < 0)
        characterNumber = 3;
    CharacterDisplay();
}

void SelectCharatcer::CharacterDisplay()
{
    switch (characterNumber)
    {
    case 0:
        image = new QPixmap(":/resource/character/Reaper.png");
        ui->m_Lab_Character->setPixmap(*image);
        ui->m_Lab_Character->show();
        break;
    case 1:
        image = new QPixmap(":/resource/character/Paladin.png");
        ui->m_Lab_Character->setPixmap(*image);
        ui->m_Lab_Character->show();
        break;
    case 2:
        image = new QPixmap(":/resource/character/Corgi.png");
        ui->m_Lab_Character->setPixmap(*image);
        ui->m_Lab_Character->show();
        break;
    case 3:
        image = new QPixmap(":/resource/character/Black_Cat.png");
        ui->m_Lab_Character->setPixmap(*image);
        ui->m_Lab_Character->show();
        break;
    default:
        break;
    }
}

void SelectCharatcer::on_m_PB_SelectCharacter_clicked()
{
    QMessageBox msgBox;
    msgBox.setIcon(QMessageBox::Question);
    msgBox.setText("Выберите, куда разместить персонажа.");

    QAbstractButton *AvanButton = msgBox.addButton(tr("Авангард"), QMessageBox::ActionRole);
    QAbstractButton *CordButton = msgBox.addButton(tr("Кордебаталия"), QMessageBox::ActionRole);
    QAbstractButton *ArButton = msgBox.addButton(tr("Арьергард"), QMessageBox::ActionRole);
 //   QAbstractButton *Cancel_ = msgBox.addButton(tr("Не размещать"), QMessageBox::Cancel);

    msgBox.addButton(AvanButton, QMessageBox::ActionRole);
    msgBox.addButton(CordButton, QMessageBox::ActionRole);
    msgBox.addButton(ArButton, QMessageBox::ActionRole);
    msgBox.setStandardButtons(QMessageBox::Cancel);
//    msgBox.addButton(Cancel_, QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Cancel);

    msgBox.exec();

    if(msgBox.clickedButton() == AvanButton)
        emit signalSelChar(characterNumber, 0);
    if(msgBox.clickedButton() == CordButton)
        emit signalSelChar(characterNumber, 1);
    if(msgBox.clickedButton() == ArButton)
        emit signalSelChar(characterNumber, 2);
}
