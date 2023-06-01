#ifndef RECORDS_H
#define RECORDS_H

#include <QWidget>
#include <QFile>
#include <QTableWidget>

namespace Ui {
class Records;
}

class Records : public QWidget
{
    Q_OBJECT

public:
    explicit Records(QString filename, QWidget *parent = nullptr);
    void Add(int score, QString playerName);
    bool IsTop(int score);
    void Refill();
    void Save();
    bool Find_Name(QString str);
    void Change(int score, QString playerName);
    ~Records();

private:
    Ui::Records *ui;
    std::multimap<int, QString, std::less<int>> highScore;
    QString fileName;
    QTableWidget scoreTable;
};

#endif // RECORDS_H
