#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "simpleClass.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    SimpleClass simple;  // Create an instance of SimpleClass
    auto const content = simple.sayHello();
    qDebug() << content;
    qWarning() << "foo (warning level)";

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    if (engine.rootObjects().isEmpty()) {
        return -1;
    }

    return app.exec();
}
