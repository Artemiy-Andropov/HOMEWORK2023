#include "server.h"

Server::Server()
{
    if(this->listen(QHostAddress::Any, 2323))
    {
        qDebug() << "start";
        FirstPlayer = new QFile("./first_player.json");
        SecondPlayer = new QFile("./second_player.json");
    }
    else
        qDebug() << "error";
    nextBlockSize = 0;
}

void Server::incomingConnection(qintptr socketDescriptor)
{
    if(Sockets.size() < 2)
    {
        socket = new QTcpSocket;
        socket->setSocketDescriptor(socketDescriptor);
        connect(socket, &QTcpSocket::readyRead, this, &Server::slotReadyRead);
        //Vector не удаляетя при использовании deleteLater, не забыть про его удаление
        connect(socket, &QTcpSocket::disconnected, socket, &QTcpSocket::deleteLater);

        Sockets.push_back(socket);
        qDebug() << "Client connected" << socketDescriptor;
    }
    else
        qDebug() << "Too many clients";
}

void Server::slotReadyRead()
{
    socket = (QTcpSocket*)sender();
    QDataStream in(socket);
    in.setVersion(QDataStream::Qt_6_4);
    if(socket == Sockets[0] && queueFlag == 1)
        return;
    else if(socket == Sockets[1] && queueFlag == 0)
        return;

    if(in.status() == QDataStream::Ok)
    {
        qDebug() << "read...";
        while(true)
        {
            if(nextBlockSize == 0)
            {
                qDebug() << "nextBlockSize = 0";
                if(socket->bytesAvailable() < 2)
                {
                    qDebug() << "Data < 2, break";
                    break;
                }
                in >> nextBlockSize;
                qDebug() << "nextBlockSize = " << nextBlockSize;
            }
            if(socket->bytesAvailable() < nextBlockSize)
            {
                qDebug() << "Data not full, break";
                break;
            }

            QString stringJson;
            int command;
            in >> stringJson >> command;
            nextBlockSize = 0;
            qDebug() << stringJson;
            qDebug() << "Command" << command;

            if(command == 0)
            {
                QJsonDocument doc = QJsonDocument::fromJson(stringJson.toUtf8());
                QJsonObject json = doc.object();
                if(socket == Sockets[0])
                {
                    SendToClient(stringJson, "First", 0);
                    qDebug() << "First Player Characters";

                    FirstPlayer->open(QIODevice::WriteOnly);
                    QVariantMap testMap;
                    testMap.insert("Avan", json["Avan"].toInt());
                    testMap.insert("Cord", json["Cord"].toInt());
                    testMap.insert("Ar", json["Ar"].toInt());
                    testMap.insert("Hp_1", json["Hp_1"].toInt());
                    testMap.insert("Hp_2", json["Hp_2"].toInt());
                    testMap.insert("Hp_3", json["Hp_3"].toInt());
                    FirstPlayer->write(QJsonDocument(QJsonObject::fromVariantMap(testMap)).toJson());
                    FirstPlayer->close();
                }
                else
                {
                    SendToClient(stringJson, "Second", 0);
                    qDebug() << "Second Player Characters";

                    SecondPlayer->open(QIODevice::WriteOnly);
                    QVariantMap testMap;
                    testMap.insert("Avan", json["Avan"].toInt());
                    testMap.insert("Cord", json["Cord"].toInt());
                    testMap.insert("Ar", json["Ar"].toInt());
                    testMap.insert("Hp_1", json["Hp_1"].toInt());
                    testMap.insert("Hp_2", json["Hp_2"].toInt());
                    testMap.insert("Hp_3", json["Hp_3"].toInt());
                    SecondPlayer->write(QJsonDocument(QJsonObject::fromVariantMap(testMap)).toJson());
                    SecondPlayer->close();
                }

                if(queueFlag != 0)
                    queueFlag = 0;
                else
                    queueFlag = 1;
            }

            if(command == 1)
            {
                QJsonDocument doc = QJsonDocument::fromJson(stringJson.toUtf8());
                QJsonObject json = doc.object();
                if(queueFlag == 0)
                {
                    QString stringOpponent;
                    SecondPlayer->open(QIODevice::ReadOnly | QIODevice::Text);
                    stringOpponent = SecondPlayer->readAll();
                    SecondPlayer->close();

                    QJsonDocument docOp = QJsonDocument::fromJson(stringOpponent.toUtf8());
                    QJsonObject jsonOp = docOp.object();

                    SecondPlayer->open(QIODevice::WriteOnly);
                    QVariantMap testMap;
                    testMap.insert("Avan", jsonOp["Avan"].toInt());
                    testMap.insert("Cord", jsonOp["Cord"].toInt());
                    testMap.insert("Ar", jsonOp["Ar"].toInt());

                    switch (json["Character"].toInt())
                    {
                    case 0:
                        testMap.insert("Hp_1", jsonOp["Hp_1"].toInt() - json["Damage"].toInt());
                        testMap.insert("Hp_2", jsonOp["Hp_2"].toInt());
                        testMap.insert("Hp_3", jsonOp["Hp_3"].toInt());
                        qDebug() << "Hp Avan" << jsonOp["Hp_1"].toInt() - json["Damage"].toInt();
                        break;
                    case 1:
                        testMap.insert("Hp_2", jsonOp["Hp_2"].toInt() - json["Damage"].toInt());
                        testMap.insert("Hp_1", jsonOp["Hp_1"].toInt());
                        testMap.insert("Hp_3", jsonOp["Hp_3"].toInt());
                        qDebug() << "Hp Cord" << jsonOp["Hp_2"].toInt() - json["Damage"].toInt();
                        break;
                    case 2:
                        testMap.insert("Hp_3", jsonOp["Hp_3"].toInt() - json["Damage"].toInt());
                        testMap.insert("Hp_1", jsonOp["Hp_1"].toInt());
                        testMap.insert("Hp_2", jsonOp["Hp_2"].toInt());
                        qDebug() << "Hp Ar" << jsonOp["Hp_3"].toInt() - json["Damage"].toInt();
                        break;
                    default:
                        break;
                    }

                    SecondPlayer->write(QJsonDocument(QJsonObject::fromVariantMap(testMap)).toJson());
                    SecondPlayer->close();

                    SecondPlayer->open(QIODevice::ReadOnly | QIODevice::Text);
                    stringOpponent = SecondPlayer->readAll();
                    SecondPlayer->close();

                    SendToClient(stringOpponent, "Second", 0);
                    queueFlag = 1;
                }
                else
                {
                    QString stringOpponent;
                    FirstPlayer->open(QIODevice::ReadOnly | QIODevice::Text);
                    stringOpponent = FirstPlayer->readAll();
                    FirstPlayer->close();

                    QJsonDocument docOp = QJsonDocument::fromJson(stringOpponent.toUtf8());
                    QJsonObject jsonOp = docOp.object();

                    FirstPlayer->open(QIODevice::WriteOnly);
                    QVariantMap testMap;
                    testMap.insert("Avan", jsonOp["Avan"].toInt());
                    testMap.insert("Cord", jsonOp["Cord"].toInt());
                    testMap.insert("Ar", jsonOp["Ar"].toInt());

                    switch (json["Character"].toInt())
                    {
                    case 0:
                        testMap.insert("Hp_1", jsonOp["Hp_1"].toInt() - json["Damage"].toInt());
                        testMap.insert("Hp_2", jsonOp["Hp_2"].toInt());
                        testMap.insert("Hp_3", jsonOp["Hp_3"].toInt());
                        qDebug() << "Hp Avan" << jsonOp["Hp_1"].toInt() - json["Damage"].toInt();
                        break;
                    case 1:
                        testMap.insert("Hp_2", jsonOp["Hp_2"].toInt() - json["Damage"].toInt());
                        testMap.insert("Hp_1", jsonOp["Hp_1"].toInt());
                        testMap.insert("Hp_3", jsonOp["Hp_3"].toInt());
                        qDebug() << "Hp Cord" << jsonOp["Hp_2"].toInt() - json["Damage"].toInt();
                        break;
                    case 2:
                        testMap.insert("Hp_3", jsonOp["Hp_3"].toInt() - json["Damage"].toInt());
                        testMap.insert("Hp_1", jsonOp["Hp_1"].toInt());
                        testMap.insert("Hp_2", jsonOp["Hp_2"].toInt());
                        qDebug() << "Hp Ar" << jsonOp["Hp_3"].toInt() - json["Damage"].toInt();
                        break;
                    default:
                        break;
                    }

                    FirstPlayer->write(QJsonDocument(QJsonObject::fromVariantMap(testMap)).toJson());
                    FirstPlayer->close();

                    FirstPlayer->open(QIODevice::ReadOnly | QIODevice::Text);
                    stringOpponent = FirstPlayer->readAll();
                    FirstPlayer->close();

                    SendToClient(stringOpponent, "First", 0);
                    queueFlag = 0;
                }
            }

            if(command == 2 && Sockets.size() == 2)
            {
                QString stringOpponent;
                if(queueFlag == 0)
                {
                    SecondPlayer->open(QIODevice::ReadOnly | QIODevice::Text);
                    stringOpponent = SecondPlayer->readAll();
                    SecondPlayer->close();

                    SendToClient(stringOpponent, "", 1);
                }
                else
                {
                    FirstPlayer->open(QIODevice::ReadOnly | QIODevice::Text);
                    stringOpponent = FirstPlayer->readAll();
                    FirstPlayer->close();

                    SendToClient(stringOpponent, "", 1);
                }
            }

            if(command == 3)
            {
                QString stringPlayer;
                if(queueFlag == 0)
                {
                    FirstPlayer->open(QIODevice::ReadOnly | QIODevice::Text);
                    stringPlayer = FirstPlayer->readAll();
                    FirstPlayer->close();

                    SendToClient(stringPlayer, "", 2);
                }
                else
                {
                    SecondPlayer->open(QIODevice::ReadOnly | QIODevice::Text);
                    stringPlayer = SecondPlayer->readAll();
                    SecondPlayer->close();

                    SendToClient(stringPlayer, "", 2);
                }
            }

            break;
        }
    }
    else
        qDebug() << "DataStream error";
}

void Server::SendToClient(QString str, QString player, int command)
{
    Data.clear();
    QDataStream out(&Data, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_4);
    out << quint16(0) << str << player << command;
    out.device()->seek(0);
    out << quint16(Data.size() - sizeof(quint16));
    out << str << player << command;

    for(int i = 0; i < Sockets.size(); i++)
        Sockets[i]->write(Data);
}
