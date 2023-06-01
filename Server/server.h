#ifndef SERVER_H
#define SERVER_H

#include <QTcpServer>
#include <QTcpSocket>
#include <QVector>
#include <QDataStream>
#include <QTime>
#include <QFile>
#include <QJsonObject>
#include <QJsonDocument>

class Server : public QTcpServer
{
    Q_OBJECT

public:
    Server();
    QTcpSocket *socket;

private:
    QVector <QTcpSocket*> Sockets;
    QByteArray Data;
    QFile* FirstPlayer;
    QFile* SecondPlayer;
    void SendToClient(QString str, QString persona, int command);
    quint16 nextBlockSize;
    QString newStringJson(QString str);
    int queueFlag = 0;

public slots:
    void incomingConnection(qintptr socketDiscriptor);
    void slotReadyRead();
};

#endif // SERVER_H
