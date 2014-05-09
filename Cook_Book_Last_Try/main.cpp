#include "home_screen.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Home_Screen window;
    window.show();

    return app.exec();
}
