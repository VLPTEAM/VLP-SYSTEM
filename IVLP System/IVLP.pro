#-------------------------------------------------
#
# Project created by QtCreator 2016-01-27T13:35:50
#
#-------------------------------------------------

QT       += core gui
QT       += serialport
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = SerialPort
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qcustomplot.cpp \
    menubar.cpp \
    datareceive.cpp \
    datapanel.cpp \
    mappaint.cpp \
    mapconfig.cpp \
    serialconfig.cpp

HEADERS  += mainwindow.h \
    qcustomplot.h

FORMS    += mainwindow.ui

RESOURCES += \
    src.qrc

RC_ICONS = proIcon.ico
