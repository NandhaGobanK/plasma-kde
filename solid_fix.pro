TEMPLATE = lib
CONFIG += plugin c++11
TARGET = plasma_engine_soliddevice

QT += core widgets

# This forces the compiler to search our local include/ folder first!
INCLUDEPATH += include

SOURCES += soliddeviceengine.cpp
HEADERS += soliddeviceengine.h
