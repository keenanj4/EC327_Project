#include "recipe2.h"
#include "ui_recipe2.h"
#include "home_screen.h"
#include "recipe2_dir.h"

Recipe2::Recipe2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Recipe2)
{
    ui->setupUi(this);
}

Recipe2::~Recipe2()
{
    delete ui;
}


void Recipe2::on_Directions_clicked()
{
    recipe2_dir direc;
    direc.setModal(true);
    direc.exec();
}
