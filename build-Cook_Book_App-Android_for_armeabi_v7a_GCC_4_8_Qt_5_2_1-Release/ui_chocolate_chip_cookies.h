/********************************************************************************
** Form generated from reading UI file 'chocolate_chip_cookies.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOCOLATE_CHIP_COOKIES_H
#define UI_CHOCOLATE_CHIP_COOKIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Chocolate_Chip_Cookies
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label_2;

    void setupUi(QDialog *Chocolate_Chip_Cookies)
    {
        if (Chocolate_Chip_Cookies->objectName().isEmpty())
            Chocolate_Chip_Cookies->setObjectName(QStringLiteral("Chocolate_Chip_Cookies"));
        Chocolate_Chip_Cookies->resize(720, 1080);
        buttonBox = new QDialogButtonBox(Chocolate_Chip_Cookies);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(610, 1020, 81, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::No);
        label = new QLabel(Chocolate_Chip_Cookies);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 720, 200));
        scrollArea = new QScrollArea(Chocolate_Chip_Cookies);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(0, 200, 721, 111));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 719, 109));
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(5, 2, 711, 171));
        QFont font;
        font.setPointSize(12);
        label_2->setFont(font);
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(Chocolate_Chip_Cookies);
        QObject::connect(buttonBox, SIGNAL(accepted()), Chocolate_Chip_Cookies, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Chocolate_Chip_Cookies, SLOT(reject()));

        QMetaObject::connectSlotsByName(Chocolate_Chip_Cookies);
    } // setupUi

    void retranslateUi(QDialog *Chocolate_Chip_Cookies)
    {
        Chocolate_Chip_Cookies->setWindowTitle(QApplication::translate("Chocolate_Chip_Cookies", "Dialog", 0));
        label->setText(QApplication::translate("Chocolate_Chip_Cookies", "<html><head/><body><p><img src=\":/pictures/Chocolate_Chip_Cookies.jpg\"/></p></body></html>", 0));
        label_2->setText(QApplication::translate("Chocolate_Chip_Cookies", "1 1/2 cups butter or margarine, softened\n"
"1 1/4 cups granulated sugar\n"
"1 1/4 cups packed brown sugar\n"
"1 tablespoon vanilla\n"
"2 eggs\n"
"4 cups Gold Medal\302\256 all-purpose flour\n"
"2 teaspoons baking soda\n"
"1 teaspoon salt\n"
"1 package (24 ounces) semisweet chocolate chips (4 cups)", 0));
    } // retranslateUi

};

namespace Ui {
    class Chocolate_Chip_Cookies: public Ui_Chocolate_Chip_Cookies {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOCOLATE_CHIP_COOKIES_H
