/********************************************************************************
** Form generated from reading UI file 'recipe2.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIPE2_H
#define UI_RECIPE2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Recipe2
{
public:
    QPushButton *Directions;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *Home;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *Recipe2)
    {
        if (Recipe2->objectName().isEmpty())
            Recipe2->setObjectName(QStringLiteral("Recipe2"));
        Recipe2->resize(720, 1080);
        Recipe2->setAutoFillBackground(false);
        Directions = new QPushButton(Recipe2);
        Directions->setObjectName(QStringLiteral("Directions"));
        Directions->setGeometry(QRect(530, 1010, 150, 30));
        label = new QLabel(Recipe2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 720, 200));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(Recipe2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 200, 720, 100));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(Recipe2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 300, 720, 100));
        QFont font1;
        font1.setPointSize(15);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);
        Home = new QPushButton(Recipe2);
        Home->setObjectName(QStringLiteral("Home"));
        Home->setGeometry(QRect(50, 1010, 150, 30));
        label_4 = new QLabel(Recipe2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 400, 720, 650));
        QFont font2;
        font2.setPointSize(12);
        label_4->setFont(font2);
        label_5 = new QLabel(Recipe2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(360, 400, 360, 600));
        label_5->setFont(font1);

        retranslateUi(Recipe2);
        QObject::connect(Home, SIGNAL(clicked()), Recipe2, SLOT(reject()));

        QMetaObject::connectSlotsByName(Recipe2);
    } // setupUi

    void retranslateUi(QDialog *Recipe2)
    {
        Recipe2->setWindowTitle(QApplication::translate("Recipe2", "Dialog", 0));
        Directions->setText(QApplication::translate("Recipe2", "Directions", 0));
        label->setText(QApplication::translate("Recipe2", "<html><head/><body><p><img src=\":/pictures/chickencover.jpg\"/></p></body></html>", 0));
        label_2->setText(QApplication::translate("Recipe2", "Baked Garlic Parmesan Chicken", 0));
        label_3->setText(QApplication::translate("Recipe2", "\"Chicken breasts are breaded with flavorful crumbs, herbs, and Parmesan cheese, then baked for the easiest, quickest chicken dish ever. Serve with a salad and pasta or rice for a scrumptious dinner.\"\n"
"", 0));
        Home->setText(QApplication::translate("Recipe2", "Hoime", 0));
        label_4->setText(QApplication::translate("Recipe2", "INGREDIENTS:\n"
"2 tablespoons olive oil\n"
"1 clove garlic, minced\n"
"1 cup dry bread crumbs\n"
"2/3 cup grated Parmesan cheese\n"
"1 teaspoon dried basil leaves\n"
"1/4 teaspoon ground black pepper\n"
"6 skinless, boneless chicken breast halves", 0));
        label_5->setText(QApplication::translate("Recipe2", "Prep Time: 15 Minutes\n"
"Cook Time: 30 Minutes\n"
"Ready In: 45 Minutes\n"
"Servings: 6", 0));
    } // retranslateUi

};

namespace Ui {
    class Recipe2: public Ui_Recipe2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPE2_H
