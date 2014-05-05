#-------------------------------------------------
#
# Project created by QtCreator 2014-05-04T00:11:00
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Cook_Book_App
TEMPLATE = app


SOURCES +=\
        home_screen.cpp \
    chocolate_chip_cookies_ing.cpp \
    chocolate_chip_cookies_stp1.cpp \
    main.cpp \
    recipe1.cpp \
    default_new_recipe.cpp \
    recipe1_dir.cpp

HEADERS  += home_screen.h \
    chocolate_chip_cookies_ing.h \
    chocolate_chip_cookies_stp1.h \
    recipe1.h \
    default_new_recipe.h \
    recipe1_dir.h

FORMS    += home_screen.ui \
    chocolate_chip_cookies_ing.ui \
    chocolate_chip_cookies_stp1.ui \
    recipe1.ui \
    default_new_recipe.ui \
    recipe1_dir.ui

CONFIG += mobility
MOBILITY = 

RESOURCES += \
    pictures.qrc

OTHER_FILES += C:\Users\Jedidiah\Documents\GitHub\EC327_Project\Cook_Book_App\Images\Chocolate_Chip_Cookies.jpeg

