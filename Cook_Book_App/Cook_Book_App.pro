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
    chocolate_chip_cookies.cpp \

HEADERS  += home_screen.h \
    chocolate_chip_cookies.h

FORMS    += home_screen.ui \
    chocolate_chip_cookies.ui

CONFIG += mobility
MOBILITY = 

RESOURCES +=

