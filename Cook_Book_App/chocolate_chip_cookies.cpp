#include "chocolate_chip_cookies.h"
#include "ui_chocolate_chip_cookies.h"

Chocolate_Chip_Cookies::Chocolate_Chip_Cookies(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Chocolate_Chip_Cookies)
{
    ui->setupUi(this);
}

Chocolate_Chip_Cookies::~Chocolate_Chip_Cookies()
{
    delete ui;
}
