TEMPLATE = app
QT += quick testlib
CONFIG += c++14

SOURCES += main.cpp \
           simpleClass.cpp \
           test_simpleClass.cpp

HEADERS += simpleClass.h \
           test_simpleClass.h

RESOURCES += qml.qrc

QML_IMPORT_PATH =
