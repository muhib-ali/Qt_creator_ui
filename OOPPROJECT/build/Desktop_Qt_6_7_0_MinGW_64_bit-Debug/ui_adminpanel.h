/********************************************************************************
** Form generated from reading UI file 'adminpanel.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINPANEL_H
#define UI_ADMINPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminpanel
{
public:
    QLabel *label;
    QPushButton *pushButton_addemployee;
    QPushButton *pushButton_getemployee;
    QPushButton *pushButton_addmedcine;
    QPushButton *pushButton_gotohome;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_signout;
    QLabel *label_signout;

    void setupUi(QDialog *adminpanel)
    {
        if (adminpanel->objectName().isEmpty())
            adminpanel->setObjectName("adminpanel");
        adminpanel->resize(400, 300);
        label = new QLabel(adminpanel);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 20, 181, 16));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);
        pushButton_addemployee = new QPushButton(adminpanel);
        pushButton_addemployee->setObjectName("pushButton_addemployee");
        pushButton_addemployee->setGeometry(QRect(90, 70, 151, 18));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(true);
        pushButton_addemployee->setFont(font1);
        pushButton_addemployee->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 184, 61);\n"
"color: rgb(0, 170, 127);"));
        pushButton_getemployee = new QPushButton(adminpanel);
        pushButton_getemployee->setObjectName("pushButton_getemployee");
        pushButton_getemployee->setGeometry(QRect(90, 100, 151, 18));
        pushButton_getemployee->setFont(font1);
        pushButton_getemployee->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 184, 61);\n"
"color: rgb(0, 170, 127);"));
        pushButton_addmedcine = new QPushButton(adminpanel);
        pushButton_addmedcine->setObjectName("pushButton_addmedcine");
        pushButton_addmedcine->setGeometry(QRect(90, 130, 151, 18));
        pushButton_addmedcine->setFont(font1);
        pushButton_addmedcine->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 184, 61);\n"
"color: rgb(0, 170, 127);"));
        pushButton_gotohome = new QPushButton(adminpanel);
        pushButton_gotohome->setObjectName("pushButton_gotohome");
        pushButton_gotohome->setGeometry(QRect(89, 160, 151, 20));
        pushButton_gotohome->setFont(font1);
        pushButton_gotohome->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 184, 61);\n"
"color: rgb(0, 170, 127);"));
        layoutWidget = new QWidget(adminpanel);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(220, 240, 131, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_signout = new QPushButton(layoutWidget);
        pushButton_signout->setObjectName("pushButton_signout");
        QFont font2;
        font2.setBold(true);
        pushButton_signout->setFont(font2);
        pushButton_signout->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(pushButton_signout);

        label_signout = new QLabel(layoutWidget);
        label_signout->setObjectName("label_signout");

        horizontalLayout->addWidget(label_signout);

#if QT_CONFIG(shortcut)
        label_signout->setBuddy(pushButton_signout);
#endif // QT_CONFIG(shortcut)

        retranslateUi(adminpanel);

        QMetaObject::connectSlotsByName(adminpanel);
    } // setupUi

    void retranslateUi(QDialog *adminpanel)
    {
        adminpanel->setWindowTitle(QCoreApplication::translate("adminpanel", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("adminpanel", "[ADMIN PANEL]", nullptr));
        pushButton_addemployee->setText(QCoreApplication::translate("adminpanel", "Add New Employee", nullptr));
        pushButton_getemployee->setText(QCoreApplication::translate("adminpanel", "Get Employee Details", nullptr));
        pushButton_addmedcine->setText(QCoreApplication::translate("adminpanel", "Add new Medicine", nullptr));
        pushButton_gotohome->setText(QCoreApplication::translate("adminpanel", "Go to home page", nullptr));
        pushButton_signout->setText(QCoreApplication::translate("adminpanel", "SignOut", nullptr));
        label_signout->setText(QCoreApplication::translate("adminpanel", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminpanel: public Ui_adminpanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPANEL_H
