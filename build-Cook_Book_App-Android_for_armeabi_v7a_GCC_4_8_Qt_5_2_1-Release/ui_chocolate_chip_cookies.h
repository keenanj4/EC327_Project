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

QT_BEGIN_NAMESPACE

class Ui_Chocolate_Chip_Cookies
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

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
        label->setPixmap(QPixmap(QString::fromUtf8("Images/Chocolate_Chip_Cookies.jpg")));

        retranslateUi(Chocolate_Chip_Cookies);
        QObject::connect(buttonBox, SIGNAL(accepted()), Chocolate_Chip_Cookies, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Chocolate_Chip_Cookies, SLOT(reject()));

        QMetaObject::connectSlotsByName(Chocolate_Chip_Cookies);
    } // setupUi

    void retranslateUi(QDialog *Chocolate_Chip_Cookies)
    {
        Chocolate_Chip_Cookies->setWindowTitle(QApplication::translate("Chocolate_Chip_Cookies", "Dialog", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Chocolate_Chip_Cookies: public Ui_Chocolate_Chip_Cookies {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOCOLATE_CHIP_COOKIES_H
