/********************************************************************************
** Form generated from reading UI file 'recipe1.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIPE1_H
#define UI_RECIPE1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Recipe1
{
public:
    QPushButton *NextStep;
    QLabel *Picture;
    QLabel *Name;
    QLabel *Desription;
    QLabel *Ingredients;
    QLabel *Prep;
    QPushButton *Home;

    void setupUi(QDialog *Recipe1)
    {
        if (Recipe1->objectName().isEmpty())
            Recipe1->setObjectName(QStringLiteral("Recipe1"));
        Recipe1->resize(720, 1080);
        QFont font;
        font.setPointSize(14);
        Recipe1->setFont(font);
        NextStep = new QPushButton(Recipe1);
        NextStep->setObjectName(QStringLiteral("NextStep"));
        NextStep->setGeometry(QRect(520, 1010, 150, 30));
        Picture = new QLabel(Recipe1);
        Picture->setObjectName(QStringLiteral("Picture"));
        Picture->setGeometry(QRect(0, 0, 720, 200));
        Name = new QLabel(Recipe1);
        Name->setObjectName(QStringLiteral("Name"));
        Name->setGeometry(QRect(0, 200, 720, 100));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        Name->setFont(font1);
        Name->setAlignment(Qt::AlignCenter);
        Desription = new QLabel(Recipe1);
        Desription->setObjectName(QStringLiteral("Desription"));
        Desription->setGeometry(QRect(0, 300, 720, 100));
        QFont font2;
        font2.setPointSize(15);
        Desription->setFont(font2);
        Desription->setAlignment(Qt::AlignCenter);
        Desription->setWordWrap(true);
        Ingredients = new QLabel(Recipe1);
        Ingredients->setObjectName(QStringLiteral("Ingredients"));
        Ingredients->setGeometry(QRect(0, 400, 360, 600));
        QFont font3;
        font3.setPointSize(12);
        Ingredients->setFont(font3);
        Ingredients->setScaledContents(true);
        Ingredients->setWordWrap(true);
        Prep = new QLabel(Recipe1);
        Prep->setObjectName(QStringLiteral("Prep"));
        Prep->setGeometry(QRect(360, 400, 360, 600));
        Prep->setFont(font3);
        Home = new QPushButton(Recipe1);
        Home->setObjectName(QStringLiteral("Home"));
        Home->setGeometry(QRect(50, 1010, 150, 30));

        retranslateUi(Recipe1);
        QObject::connect(Home, SIGNAL(clicked()), Recipe1, SLOT(reject()));

        QMetaObject::connectSlotsByName(Recipe1);
    } // setupUi

    void retranslateUi(QDialog *Recipe1)
    {
        Recipe1->setWindowTitle(QApplication::translate("Recipe1", "Dialog", 0));
        NextStep->setText(QApplication::translate("Recipe1", "Next Step", 0));
        Picture->setText(QApplication::translate("Recipe1", "<html><head/><body><p><img src=\":/pictures/Chocolate_Chip_Cookies.jpg\"/></p></body></html>", 0));
        Name->setText(QApplication::translate("Recipe1", "Amena's Triple Chocolate Chip Cookies", 0));
        Desription->setText(QApplication::translate("Recipe1", "\"This cookie recipe uses semi-sweet, white, and milk chocolate chips for triple the chocolate impact!\"", 0));
        Ingredients->setText(QApplication::translate("Recipe1", "INGREDIENTS:\n"
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
        Prep->setText(QApplication::translate("Recipe1", "Prep Time: 15 Minutes\n"
"Cook Time: 10 Minutes\n"
"Ready In: 55 Minutes\n"
"Servings: 16", 0));
        Home->setText(QApplication::translate("Recipe1", "Home", 0));
    } // retranslateUi

};

namespace Ui {
    class Recipe1: public Ui_Recipe1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPE1_H
