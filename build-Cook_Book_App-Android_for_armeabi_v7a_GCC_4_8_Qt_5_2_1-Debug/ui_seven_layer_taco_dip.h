/********************************************************************************
** Form generated from reading UI file 'seven_layer_taco_dip.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEVEN_LAYER_TACO_DIP_H
#define UI_SEVEN_LAYER_TACO_DIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Seven_Layer_Taco_Dip
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *Seven_Layer_Taco_Dip)
    {
        if (Seven_Layer_Taco_Dip->objectName().isEmpty())
            Seven_Layer_Taco_Dip->setObjectName(QStringLiteral("Seven_Layer_Taco_Dip"));
        Seven_Layer_Taco_Dip->resize(720, 1080);
        buttonBox = new QDialogButtonBox(Seven_Layer_Taco_Dip);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(300, 1030, 81, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::No);
        label = new QLabel(Seven_Layer_Taco_Dip);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 240, 301, 101));

        retranslateUi(Seven_Layer_Taco_Dip);
        QObject::connect(buttonBox, SIGNAL(accepted()), Seven_Layer_Taco_Dip, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Seven_Layer_Taco_Dip, SLOT(reject()));

        QMetaObject::connectSlotsByName(Seven_Layer_Taco_Dip);
    } // setupUi

    void retranslateUi(QDialog *Seven_Layer_Taco_Dip)
    {
        Seven_Layer_Taco_Dip->setWindowTitle(QApplication::translate("Seven_Layer_Taco_Dip", "Dialog", 0));
        label->setText(QApplication::translate("Seven_Layer_Taco_Dip", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class Seven_Layer_Taco_Dip: public Ui_Seven_Layer_Taco_Dip {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEVEN_LAYER_TACO_DIP_H
