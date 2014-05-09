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
    main.cpp \
    recipe1.cpp \
    recipe1_dir.cpp \
    recipe2.cpp \
    recipe2_dir.cpp

HEADERS  += home_screen.h \
    recipe1.h \
    recipe1_dir.h \
    recipe2.h \
    recipe2_dir.h

FORMS    += home_screen.ui \
    recipe1.ui \
    recipe1_dir.ui \
    recipe2_dir.ui \
    recipe2.ui

CONFIG += mobility
MOBILITY = 

RESOURCES += \
    pictures.qrc

OTHER_FILES += C:\Users\Jedidiah\Documents\GitHub\EC327_Project\Cook_Book_App\Images\Chocolate_Chip_Cookies.jpeg

