#include "UDP_test.h"
#include <QObject>
#include <QtGui>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UDP_test w;
    w.show();
    return a.exec();
}

