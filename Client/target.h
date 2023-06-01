#ifndef TARGET_H
#define TARGET_H

#include <QWidget>
#include <QPixmap>
#include <QFile>
#include <QJsonObject>
#include <QJsonDocument>
#include <QSignalBlocker>

namespace Ui {
class Target;
}

class Target : public QWidget
{
    Q_OBJECT

public:
    explicit Target(QWidget *parent = nullptr);
    ~Target();

private:
    Ui::Target *ui;
    QPixmap* image;
    void ExposeCharacter(int CharNum, int place, int HP);

public slots:
    void slotOpponentDetachment(QJsonObject json);

private slots:
    void on_m_TB_Attack_1_clicked();

    void on_m_TB_Attack_2_clicked();

    void on_m_TB_Attack_3_clicked();

signals:
    void signalTarget_(int characterNumber);
};

#endif // TARGET_H
