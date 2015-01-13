/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Client
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QTextEdit *textEdit;

    void setupUi(QWidget *Client)
    {
        if (Client->objectName().isEmpty())
            Client->setObjectName(QStringLiteral("Client"));
        Client->resize(400, 300);
        label = new QLabel(Client);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 67, 17));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        pushButton = new QPushButton(Client);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 260, 381, 27));
        textEdit = new QTextEdit(Client);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 40, 381, 211));
        textEdit->setReadOnly(true);

        retranslateUi(Client);

        QMetaObject::connectSlotsByName(Client);
    } // setupUi

    void retranslateUi(QWidget *Client)
    {
        Client->setWindowTitle(QApplication::translate("Client", "Form", 0));
        label->setText(QApplication::translate("Client", "Client", 0));
        pushButton->setText(QApplication::translate("Client", "Connect", 0));
    } // retranslateUi

};

namespace Ui {
    class Client: public Ui_Client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
