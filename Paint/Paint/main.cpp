#include "paintmainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    paintMainWindow w;
    w.show();
    return a.exec();
}
