import QtQuick 2.0
import QtQuick.Controls 2.0

ApplicationWindow {
    visible: true
    width: 320
    height: 240
    title: qsTr("Hello World")

    Text {
        text: qsTr("The world's most simple QML view.")
        anchors.centerIn: parent
    }
}
