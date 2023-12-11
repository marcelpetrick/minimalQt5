#ifndef TEST_SIMPLECLASS_H
#define TEST_SIMPLECLASS_H

#include <QObject>
#include <QtTest/QtTest>

class Test_SimpleClass : public QObject
{
    Q_OBJECT

private slots:
    void testSayHello();
};

#endif // TEST_SIMPLECLASS_H
