/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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
    QPushButton *pushButton_history;
    QPushButton *pushButton_close;
    QPushButton *pushButton_adminpanel;
    QPushButton *pushButton_shop;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_information;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(637, 303);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton_history = new QPushButton(centralwidget);
        pushButton_history->setObjectName("pushButton_history");
        pushButton_history->setGeometry(QRect(40, 120, 161, 20));
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        pushButton_history->setFont(font);
        pushButton_history->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 184, 61);"));
        pushButton_close = new QPushButton(centralwidget);
        pushButton_close->setObjectName("pushButton_close");
        pushButton_close->setGeometry(QRect(260, 240, 80, 18));
        pushButton_close->setFont(font);
        pushButton_close->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 0);\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(85, 170, 127);"));
        pushButton_adminpanel = new QPushButton(centralwidget);
        pushButton_adminpanel->setObjectName("pushButton_adminpanel");
        pushButton_adminpanel->setGeometry(QRect(70, 160, 101, 21));
        pushButton_adminpanel->setFont(font);
        pushButton_adminpanel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 184, 61);"));
        pushButton_shop = new QPushButton(centralwidget);
        pushButton_shop->setObjectName("pushButton_shop");
        pushButton_shop->setGeometry(QRect(40, 80, 161, 20));
        pushButton_shop->setFont(font);
        pushButton_shop->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 184, 61);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(270, 90, 71, 101));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(220, 40, 171, 181));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 501, 56));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setUnderline(true);
        font1.setStrikeOut(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(0, 0, 249, 255), stop:1 rgba(255, 255, 255, 255));"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        QFont font2;
        font2.setBold(true);
        font2.setItalic(true);
        font2.setUnderline(true);
        font2.setStrikeOut(true);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("alternate-background-color: rgb(255, 85, 0);\n"
"background-color: rgb(255, 85, 0);"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 0);"));

        verticalLayout->addWidget(label_3);

        pushButton_information = new QPushButton(centralwidget);
        pushButton_information->setObjectName("pushButton_information");
        pushButton_information->setGeometry(QRect(410, 60, 41, 31));
        pushButton_information->setStyleSheet(QString::fromUtf8("image: url(:/img/img/info.png);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 637, 17));
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
        pushButton_history->setText(QCoreApplication::translate("MainWindow", "View Purchase history", nullptr));
        pushButton_close->setText(QCoreApplication::translate("MainWindow", "close", nullptr));
        pushButton_adminpanel->setText(QCoreApplication::translate("MainWindow", "Admin Panel", nullptr));
        pushButton_shop->setText(QCoreApplication::translate("MainWindow", "shop for Medicines", nullptr));
        label_4->setText(QString());
        label_5->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "WELCOME TO PHARMAHUB PHARMACEUTICAL!", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Your  one stop solution for all your drug needs!", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "what do you wish to do today?", nullptr));
        pushButton_information->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
