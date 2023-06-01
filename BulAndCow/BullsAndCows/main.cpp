#include "mymainwindow.h"
#include "records.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Records records("Рекорды.txt");
    MyMainWindow w(&records);
    w.show();
    return a.exec();
}
