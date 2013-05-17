#include "Pesel.h"

#include <QtGui>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Pesel w;
    w.show();
    return a.exec();
}
