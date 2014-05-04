#include "home_screen.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Home_Screen w;
    w.show();

    return a.exec();
}
