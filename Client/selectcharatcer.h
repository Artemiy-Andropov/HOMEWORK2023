#ifndef SELECTCHARATCER_H
#define SELECTCHARATCER_H

#include <QWidget>
#include <QMessageBox>

namespace Ui {
class SelectCharatcer;
}

class SelectCharatcer : public QWidget
{
    Q_OBJECT

public:
    explicit SelectCharatcer(QWidget *parent = nullptr);
    ~SelectCharatcer();

private slots:
    void on_m_PB_NextCharacter_clicked();

    void on_m_PB_PreviousCharacter_clicked();

    void on_m_PB_SelectCharacter_clicked();

signals:
    void signalSelChar(int charNum, int place);

private:
    Ui::SelectCharatcer *ui;
    QPixmap* image;
    int characterNumber = 0;
    void CharacterDisplay();
};

#endif // SELECTCHARATCER_H
