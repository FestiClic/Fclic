#include "identification.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Identification w;
    w.show();

    return a.exec();
}
