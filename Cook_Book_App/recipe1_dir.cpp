#include "recipe1_dir.h"
#include "ui_recipe1_dir.h"

recipe1_dir::recipe1_dir(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::recipe1_dir)
{
    ui->setupUi(this);
}

recipe1_dir::~recipe1_dir()
{
    delete ui;
}
