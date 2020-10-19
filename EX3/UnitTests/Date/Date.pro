QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  \
       ../../WelcomeToTampere/date.cc \
       tst_date.cpp

HEADERS += \
    ../../WelcomeToTampere/date.hh

INCLUDEPATH += \
            ../../WelcomeToTampere/
DEPENDPATH  += \
            ../../WelcomeToTampere/
