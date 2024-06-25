QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

HEADERS += ../gcd/gcd.h
SOURCES +=  tst_gcd_test.cpp ../gcd/gcd.h
