#ifndef ATTACK_H
#define ATTACK_H

#include <QWidget>
#include <QPixmap>
#include <QFile>
#include <QJsonObject>
#include <QJsonDocument>
#include <QSignalBlocker>

namespace Ui {
class Attack;
}

class Attack : public QWidget
{
    Q_OBJECT

public:
    explicit Attack(QWidget *parent = nullptr);
    ~Attack();

private:
    Ui::Attack *ui;
    QPixmap* image;
    void ExposeCharacter(int CharNum, int place, int HP);

public slots:
    void slotYourDetachment(QJsonObject json);

private slots:
    void on_m_TB_Attack_1_clicked();
    void on_m_TB_Attack_2_clicked();
    void on_m_TB_Attack_3_clicked();

signals:
    void signalDamage(int damage);
};

#endif // ATTACK_H
