#include "recipe2_dir.h"
#include "ui_recipe2_dir.h"

recipe2_dir::recipe2_dir(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::recipe2_dir)
{
    ui->setupUi(this);
}

recipe2_dir::~recipe2_dir()
{
    delete ui;
}
