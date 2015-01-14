/********************************************************************************
** Form generated from reading UI file 'serverwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERWIDGET_H
#define UI_SERVERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServerWidget
{
public:
    QPushButton *startStopServerButton;
    QPushButton *selectDirectoryButton;
    QLineEdit *selectedDirectoryPath;
    QTableWidget *fileTable;

    void setupUi(QWidget *ServerWidget)
    {
        if (ServerWidget->objectName().isEmpty())
            ServerWidget->setObjectName(QStringLiteral("ServerWidget"));
        ServerWidget->resize(400, 300);
        startStopServerButton = new QPushButton(ServerWidget);
        startStopServerButton->setObjectName(QStringLiteral("startStopServerButton"));
        startStopServerButton->setGeometry(QRect(20, 260, 361, 27));
        selectDirectoryButton = new QPushButton(ServerWidget);
        selectDirectoryButton->setObjectName(QStringLiteral("selectDirectoryButton"));
        selectDirectoryButton->setGeometry(QRect(20, 230, 41, 27));
        selectedDirectoryPath = new QLineEdit(ServerWidget);
        selectedDirectoryPath->setObjectName(QStringLiteral("selectedDirectoryPath"));
        selectedDirectoryPath->setGeometry(QRect(70, 230, 311, 27));
        fileTable = new QTableWidget(ServerWidget);
        if (fileTable->columnCount() < 1)
            fileTable->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        fileTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        fileTable->setObjectName(QStringLiteral("fileTable"));
        fileTable->setGeometry(QRect(20, 21, 361, 201));
        fileTable->setRowCount(0);
        fileTable->setColumnCount(1);

        retranslateUi(ServerWidget);

        QMetaObject::connectSlotsByName(ServerWidget);
    } // setupUi

    void retranslateUi(QWidget *ServerWidget)
    {
        ServerWidget->setWindowTitle(QApplication::translate("ServerWidget", "ServerWidget", 0));
        startStopServerButton->setText(QApplication::translate("ServerWidget", "Stoped", 0));
        selectDirectoryButton->setText(QApplication::translate("ServerWidget", "...", 0));
        QTableWidgetItem *___qtablewidgetitem = fileTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ServerWidget", "Files", 0));
    } // retranslateUi

};

namespace Ui {
    class ServerWidget: public Ui_ServerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERWIDGET_H
