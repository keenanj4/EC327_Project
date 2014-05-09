#include "home_screen.h"
#include "ui_home_screen.h"
#include "recipe1.h"
#include <iostream>
 #include <fstream>
 #include <cstdlib>
 #include <string>
 #include <time.h>
#include "recipe2.h"
#include "recipe3.h"
#include "recipe4.h"
#include "recipe5.h"
#include "recipe6.h"
#include "recipe7.h"
#include "recipe8.h"
#include "recipe9.h"
#include "recipe10.h"
#include "recipe11.h"
#include "recipe12.h"
#include "recipe13.h"
#include "recipe14.h"
#include "recipe15.h"
#include "recipe16.h"

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
    //Recipe1 recipe1;
    //recipe1.setModal(true);
    //recipe1.exec();
    //srand(time(NULL));
    int number_of_files = 2;
         int k = rand()%number_of_files+1;

         switch (k){
             case 1:
         {
                 Recipe1 recipe1;
                 recipe1.setModal(true);
                 recipe1.exec();
                 break;
         }
            case 2:
         {
             Recipe2 recipe2;
             recipe2.setModal(true);
             recipe2.exec();
             break;
         }
         }
}
