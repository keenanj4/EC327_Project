/********************************************************************************
** Form generated from reading UI file 'recipe2_dir.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIPE2_DIR_H
#define UI_RECIPE2_DIR_H

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
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QLabel *label_4;

    void setupUi(QDialog *Default_New_Recipe)
    {
        if (Default_New_Recipe->objectName().isEmpty())
            Default_New_Recipe->setObjectName(QStringLiteral("Default_New_Recipe"));
        Default_New_Recipe->resize(720, 1080);
        Default_New_Recipe->setAutoFillBackground(false);
        label = new QLabel(Default_New_Recipe);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 720, 200));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(Default_New_Recipe);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 200, 720, 100));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(Default_New_Recipe);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 300, 260, 600));
        QFont font1;
        font1.setPointSize(15);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pushButton_2 = new QPushButton(Default_New_Recipe);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(50, 1010, 150, 30));
        label_4 = new QLabel(Default_New_Recipe);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(360, 300, 360, 600));
        QFont font2;
        font2.setPointSize(12);
        label_4->setFont(font2);
        label_4->setWordWrap(true);

        retranslateUi(Default_New_Recipe);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Default_New_Recipe, SLOT(reject()));

        QMetaObject::connectSlotsByName(Default_New_Recipe);
    } // setupUi

    void retranslateUi(QDialog *Default_New_Recipe)
    {
        Default_New_Recipe->setWindowTitle(QApplication::translate("Default_New_Recipe", "Dialog", 0));
        label->setText(QApplication::translate("Default_New_Recipe", "<html><head/><body><p><img src=\":/pictures/chickencover.jpg\"/></p></body></html>", 0));
        label_2->setText(QApplication::translate("Default_New_Recipe", "Baked Garlic Parmesan Chicken", 0));
        label_3->setText(QApplication::translate("Default_New_Recipe", "INGREDIENTS:\n"
"2 tablespoons olive oil\n"
"1 clove garlic, minced\n"
"1 cup dry bread crumbs\n"
"2/3 cup grated Parmesan cheese\n"
"1 teaspoon dried basil leaves\n"
"1/4 teaspoon ground black pepper\n"
"6 skinless, boneless chicken breast halves", 0));
        pushButton_2->setText(QApplication::translate("Default_New_Recipe", "Back", 0));
        label_4->setText(QApplication::translate("Default_New_Recipe", "\n"
"DIRECTIONS:\n"
"1.	Preheat oven to 350 degrees F (175 degrees C). Lightly grease a 9x13 inch baking dish.\n"
"2.	In a bowl, blend the olive oil and garlic. In a separate bowl, mix the bread crumbs, Parmesan cheese, basil, and pepper. Dip each chicken breast in the oil mixture, then in the bread crumb mixture. Arrange the coated chicken breasts in the prepared baking dish, and top with any remaining bread crumb mixture.\n"
"3.	Bake 30 minutes in the preheated oven, or until chicken is no longer pink and juices run clear.", 0));
    } // retranslateUi

};

namespace Ui {
    class Default_New_Recipe: public Ui_Default_New_Recipe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPE2_DIR_H
