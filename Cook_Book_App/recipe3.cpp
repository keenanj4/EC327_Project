#include "default_new_recipe.h"
#include "ui_default_new_recipe.h"

Default_New_Recipe::Default_New_Recipe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Default_New_Recipe)
{
    ui->setupUi(this);
}

Default_New_Recipe::~Default_New_Recipe()
{
    delete ui;
}
