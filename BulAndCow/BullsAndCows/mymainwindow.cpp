#include "mymainwindow.h"
#include "ui_mymainwindow.h"
#include "records.h"
#include "ui_records.h"
#include <QInputDialog>

MyMainWindow::MyMainWindow(Records* records, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyMainWindow)
    , m_records(records)
{
    ui->setupUi(this);
    ui->m_LE_Enter->setValidator(new QRegularExpressionValidator(QRegularExpression("[0-9]{4}")));
    ui->m_Table_BAC->setEditTriggers(QAbstractItemView::EditTrigger(0));
}

MyMainWindow::~MyMainWindow()
{
    delete ui;
}


void MyMainWindow::on_m_PB_NewGame_clicked()
{
    ui->m_Table_BAC->setRowCount(0);
    ui->m_Table_BAC->setColumnCount(0);
    ui->m_Lab_Mes->clear();
    ui->m_Lab_Mes->setText("Итак, готовы снова угадывать?");
    answer.clear();
}

void MyMainWindow::Create_Column()
{
    QString NameCol1 = "Ваше число";
    QString NameCol2 = "Результат";
    ui->m_Table_BAC->insertColumn(0);
    ui->m_Table_BAC->insertColumn(1);
    ui->m_Table_BAC->horizontalHeader()->setSectionResizeMode (QHeaderView::Stretch);
    ui->m_Table_BAC->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
    ui->m_Table_BAC->setHorizontalHeaderLabels(QStringList()<<NameCol1<<NameCol2);
}

void MyMainWindow::Generate_Number()
{
    QString digitString;
    int digitInt;
    for(int j = 0; j < 4; j++)
    {
        digitInt = rand() % 10;
        if(answer.size() > 0)
        {
            for(int i = 0; i < answer.size(); i++)
            {
                if(answer[i].digitValue() == digitInt)
                {
                    digitInt = rand() % 10;
                    i = -1;
                }
            }
        }
        digitString.setNum(digitInt);
        answer += digitString;
    }
}

void MyMainWindow::Victory(int attempts)
{
    if (!m_records->IsTop(attempts))
      ui->m_Lab_Mes->setText("Вы выиграли, но не попали в рейтинг!");
    else
    {
      bool bOk;
      QString name = QInputDialog::getText(0, "Ввод", "Name:", QLineEdit::Normal, "", &bOk);
      if (bOk)
      {
            if(m_records->Find_Name(name))
            {
                QMessageBox msgBox;
                msgBox.setIcon(QMessageBox::Question);
                msgBox.setText("Старый рекорд будет заменен.");
                msgBox.setInformativeText("Хотите сохранить новый рекорд?");
                msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Cancel);
                msgBox.setDefaultButton(QMessageBox::Save);
                int ret = msgBox.exec();
                switch (ret)
                {
                  case QMessageBox::Save:
                      m_records->Change(attempts, name);
                      break;
                  case QMessageBox::Cancel:
                      break;
                  default:
                      break;
                }
            }
            else
                m_records->Add(attempts, name); // нажато Ok, а не Cancel

      }
    }
}

void MyMainWindow::keyPressEvent(QKeyEvent *event_)
{
    if(event_->key() == Qt::Key_Return)
        on_m_PB_Check_clicked();
}

void MyMainWindow::on_m_PB_Check_clicked()
{
    if(ui->m_LE_Enter->displayText().size() < 4)
        return;

    if(ui->m_Table_BAC->columnCount() != 2)
        Create_Column();

    QString digitString;
    if(ui->m_Table_BAC->rowCount() < 1)
        Generate_Number();

    QString numberPlayer = ui->m_LE_Enter->displayText();
    QTableWidgetItem* insertNumberPlayer = new QTableWidgetItem (numberPlayer);
    ui->m_LE_Enter->clear();

    ui->m_Table_BAC->insertRow(ui->m_Table_BAC->rowCount());

    ui->m_Table_BAC->setItem(ui->m_Table_BAC->rowCount()-1, 0, insertNumberPlayer);
//    ui->m_Table_BAC->item(ui->m_Table_BAC->rowCount()-1, 0)->setTextAlignment(Qt::AlignVCenter);

    int bulls = 0;
    int cows = 0;
    for(int i = 0; i < 4; i++)
        if(answer[i] == numberPlayer[i])
            bulls++;

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(i != j)
            {
                if(answer[i] == numberPlayer[j])
                {
                    cows++;
                    break;
                }
            }
        }
    }

    QString derivation = "Быки: ";
    digitString.setNum(bulls);
    derivation += digitString;
    derivation += ". Коровы: ";
    digitString.setNum(cows);
    derivation += digitString;

    QTableWidgetItem* insertCorrectNumbers = new QTableWidgetItem (derivation);
    ui->m_Table_BAC->setItem(ui->m_Table_BAC->rowCount()-1, 1, insertCorrectNumbers);
//    ui->m_Table_BAC->item(ui->m_Table_BAC->rowCount()-1, 1)->setTextAlignment(Qt::AlignVCenter);

    if(bulls == 4)
        Victory(ui->m_Table_BAC->rowCount());
    else
    {
        QString text = "Не правильно, попробуй ещё раз! (Правильный ответ: ";
        text.append(answer);
        text.append(")");
        ui->m_Lab_Mes->setText(text);
    }
}


void MyMainWindow::on_m_PB_Records_clicked()
{
    bool visibility = m_records->isVisible();
    m_records->setVisible(!visibility);
}
