#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QTime>
#include <QPixmap>
#include <selectcharatcer.h>
#include <battlefield.h>
#include <attack.h>
#include <target.h>
#include <QFile>
#include <QJsonObject>
#include <QJsonDocument>
#include <QVector>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_m_PB_Connect_clicked();

    void on_m_PB_SelectCharacter_clicked();

    void on_m_PB_Send_clicked();

    void on_m_PB_Attack_clicked();

private:
    Ui::MainWindow *ui;

    SelectCharatcer* SelChar;
    Battlefield* Battle;
    Attack* Attack_;
    Target* Target_;

    QPixmap* image;
    QFile* fileJson;
    QFile* fileJsonOpponent;
    QFile* fileDamage;
    QVector <int> CharacterList;
    int Squad_Sent = 0;
    int Number_Player = 0;
    int Current_Damage = 0;

    QTcpSocket *socket;
    QHostAddress myAddres;
    QByteArray Data;
    void SendToServer(QString str, int command);
    void Refresh();
    QJsonObject GetObject();
    QJsonObject GetObjectOpponent();
    quint16 nextBlockSize;

public slots:
    void slotReadyRead();
    void slotSelChar(int charNum, int place);
    void slotDamage(int damage);
    void slotTarget_(int characterNumber);

signals:
    void signalBeginBattle(QJsonObject Jobj, QString persona);
    void signalYourDetachment(QJsonObject json);
    void signalOpponentDetachment(QJsonObject json);
};
#endif // MAINWINDOW_H
