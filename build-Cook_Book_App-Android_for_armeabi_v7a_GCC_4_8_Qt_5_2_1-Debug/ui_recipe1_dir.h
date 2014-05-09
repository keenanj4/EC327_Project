/********************************************************************************
** Form generated from reading UI file 'recipe1_dir.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIPE1_DIR_H
#define UI_RECIPE1_DIR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_recipe1_dir
{
public:
    QLabel *Picture;
    QLabel *Name;
    QLabel *Steps;
    QLabel *Ingredients;
    QPushButton *Back;

    void setupUi(QDialog *recipe1_dir)
    {
        if (recipe1_dir->objectName().isEmpty())
            recipe1_dir->setObjectName(QStringLiteral("recipe1_dir"));
        recipe1_dir->resize(720, 1080);
        Picture = new QLabel(recipe1_dir);
        Picture->setObjectName(QStringLiteral("Picture"));
        Picture->setGeometry(QRect(0, 0, 720, 200));
        Name = new QLabel(recipe1_dir);
        Name->setObjectName(QStringLiteral("Name"));
        Name->setGeometry(QRect(0, 200, 720, 100));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        Name->setFont(font);
        Name->setAlignment(Qt::AlignCenter);
        Steps = new QLabel(recipe1_dir);
        Steps->setObjectName(QStringLiteral("Steps"));
        Steps->setGeometry(QRect(360, 300, 360, 800));
        QFont font1;
        font1.setPointSize(10);
        Steps->setFont(font1);
        Steps->setWordWrap(true);
        Ingredients = new QLabel(recipe1_dir);
        Ingredients->setObjectName(QStringLiteral("Ingredients"));
        Ingredients->setGeometry(QRect(0, 300, 360, 800));
        QFont font2;
        font2.setPointSize(12);
        Ingredients->setFont(font2);
        Ingredients->setWordWrap(true);
        Back = new QPushButton(recipe1_dir);
        Back->setObjectName(QStringLiteral("Back"));
        Back->setGeometry(QRect(50, 1010, 150, 30));

        retranslateUi(recipe1_dir);
        QObject::connect(Back, SIGNAL(clicked()), recipe1_dir, SLOT(reject()));

        QMetaObject::connectSlotsByName(recipe1_dir);
    } // setupUi

    void retranslateUi(QDialog *recipe1_dir)
    {
        recipe1_dir->setWindowTitle(QApplication::translate("recipe1_dir", "Dialog", 0));
        Picture->setText(QApplication::translate("recipe1_dir", "<html><head/><body><p><img src=\":/pictures/Chocolate_Chip_Cookies.jpg\"/></p></body></html>", 0));
        Name->setText(QApplication::translate("recipe1_dir", "Amena's Triple Chocolate Chip Cookies", 0));
        Steps->setText(QApplication::translate("recipe1_dir", "DIRECTIONS:\n"
"1.	Preheat oven to 375 degrees F (190 degrees C). Line a baking sheet with a silicon mat or parchment paper.\n"
"2.	Mash the butter, white sugar, and brown sugar together in a large mixing bowl with a spatula until creamy and smooth, 2 to 3 minutes. Add the egg and vanilla; whisk vigorously for 20 to 30 seconds.\n"
"3.	Whisk the flour, salt, and baking soda together in a small bowl; dump into the butter mixture and mix until just combined. Fold the semi-sweet chocolate chips, white chocolate chips, and milk chocolate chips into the mixture. Arrange onto the prepared baking sheet using a small scoop or large spoon.\n"
"4.	Bake in the preheated oven until golden brown, about 10 minutes; remove from oven and allow to cool on the sheet for 10 minutes. Transfer to a wire rack to finish cooling completely.", 0));
        Ingredients->setText(QApplication::translate("recipe1_dir", "INGREDIENTS:\n"
"1/2 cup unsalted butter\n"
"1/2 cup white sugar\n"
"1/4 cup packed light brown sugar\n"
"1 large egg\n"
"1/2 teaspoon vanilla extract\n"
"1 1/8 cups all-purpose flour\n"
"1/2 teaspoon salt\n"
"1/2 teaspoon baking soda\n"
"1/3 cup semi-sweet chocolate chips\n"
"1/3 cup white chocolate chips\n"
"1/3 cup milk chocolate chips", 0));
        Back->setText(QApplication::translate("recipe1_dir", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class recipe1_dir: public Ui_recipe1_dir {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPE1_DIR_H
