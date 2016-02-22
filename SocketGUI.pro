#-------------------------------------------------
#
# Project created by QtCreator 2016-02-09T20:17:38
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SocketGUI
TEMPLATE = app

SOURCES += main.cpp\
        socketgui.cpp

HEADERS  += socketgui.h
HEADERS  += /home/fuguru/git/UdpServer/udpserver.hpp
HEADERS  += /home/fuguru/git/tinyxml2/tinyxml2.h
HEADERS  += /home/fuguru/git/xmls/XMLSerialization.h

SOURCES += /home/fuguru/git/UdpServer/udpserver.cpp
SOURCES += /home/fuguru/git/tinyxml2/tinyxml2.cpp
SOURCES += /home/fuguru/git/xmls/XMLSerialization.cpp

FORMS    += socketgui.ui

INCLUDEPATH += /home/fuguru/git/UdpServer
INCLUDEPATH += /home/fuguru/git/tinyxml2
INCLUDEPATH += /home/fuguru/git/xmls

LIBS += -L"/usr/lib" -lboost_thread -lpthread -lboost_system
#LIBS += -L"/home/fuguru/git/tinyxml2/lib" -ltinyxml2
#LIBS += -L"/home/fuguru/git/xmls/lib" -lxmls
#LIBS += -L"/home/fuguru/git/UdpServer/lib" -ludpserver

CONFIG += c++11
