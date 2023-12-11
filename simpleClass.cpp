#include "simpleClass.h"

SimpleClass::SimpleClass(QObject *parent) : QObject(parent)
{
}

QString SimpleClass::sayHello() const
{
    return "Hello from SimpleClass!";
}
