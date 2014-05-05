#include "home_screen.h"
#include "ui_home_screen.h"
#include "chocolate_chip_cookies_ing.h"
#include "recipe1.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <time.h>

using namespace std;

Home_Screen::Home_Screen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Home_Screen)
{
    ui->setupUi(this);
}

Home_Screen::~Home_Screen()
{
    delete ui;
}

void Home_Screen::on_pushGenerate_clicked()
{
    // Call random number generator and assign the "recipe#" to a string.
    // Then use the recipe# to generate the associated screen using...
    // Recipe# recipescr;
    // recipescr.setModal(true);
    // recipescr.exec();
    
    
    srand(time(NULL));
    char filename[10];
    number_of_files = 16;
    sprintf(filename,"Recipe%i",rand()%number_of_files+1);

    filename recipestr;
    recipestr.setModal(true);
    recipestr.exec();
    
    
    // Recipe1 recipe1;
    // recipe1.setModal(true);
    // recipe1.exec();
}
