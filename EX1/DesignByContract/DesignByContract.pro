TEMPLATE = app
CONFIG += console c++17
CONFIG += qt
CONFIG -= app_bundle

SOURCES += \
        date.cc \
        fraction.cc \
        string.cc \
        vector.cc \
        main.cpp

HEADERS += \
    date.hh \
    fraction.hh \
    string.hh \
    vector.hh
