#include "home_screen.h"
#include "ui_home_screen.h"
#include "random_recipe.h"
#include "add_new.h"

#include <QApplication>
#include <QtGui>
#include <QTCore>
#include <QLabel>
#include <QPushButton>
#include <QGridLayout>
#include <QString>
#include <QFile>
#include <QTextStream>

Home_Screen::Home_Screen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Home_Screen)
{
    ui->setupUi(this);

    ui->Title->setText("<b><u>Cook Book<u><b>");
    ui->Find_Rand->setText("Random Recipe");
    ui->Make_New->setText("Create New Recipe");
}

Home_Screen::~Home_Screen()
{
    delete ui;
}

void Home_Screen::on_Find_Rand_clicked()
{
    Random_Recipe recipe;
    recipe.setModal(true);
    recipe.exec();
}

void Home_Screen::on_Make_New_clicked()
{
    Add_New add;
    add.setModal(true);
    add.exec();
}
