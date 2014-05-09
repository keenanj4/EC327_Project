/********************************************************************************
** Form generated from reading UI file 'default_new_recipe.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEFAULT_NEW_RECIPE_H
#define UI_DEFAULT_NEW_RECIPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Default_New_Recipe
{
public:
    QPushButton *pushButton;
    QLabel *Picture;
    QLabel *Name;
    QLabel *Description;
    QPushButton *Home;
    QLabel *Ingredients;
    QLabel *Prep;

    void setupUi(QDialog *Default_New_Recipe)
    {
        if (Default_New_Recipe->objectName().isEmpty())
            Default_New_Recipe->setObjectName(QStringLiteral("Default_New_Recipe"));
        Default_New_Recipe->resize(720, 1080);
        Default_New_Recipe->setAutoFillBackground(false);
        pushButton = new QPushButton(Default_New_Recipe);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(520, 1010, 150, 30));
        Picture = new QLabel(Default_New_Recipe);
        Picture->setObjectName(QStringLiteral("Picture"));
        Picture->setGeometry(QRect(0, 0, 720, 200));
        Name = new QLabel(Default_New_Recipe);
        Name->setObjectName(QStringLiteral("Name"));
        Name->setGeometry(QRect(0, 200, 720, 100));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        Name->setFont(font);
        Name->setAlignment(Qt::AlignCenter);
        Description = new QLabel(Default_New_Recipe);
        Description->setObjectName(QStringLiteral("Description"));
        Description->setGeometry(QRect(0, 300, 720, 100));
        QFont font1;
        font1.setPointSize(15);
        Description->setFont(font1);
        Description->setAlignment(Qt::AlignCenter);
        Home = new QPushButton(Default_New_Recipe);
        Home->setObjectName(QStringLiteral("Home"));
        Home->setGeometry(QRect(50, 1010, 150, 30));
        Ingredients = new QLabel(Default_New_Recipe);
        Ingredients->setObjectName(QStringLiteral("Ingredients"));
        Ingredients->setGeometry(QRect(0, 400, 360, 600));
        QFont font2;
        font2.setPointSize(12);
        Ingredients->setFont(font2);
        Prep = new QLabel(Default_New_Recipe);
        Prep->setObjectName(QStringLiteral("Prep"));
        Prep->setGeometry(QRect(360, 400, 360, 600));
        Prep->setFont(font2);

        retranslateUi(Default_New_Recipe);

        QMetaObject::connectSlotsByName(Default_New_Recipe);
    } // setupUi

    void retranslateUi(QDialog *Default_New_Recipe)
    {
        Default_New_Recipe->setWindowTitle(QApplication::translate("Default_New_Recipe", "Dialog", 0));
        pushButton->setText(QApplication::translate("Default_New_Recipe", "Directions", 0));
        Picture->setText(QApplication::translate("Default_New_Recipe", "<html><head/><body><p><br/></p></body></html>", 0));
        Name->setText(QApplication::translate("Default_New_Recipe", "Recipe Name", 0));
        Description->setText(QApplication::translate("Default_New_Recipe", "Description", 0));
        Home->setText(QApplication::translate("Default_New_Recipe", "Home", 0));
        Ingredients->setText(QApplication::translate("Default_New_Recipe", "TextLabel", 0));
        Prep->setText(QApplication::translate("Default_New_Recipe", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class Default_New_Recipe: public Ui_Default_New_Recipe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEFAULT_NEW_RECIPE_H
