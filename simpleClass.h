#ifndef SIMPLECLASS_H
#define SIMPLECLASS_H
// TODO replace the include guard with pragma once later

#include <QObject>

class SimpleClass : public QObject
{
    Q_OBJECT

public:
    SimpleClass(QObject *parent = nullptr);

    QString sayHello() const;
};

#endif // SIMPLECLASS_H
