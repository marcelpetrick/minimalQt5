#include <QtTest/QtTest>
#include "simpleClass.h"

class TestSimpleClass : public QObject
{
    Q_OBJECT

private slots:
    void testSayHello();
};

void TestSimpleClass::testSayHello()
{
    SimpleClass simple;
    QString result = simple.sayHello();
    QCOMPARE(result, QString("Hello from SimpleClass!"));
}

QTEST_MAIN(TestSimpleClass)
#include "test_simpleClass.moc"
