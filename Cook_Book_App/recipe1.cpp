#include "recipe1.h"
#include "ui_recipe1.h"
#include "home_screen.h"
#include "recipe1_dir.h"

Recipe1::Recipe1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Recipe1)
{
    ui->setupUi(this);
}

Recipe1::~Recipe1()
{
    delete ui;
}


void Recipe1::on_NextStep_clicked()
{
    recipe1_dir direc;
    direc.setModal(true);
    direc.exec();
}
