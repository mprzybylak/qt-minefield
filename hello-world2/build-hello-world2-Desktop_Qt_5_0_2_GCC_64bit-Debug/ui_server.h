/********************************************************************************
** Form generated from reading UI file 'server.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVER_H
#define UI_SERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Server
{
public:
    QLabel *widget_header;
    QLabel *value_label;
    QLineEdit *value_edit;

    void setupUi(QWidget *Server)
    {
        if (Server->objectName().isEmpty())
            Server->setObjectName(QStringLiteral("Server"));
        Server->resize(136, 98);
        widget_header = new QLabel(Server);
        widget_header->setObjectName(QStringLiteral("widget_header"));
        widget_header->setGeometry(QRect(10, 10, 67, 17));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        widget_header->setFont(font);
        value_label = new QLabel(Server);
        value_label->setObjectName(QStringLiteral("value_label"));
        value_label->setGeometry(QRect(10, 40, 41, 17));
        value_edit = new QLineEdit(Server);
        value_edit->setObjectName(QStringLiteral("value_edit"));
        value_edit->setGeometry(QRect(10, 60, 113, 27));

        retranslateUi(Server);

        QMetaObject::connectSlotsByName(Server);
    } // setupUi

    void retranslateUi(QWidget *Server)
    {
        Server->setWindowTitle(QApplication::translate("Server", "Form", 0));
        widget_header->setText(QApplication::translate("Server", "Server", 0));
        value_label->setText(QApplication::translate("Server", "value:", 0));
    } // retranslateUi

};

namespace Ui {
    class Server: public Ui_Server {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVER_H
