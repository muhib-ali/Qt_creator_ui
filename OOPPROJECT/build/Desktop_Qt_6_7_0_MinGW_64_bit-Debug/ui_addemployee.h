/********************************************************************************
** Form generated from reading UI file 'addemployee.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEMPLOYEE_H
#define UI_ADDEMPLOYEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addemployee
{
public:
    QLabel *label_4;
    QPushButton *pushButton;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton_back;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_id;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_salary;
    QLabel *label_5;

    void setupUi(QDialog *addemployee)
    {
        if (addemployee->objectName().isEmpty())
            addemployee->setObjectName("addemployee");
        addemployee->resize(400, 292);
        label_4 = new QLabel(addemployee);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 20, 161, 16));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_4->setFont(font);
        pushButton = new QPushButton(addemployee);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(230, 170, 80, 18));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(true);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);"));
        radioButton = new QRadioButton(addemployee);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(50, 180, 111, 18));
        radioButton->setFont(font1);
        radioButton_2 = new QRadioButton(addemployee);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(50, 210, 121, 18));
        radioButton_2->setFont(font1);
        pushButton_back = new QPushButton(addemployee);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setGeometry(QRect(260, 240, 80, 18));
        pushButton_back->setFont(font1);
        pushButton_back->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(addemployee);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 90, 271, 78));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font2;
        font2.setBold(true);
        label->setFont(font2);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        lineEdit_id = new QLineEdit(layoutWidget);
        lineEdit_id->setObjectName("lineEdit_id");
        lineEdit_id->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 255, 253);"));

        verticalLayout_2->addWidget(lineEdit_id);

        lineEdit_name = new QLineEdit(layoutWidget);
        lineEdit_name->setObjectName("lineEdit_name");
        lineEdit_name->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 255, 253);"));

        verticalLayout_2->addWidget(lineEdit_name);

        lineEdit_salary = new QLineEdit(layoutWidget);
        lineEdit_salary->setObjectName("lineEdit_salary");
        lineEdit_salary->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 255, 253);"));

        verticalLayout_2->addWidget(lineEdit_salary);


        horizontalLayout->addLayout(verticalLayout_2);

        label_5 = new QLabel(addemployee);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(250, 0, 131, 81));
        label_5->setStyleSheet(QString::fromUtf8("\n"
"image: url(:/img/img/i4.png);"));

        retranslateUi(addemployee);

        QMetaObject::connectSlotsByName(addemployee);
    } // setupUi

    void retranslateUi(QDialog *addemployee)
    {
        addemployee->setWindowTitle(QCoreApplication::translate("addemployee", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("addemployee", "[ADD EMPLOYEE]", nullptr));
        pushButton->setText(QCoreApplication::translate("addemployee", "ADD", nullptr));
        radioButton->setText(QCoreApplication::translate("addemployee", "Delivery man", nullptr));
        radioButton_2->setText(QCoreApplication::translate("addemployee", "Company worker", nullptr));
        pushButton_back->setText(QCoreApplication::translate("addemployee", "back", nullptr));
        label->setText(QCoreApplication::translate("addemployee", "ENTER ID", nullptr));
        label_2->setText(QCoreApplication::translate("addemployee", "ENTER NAME", nullptr));
        label_3->setText(QCoreApplication::translate("addemployee", "SET SALARY", nullptr));
        lineEdit_id->setText(QString());
        lineEdit_name->setText(QString());
        lineEdit_salary->setText(QString());
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class addemployee: public Ui_addemployee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEMPLOYEE_H
