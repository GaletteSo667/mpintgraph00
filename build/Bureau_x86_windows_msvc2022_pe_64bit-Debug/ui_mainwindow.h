/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnRSA;
    QPushButton *btnAES;
    QPushButton *btnSHA;
    QPushButton *btnDoss;
    QPushButton *btnChiff;
    QPushButton *btnDechiff;
    QLabel *labelFileContent;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1081, 751);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(210, 280, 241, 118));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btnRSA = new QPushButton(verticalLayoutWidget);
        btnRSA->setObjectName("btnRSA");

        horizontalLayout->addWidget(btnRSA);

        btnAES = new QPushButton(verticalLayoutWidget);
        btnAES->setObjectName("btnAES");

        horizontalLayout->addWidget(btnAES);

        btnSHA = new QPushButton(verticalLayoutWidget);
        btnSHA->setObjectName("btnSHA");

        horizontalLayout->addWidget(btnSHA);


        verticalLayout->addLayout(horizontalLayout);

        btnDoss = new QPushButton(verticalLayoutWidget);
        btnDoss->setObjectName("btnDoss");

        verticalLayout->addWidget(btnDoss);

        btnChiff = new QPushButton(verticalLayoutWidget);
        btnChiff->setObjectName("btnChiff");

        verticalLayout->addWidget(btnChiff);

        btnDechiff = new QPushButton(verticalLayoutWidget);
        btnDechiff->setObjectName("btnDechiff");

        verticalLayout->addWidget(btnDechiff);

        labelFileContent = new QLabel(centralwidget);
        labelFileContent->setObjectName("labelFileContent");
        labelFileContent->setGeometry(QRect(520, 260, 361, 281));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1081, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnRSA->setText(QCoreApplication::translate("MainWindow", "RSA", nullptr));
        btnAES->setText(QCoreApplication::translate("MainWindow", "AES", nullptr));
        btnSHA->setText(QCoreApplication::translate("MainWindow", "SHA", nullptr));
        btnDoss->setText(QCoreApplication::translate("MainWindow", "Dossiers", nullptr));
        btnChiff->setText(QCoreApplication::translate("MainWindow", "Chiffrer", nullptr));
        btnDechiff->setText(QCoreApplication::translate("MainWindow", "D\303\251chiffrer", nullptr));
        labelFileContent->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
