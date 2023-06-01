#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    SelChar = new SelectCharatcer;
    connect(SelChar, &SelectCharatcer::signalSelChar, this, &MainWindow::slotSelChar);
    Battle = new Battlefield;
    connect(this, &MainWindow::signalBeginBattle, Battle, &Battlefield::slotBeginBattle);
    Attack_ = new Attack;
    connect(Attack_, &Attack::signalDamage, this, &MainWindow::slotDamage);
    connect(this, &MainWindow::signalYourDetachment, Attack_, &Attack::slotYourDetachment);
    Target_ = new Target;
    connect(this, &MainWindow::signalOpponentDetachment, Target_, &Target::slotOpponentDetachment);
    connect(Target_, &Target::signalTarget_, this, &MainWindow::slotTarget_);

    socket = new QTcpSocket(this);
    connect(socket, &QTcpSocket::readyRead, this, &MainWindow::slotReadyRead);
    connect(socket, &QTcpSocket::disconnected, socket, &QTcpSocket::deleteLater);
    nextBlockSize = 0;

    fileJsonOpponent = new QFile("./second.json");
    fileDamage = new QFile("./damage.json");
    fileJson = new QFile("./first.json");
    fileJson->open(QIODevice::WriteOnly);
    QVariantMap testMap;
    testMap.insert("Avan", 0);
    testMap.insert("Cord", 1);
    testMap.insert("Ar", 2);
    testMap.insert("Hp_1", 1);
    testMap.insert("Hp_2", 2);
    testMap.insert("Hp_3", 3);
    CharacterList.push_back(0);
    CharacterList.push_back(1);
    CharacterList.push_back(2);
    CharacterList.push_back(1);
    CharacterList.push_back(2);
    CharacterList.push_back(3);
    fileJson->write(QJsonDocument(QJsonObject::fromVariantMap(testMap)).toJson());
    fileJson->close();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_m_PB_Connect_clicked()
{
    socket->connectToHost("127.0.0.1", 2323); //Локальный адрес и порт
}

void MainWindow::SendToServer(QString str, int command)
{
    Data.clear();
    QDataStream out(&Data, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_4);
    out << quint16(0) << str << command;
    out.device()->seek(0);
    out << quint16(Data.size() - sizeof(quint16));
    socket->write(Data);
}

void MainWindow::Refresh()
{
    fileJson->open(QIODevice::WriteOnly);
    QVariantMap testMap;
    testMap.insert("Avan", CharacterList[0]);
    testMap.insert("Cord", CharacterList[1]);
    testMap.insert("Ar", CharacterList[2]);
    testMap.insert("Hp_1", CharacterList[3]);
    testMap.insert("Hp_2", CharacterList[4]);
    testMap.insert("Hp_3", CharacterList[5]);
    fileJson->write(QJsonDocument(QJsonObject::fromVariantMap(testMap)).toJson());
    fileJson->close();
}

QJsonObject MainWindow::GetObject()
{
    QString stringJson;
    fileJson->open(QIODevice::ReadOnly | QIODevice::Text);
    stringJson = fileJson->readAll();
    QJsonDocument doc = QJsonDocument::fromJson(stringJson.toUtf8());
    QJsonObject json = doc.object();
    fileJson->close();
    return json;
}

QJsonObject MainWindow::GetObjectOpponent()
{
    QString stringJson;
    fileJsonOpponent->open(QIODevice::ReadOnly | QIODevice::Text);
    stringJson = fileJsonOpponent->readAll();
    QJsonDocument doc = QJsonDocument::fromJson(stringJson.toUtf8());
    QJsonObject json = doc.object();
    fileJsonOpponent->close();
    return json;
}

void MainWindow::slotReadyRead()
{
    QDataStream in(socket);
    in.setVersion(QDataStream::Qt_6_4);
    if(in.status()==QDataStream::Ok)
    {
        while(true)
        {
            if(nextBlockSize == 0)
            {
                if(socket->bytesAvailable() < 2)
                    break;
                in >> nextBlockSize;
            }
            if(socket->bytesAvailable() < nextBlockSize)
                break;

            QString stringJson;
            QString player;
            int command;
            in >> stringJson >> player >> command;
            nextBlockSize = 0;           
            QJsonDocument doc = QJsonDocument::fromJson(stringJson.toUtf8());
            QJsonObject json = doc.object();

            if(command == 0)
            {
                emit signalBeginBattle(json, player);

                Battle->show();
            }
            else if(command == 1)
                emit signalOpponentDetachment(json);
            else
                emit signalYourDetachment(json);

            break;
        }
    }
    else
        qDebug() << "Error QDataStream";
}

