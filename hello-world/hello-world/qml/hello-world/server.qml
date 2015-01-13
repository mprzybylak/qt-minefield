import QtQuick 1.1

Rectangle {
    width: 225
    height: 60
    MouseArea {
        x: 1
        y: 0
        width: 250
        height: 360
        anchors.rightMargin: 1
        anchors.bottomMargin: 0
        anchors.leftMargin: 1
        anchors.topMargin: 0
        anchors.fill: parent
        onClicked: {
            Qt.quit();
        }

        Text {
            id: value_header
            x: 0
            y: 32
            text: qsTr("value:")
            font.pixelSize: 12
        }

        Text {
            id: window_header
            x: 0
            y: 0
            text: qsTr("Server")
            anchors.verticalCenterOffset: -21
            anchors.horizontalCenterOffset: -90
            anchors.centerIn: parent
        }

        TextEdit {
            id: value_edit
            x: 73
            y: 30
            width: 139
            height: 20
            text: qsTr("1")
            horizontalAlignment: TextEdit.AlignRight
            textFormat: TextEdit.PlainText
            font.pixelSize: 12
        }

    }
}
