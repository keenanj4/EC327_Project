#-------------------------------------------------
#
# Project created by QtCreator 2014-05-04T00:11:00
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Cook_Book_App
TEMPLATE = app


SOURCES += main.cpp\
        home_screen.cpp \
    chocolate_chip_cookies_ing.cpp \
    chocolate_chip_cookies_stp1.cpp

HEADERS  += home_screen.h \
    chocolate_chip_cookies_ing.h \
    chocolate_chip_cookies_stp1.h

FORMS    += home_screen.ui \
    chocolate_chip_cookies_ing.ui \
    chocolate_chip_cookies_stp1.ui

CONFIG += mobility
MOBILITY = 

RESOURCES += \
    pictures.qrc

OTHER_FILES += C:\Users\Jedidiah\Documents\GitHub\EC327_Project\Cook_Book_App\Images\Chocolate_Chip_Cookies.jpeg

