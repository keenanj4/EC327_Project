#-------------------------------------------------
#
# Project created by QtCreator 2014-05-08T13:25:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Cook_Book_Last_Try
TEMPLATE = app


SOURCES += \
    home_screen.cpp \
    main.cpp \
    random_recipe.cpp \
    add_new.cpp

HEADERS  += \
    home_screen.h \
    random_recipe.h \
    add_new.h

FORMS    += \
    home_screen.ui \
    random_recipe.ui \
    add_new.ui

CONFIG += mobility
MOBILITY = 

OTHER_FILES +=

RESOURCES += \
    Resources.qrc

