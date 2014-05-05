#include "chocolate_chip_cookies_stp1.h"
#include "ui_chocolate_chip_cookies_stp1.h"

Chocolate_Chip_Cookies_stp1::Chocolate_Chip_Cookies_stp1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Chocolate_Chip_Cookies_stp1)
{
    ui->setupUi(this);
}

Chocolate_Chip_Cookies_stp1::~Chocolate_Chip_Cookies_stp1()
{
    delete ui;
}
