QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  datetest.cpp \
       ../../WelcomeToTampere/date.cc

HEADERS += \
    ../../WelcomeToTampere/date.hh

INCLUDEPATH += \
            ../../WelcomeToTampere/
DEPENDPATH  += \
            ../../WelcomeToTampere/
