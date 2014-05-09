/********************************************************************************
** Form generated from reading UI file 'tst.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TST_H
#define UI_TST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_tst
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *tst)
    {
        if (tst->objectName().isEmpty())
            tst->setObjectName(QStringLiteral("tst"));
        tst->resize(400, 300);
        buttonBox = new QDialogButtonBox(tst);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(tst);
        QObject::connect(buttonBox, SIGNAL(accepted()), tst, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), tst, SLOT(reject()));

        QMetaObject::connectSlotsByName(tst);
    } // setupUi

    void retranslateUi(QDialog *tst)
    {
        tst->setWindowTitle(QApplication::translate("tst", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class tst: public Ui_tst {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TST_H
