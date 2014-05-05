#include "home_screen.h"
#include "ui_home_screen.h"
#include "chocolate_chip_cookies_ing.h"
Home_Screen::Home_Screen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Home_Screen)
{
    ui->setupUi(this);
}

Home_Screen::~Home_Screen()
{
    delete ui;
}

void Home_Screen::on_pushGenerate_clicked()
{
    Chocolate_Chip_Cookies chocolate_chip_cookies;
    chocolate_chip_cookies.setModal(true);
    chocolate_chip_cookies.exec();
}
