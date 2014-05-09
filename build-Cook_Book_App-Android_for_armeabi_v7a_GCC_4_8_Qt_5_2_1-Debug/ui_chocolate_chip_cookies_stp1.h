/********************************************************************************
** Form generated from reading UI file 'chocolate_chip_cookies_stp1.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOCOLATE_CHIP_COOKIES_STP1_H
#define UI_CHOCOLATE_CHIP_COOKIES_STP1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Chocolate_Chip_Cookies_stp1
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Chocolate_Chip_Cookies_stp1)
    {
        if (Chocolate_Chip_Cookies_stp1->objectName().isEmpty())
            Chocolate_Chip_Cookies_stp1->setObjectName(QStringLiteral("Chocolate_Chip_Cookies_stp1"));
        Chocolate_Chip_Cookies_stp1->resize(720, 1080);
        buttonBox = new QDialogButtonBox(Chocolate_Chip_Cookies_stp1);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(300, 1010, 71, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::No);

        retranslateUi(Chocolate_Chip_Cookies_stp1);
        QObject::connect(buttonBox, SIGNAL(accepted()), Chocolate_Chip_Cookies_stp1, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Chocolate_Chip_Cookies_stp1, SLOT(reject()));

        QMetaObject::connectSlotsByName(Chocolate_Chip_Cookies_stp1);
    } // setupUi

    void retranslateUi(QDialog *Chocolate_Chip_Cookies_stp1)
    {
        Chocolate_Chip_Cookies_stp1->setWindowTitle(QApplication::translate("Chocolate_Chip_Cookies_stp1", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Chocolate_Chip_Cookies_stp1: public Ui_Chocolate_Chip_Cookies_stp1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOCOLATE_CHIP_COOKIES_STP1_H
