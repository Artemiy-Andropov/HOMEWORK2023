#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QMainWindow>
#include <QRegularExpressionValidator>
#include <QKeyEvent>
#include <QMessageBox>
#include "records.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MyMainWindow; }
QT_END_NAMESPACE

class MyMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MyMainWindow(Records* records, QWidget *parent = nullptr);
    ~MyMainWindow();

private slots:
    void on_m_PB_NewGame_clicked();
    void on_m_PB_Check_clicked();

    void on_m_PB_Records_clicked();

protected:
    void keyPressEvent(QKeyEvent* e) override;

private:
    Ui::MyMainWindow *ui;
    QString answer;
    Records* m_records;
    void Create_Column();
    void Generate_Number();
    void Victory(int attempts);
};
#endif // MYMAINWINDOW_H
