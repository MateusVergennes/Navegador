#include "navegador.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Navegador w;
    w.show();
    return a.exec();
}
