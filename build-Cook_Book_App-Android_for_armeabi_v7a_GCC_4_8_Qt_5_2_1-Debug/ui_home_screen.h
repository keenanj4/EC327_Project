/********************************************************************************
** Form generated from reading UI file 'home_screen.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_SCREEN_H
#define UI_HOME_SCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Home_Screen
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushGenerate;

    void setupUi(QMainWindow *Home_Screen)
    {
        if (Home_Screen->objectName().isEmpty())
            Home_Screen->setObjectName(QStringLiteral("Home_Screen"));
        Home_Screen->resize(720, 1080);
        centralWidget = new QWidget(Home_Screen);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 100, 451, 351));
        QFont font;
        font.setPointSize(48);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);
        pushGenerate = new QPushButton(centralWidget);
        pushGenerate->setObjectName(QStringLiteral("pushGenerate"));
        pushGenerate->setGeometry(QRect(190, 520, 391, 141));
        QFont font1;
        font1.setPointSize(24);
        pushGenerate->setFont(font1);
        Home_Screen->setCentralWidget(centralWidget);

        retranslateUi(Home_Screen);

        QMetaObject::connectSlotsByName(Home_Screen);
    } // setupUi

    void retranslateUi(QMainWindow *Home_Screen)
    {
        Home_Screen->setWindowTitle(QApplication::translate("Home_Screen", "Home_Screen", 0));
        label->setText(QApplication::translate("Home_Screen", "Random Recipe Generator", 0));
        pushGenerate->setText(QApplication::translate("Home_Screen", "Generate Recipe", 0));
    } // retranslateUi

};

namespace Ui {
    class Home_Screen: public Ui_Home_Screen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_SCREEN_H
