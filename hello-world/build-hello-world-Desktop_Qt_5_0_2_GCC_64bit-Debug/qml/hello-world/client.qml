import QtQuick 1.1

Rectangle {
    width: 500
    height: 400

    MouseArea {
        id: mousearea1
        x: 0
        y: 0
        width: 500
        height: 400

        Text {
            id: window_header
            x: 0
            y: 0
            text: "Client"
            font.pointSize: 11
            font.pixelSize: 12
        }

        Text {
            id: text1
            x: 0
            y: 27
            width: 60
            height: 15
            text: qsTr("Connect")
            font.pointSize: 9
            clip: false
            font.pixelSize: 12
        }




    }
}
