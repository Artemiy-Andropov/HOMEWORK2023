#ifndef BATTLEFIELD_H
#define BATTLEFIELD_H

#include <QWidget>
#include <QPixmap>
#include <QFile>
#include <QJsonObject>
#include <QJsonDocument>

namespace Ui {
class Battlefield;
}

class Battlefield : public QWidget
{
    Q_OBJECT

public:
    explicit Battlefield(QWidget *parent = nullptr);
    ~Battlefield();

private:
    Ui::Battlefield *ui;
    QPixmap* image;
    void OpponentCharacter(int characterNumber_, int place);
    void YourCharacter(int characterNumber_, int place);

public slots:
    void slotBeginBattle(QJsonObject Jobj, QString persona);
};

#endif // BATTLEFIELD_H
