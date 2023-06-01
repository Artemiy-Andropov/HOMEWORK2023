#include "records.h"
#include "ui_records.h"
#include "mymainwindow.h"
#include <QHeaderView>
#include <QGridLayout>
/*
Records::Records(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Records)
{
    ui->setupUi(this);
}
*/
Records::~Records()
{
    delete ui;
}

Records::Records(QString filename_, QWidget *parent)
  : QWidget(parent), fileName(filename_), scoreTable(0, 2, this)
{
  setWindowTitle("Рекорды");
  QFile file(fileName);
  if (file.open(QIODevice::ReadOnly))
  {
    QTextStream fileStream(&file);

    QString name;
    int score;
    while (true)
    {
      name = fileStream.readLine();
      if (name.isEmpty())
        break;

      fileStream >> score;
      fileStream.readLine();
      highScore.insert(std::make_pair(score, name));
    }
  }

  QGridLayout *layout = new QGridLayout(this);
  setLayout(layout);

  scoreTable.setHorizontalHeaderLabels(QStringList({"Попыток", "Имя"}));
  scoreTable.horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
  scoreTable.setEnabled(true);
//  scoreTable.setSortingEnabled(true);
  scoreTable.setEditTriggers(QAbstractItemView::EditTrigger(0));

  layout->addWidget(&scoreTable);

  Refill();
}

bool Records::IsTop(int score)
{
    int check = 0;
    for(auto it: highScore)
    {
        if(check > 10)
            return false;
        if(it.first > score)
            return true;
        check++;
    }
    return true;
}

bool Records::Find_Name(QString str)
{
    QFile file(fileName);

    if (!file.open(QIODevice::WriteOnly | QIODevice::Truncate))
        throw std::runtime_error("Error. Can't open file.");

    for (auto it: highScore)
        if(it.second == str)
            return true;
    return false;
}

void Records::Add(int score, QString playerName)
{
    if(IsTop(score))
    {
        std::pair<int, QString> item(score, playerName);
        highScore.insert(item);
        Save();
        Refill();
    }
}

void Records::Change(int score, QString playerName)
{
    std::multimap<int, QString, std::less<int>> newHighScore;
    if(IsTop(score))
    {
        std::pair<int, QString> item(score, playerName);
        for(auto it : highScore)
            if(it.second == playerName)
                newHighScore.insert(item);
            else
                newHighScore.insert(it);
        highScore = newHighScore;
        Save();
        Refill();
    }
}

void Records::Save()
{
    QFile file(fileName);

    if (!file.open(QIODevice::WriteOnly | QIODevice::Truncate))
        throw std::runtime_error("Error. Can't open file.");

    QTextStream fileStream(&file);

    for (auto it: highScore)
        fileStream << it.second << '\n' << it.first << '\n';
}

void Records::Refill()
{
  while (scoreTable.rowCount() > 0)
    scoreTable.removeRow(0);

  int check = 0;
  for (auto it: highScore)
  {
    if (check > 10)
      return;

    int size = scoreTable.rowCount();

    scoreTable.insertRow(size);
    scoreTable.setItem(size, 0, new QTableWidgetItem(QString::number(it.first)));
    scoreTable.setItem(size, 1, new QTableWidgetItem(it.second));

    ++check;
  }
}
