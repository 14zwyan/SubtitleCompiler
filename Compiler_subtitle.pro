TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Subtitle.cpp \
    Lexical_analyser.cpp \
    Token.cpp \
    Parser.cpp

HEADERS += \
    Subtitle.h \
    Lexical_analyser.h \
    Token.h \
    Parser.h
