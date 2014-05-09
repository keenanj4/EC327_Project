#include "home_screen.h"
#include "ui_home_screen.h"
#include "recipe1.h"
#include <iostream>
<<<<<<< HEAD
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
=======
#include <fstream>
#include <cstdlib>
#include <string>
#include <time.h>

using namespace std;
>>>>>>> 3a7869cf6e9be2892c7ce4730c666bf23fb3e189

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
<<<<<<< HEAD
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
=======
    
    
    srand(time(NULL));
    int number_of_files = 16;
    int k = rand()%number_of_files+1;
    
    switch (k){
        case 1:
            Recipe1 recipe1;
            recipe1.setModal(true);
            recipe1.exec();
            break;
        case 2:
            Recipe2 recipe2;
            recipe2.setModal(true);
            recipe2.exec();
            break;
        case 3:
            Recipe3 recipe3;
            recipe3.setModal(true);
            recipe3.exec();
            break;
        case 4:
            Recipe4 recipe4;
            recipe4.setModal(true);
            recipe4.exec();
            break;
        case 5:
            Recipe5 recipe5;
            recipe5.setModal(true);
            recipe5.exec();
            break;
        case 6:
            Recipe6 recipe6;
            recipe6.setModal(true);
            recipe6.exec();
            break;
        case 7:
            Recipe7 recipe7;
            recipe7.setModal(true);
            recipe7.exec();
            break;
        case 8:
            Recipe8 recipe8;
            recipe8.setModal(true);
            recipe8.exec();
            break;
        case 9:
            Recipe9 recipe9;
            recipe9.setModal(true);
            recipe9.exec();
            break;
        case 10:
            Recipe10 recipe10;
            recipe10.setModal(true);
            recipe10.exec();
            break;
        case 11:
            Recipe11 recipe11;
            recipe11.setModal(true);
            recipe11.exec();
            break;
        case 12:
            Recipe12 recipe12;
            recipe12.setModal(true);
            recipe12.exec();
            break;
        case 13:
            Recipe13 recipe13;
            recipe13.setModal(true);
            recipe13.exec();
            break;
        case 14:
            Recipe14 recipe14;
            recipe14.setModal(true);
            recipe14.exec();
            break;
        case 15:
            Recipe15 recipe15;
            recipe15.setModal(true);
            recipe15.exec();
            break;
        case 16:
            Recipe16 recipe16;
            recipe16.setModal(true);
            recipe16.exec();
            break;
    }

    
    
    // Recipe1 recipe1;
    // recipe1.setModal(true);
    // recipe1.exec();
>>>>>>> 3a7869cf6e9be2892c7ce4730c666bf23fb3e189
}
