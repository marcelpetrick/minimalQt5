#include "test_simpleClass.h"
#include "simpleClass.h"

void Test_SimpleClass::testSayHello()
{
    SimpleClass simple;
    QString result = simple.sayHello();
    QCOMPARE(result, QString("Hello from SimpleClass!"));
}

QTEST_MAIN(Test_SimpleClass)
#include "test_simpleClass.moc"
