#include <QPixmap>
#include <QLabel>
#include <QImage>
#include <QTextImageFormat>
#include "chocolate_chip_cookies_ing.h"
#include "ui_chocolate_chip_cookies_ing.h"
#include "chocolate_chip_cookies_stp1.h"

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


void Chocolate_Chip_Cookies::on_pushButton_clicked()
{
    Chocolate_Chip_Cookies_stp1 chocolate_chip_cookies_stp1;
    chocolate_chip_cookies_stp1.setModal(true);
    chocolate_chip_cookies_stp1.exec();
}
