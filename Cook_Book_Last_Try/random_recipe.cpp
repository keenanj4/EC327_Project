#include "random_recipe.h"
#include "ui_random_recipe.h"

#include <QString>
#include <QFile>
#include <QTextStream>
#include <QtCore>

Random_Recipe::Random_Recipe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Random_Recipe)
{
    ui->setupUi(this);

    ui->Home_btn->setText("Home");
    QFile myFile(":/recipes/Recipe17.txt");
    myFile.open(QIODevice::ReadOnly);
    QTextStream in (&myFile);
    QString text = in.readAll();
    myFile.close();
    ui->Recipe->setText(text);
}

Random_Recipe::~Random_Recipe()
{
    delete ui;
}


