TEMPLATE = app

QT += quick
CONFIG += c++14

# Define main application sources and headers
MAIN_SOURCES = main.cpp \
               simpleClass.cpp

MAIN_HEADERS = simpleClass.h

RESOURCES += qml.qrc

# Test configuration
CONFIG(test, test|release) {
    message("Building the test suite...")
    QT += testlib
    DEFINES += QT_TESTLIB_LIB
    SOURCES = simpleClass.cpp \  # Include simpleClass.cpp for test build
             test_simpleClass.cpp
    HEADERS = simpleClass.h  # Include simpleClass.h for test build
    TARGET = test_project
} else {
    message("Building the main application...")
    SOURCES = $$MAIN_SOURCES
    HEADERS = $$MAIN_HEADERS
    TARGET = your_main_project
}