void MainWindow::slotSelChar(int characterNumber_, int place)
{
    switch (characterNumber_)
    {
    case 0:
        image = new QPixmap(":/resource/character/Reaper.png");
        if(place == 0)
        {
            ui->m_Lab_YourCharacter_1->setPixmap(*image);
            ui->m_Lab_YourCharacter_1->show();
            CharacterList[0] = 0;
            CharacterList[3] = 1;
        }
        if(place == 1)
        {
            ui->m_Lab_YourCharacter_2->setPixmap(*image);
            ui->m_Lab_YourCharacter_2->show();
            CharacterList[1] = 0;
            CharacterList[4] = 1;
        }
        if(place == 2)
        {
            ui->m_Lab_YourCharacter_3->setPixmap(*image);
            ui->m_Lab_YourCharacter_3->show();
            CharacterList[2] = 0;
            CharacterList[5] = 1;
        }
        break;
    case 1:
        image = new QPixmap(":/resource/character/Paladin.png");
        if(place == 0)
        {
            ui->m_Lab_YourCharacter_1->setPixmap(*image);
            ui->m_Lab_YourCharacter_1->show();
            CharacterList[0] = 1;
            CharacterList[3] = 2;
        }
        if(place == 1)
        {
            ui->m_Lab_YourCharacter_2->setPixmap(*image);
            ui->m_Lab_YourCharacter_2->show();
            CharacterList[1] = 1;
            CharacterList[4] = 2;
        }
        if(place == 2)
        {
            ui->m_Lab_YourCharacter_3->setPixmap(*image);
            ui->m_Lab_YourCharacter_3->show();
            CharacterList[2] = 1;
            CharacterList[5] = 2;
        }
        break;
    case 2:
        image = new QPixmap(":/resource/character/Corgi.png");
        if(place == 0)
        {
            ui->m_Lab_YourCharacter_1->setPixmap(*image);
            ui->m_Lab_YourCharacter_1->show();
            CharacterList[0] = 2;
            CharacterList[3] = 3;
        }
        if(place == 1)
        {
            ui->m_Lab_YourCharacter_2->setPixmap(*image);
            ui->m_Lab_YourCharacter_2->show();
            CharacterList[1] = 2;
            CharacterList[4] = 3;
        }
        if(place == 2)
        {
            ui->m_Lab_YourCharacter_3->setPixmap(*image);
            ui->m_Lab_YourCharacter_3->show();
            CharacterList[2] = 2;
            CharacterList[5] = 3;
        }
        break;
    case 3:
        image = new QPixmap(":/resource/character/Black_Cat.png");
        if(place == 0)
        {
            ui->m_Lab_YourCharacter_1->setPixmap(*image);
            ui->m_Lab_YourCharacter_1->show();
            CharacterList[0] = 3;
            CharacterList[3] = 3;
        }
        if(place == 1)
        {
            ui->m_Lab_YourCharacter_2->setPixmap(*image);
            ui->m_Lab_YourCharacter_2->show();
            CharacterList[1] = 3;
            CharacterList[4] = 3;
        }
        if(place == 2)
        {
            ui->m_Lab_YourCharacter_3->setPixmap(*image);
            ui->m_Lab_YourCharacter_3->show();
            CharacterList[2] = 3;
            CharacterList[5] = 3;
        }
        break;
    default:
        break;
    }
}

void MainWindow::slotDamage(int damage)
{
    Current_Damage = damage;
    SendToServer("", 2);
    Target_->show();
}

void MainWindow::slotTarget_(int characterNumber_)
{
    fileDamage->open(QIODevice::WriteOnly);
    QVariantMap testMap;
    testMap.insert("Damage", Current_Damage);
    testMap.insert("Character", characterNumber_);
    fileDamage->write(QJsonDocument(QJsonObject::fromVariantMap(testMap)).toJson());
    fileDamage->close();

    QString stringJson;
    fileDamage->open(QIODevice::ReadOnly | QIODevice::Text);
    stringJson = fileDamage->readAll();
    SendToServer(stringJson, 1);
    fileDamage->close();
}

void MainWindow::on_m_PB_SelectCharacter_clicked()
{
    if(Squad_Sent == 0)
        SelChar->show();
}

void MainWindow::on_m_PB_Send_clicked()
{
    Squad_Sent = 1;
    Refresh();
    QString stringJson;
    fileJson->open(QIODevice::ReadOnly | QIODevice::Text);
    stringJson = fileJson->readAll();
    SendToServer(stringJson, 0);
    fileJson->close();
}

void MainWindow::on_m_PB_Attack_clicked()
{
    if(Squad_Sent == 1)
    {
        SendToServer("", 3);
        Attack_->show();
    }
    else
        qDebug() << "Слишком рано!";
}

