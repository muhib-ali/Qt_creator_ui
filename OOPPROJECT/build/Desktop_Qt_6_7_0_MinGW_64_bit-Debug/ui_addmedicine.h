/********************************************************************************
** Form generated from reading UI file 'addmedicine.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMEDICINE_H
#define UI_ADDMEDICINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addmedicine
{
public:
    QLabel *label;
    QPushButton *pushButton_add;
    QPushButton *pushButton_back;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_price;
    QLineEdit *lineEdit_stock;
    QLabel *label_5;

    void setupUi(QDialog *addmedicine)
    {
        if (addmedicine->objectName().isEmpty())
            addmedicine->setObjectName("addmedicine");
        addmedicine->resize(400, 300);
        label = new QLabel(addmedicine);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 30, 391, 16));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);
        label->setFrameShadow(QFrame::Raised);
        pushButton_add = new QPushButton(addmedicine);
        pushButton_add->setObjectName("pushButton_add");
        pushButton_add->setGeometry(QRect(220, 180, 80, 18));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(true);
        pushButton_add->setFont(font1);
        pushButton_add->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);"));
        pushButton_back = new QPushButton(addmedicine);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setGeometry(QRect(270, 250, 80, 18));
        pushButton_back->setFont(font1);
        pushButton_back->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(addmedicine);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 90, 261, 78));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        label_2->setFont(font2);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);

        verticalLayout->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        lineEdit_name = new QLineEdit(layoutWidget);
        lineEdit_name->setObjectName("lineEdit_name");
        lineEdit_name->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 255, 253);"));

        verticalLayout_2->addWidget(lineEdit_name);

        lineEdit_price = new QLineEdit(layoutWidget);
        lineEdit_price->setObjectName("lineEdit_price");
        lineEdit_price->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 255, 253);"));

        verticalLayout_2->addWidget(lineEdit_price);

        lineEdit_stock = new QLineEdit(layoutWidget);
        lineEdit_stock->setObjectName("lineEdit_stock");
        lineEdit_stock->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 255, 253);"));

        verticalLayout_2->addWidget(lineEdit_stock);


        horizontalLayout->addLayout(verticalLayout_2);

        label_5 = new QLabel(addmedicine);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(310, 90, 81, 111));
        label_5->setStyleSheet(QString::fromUtf8("image: url(:/img/img/i2.png);"));

        retranslateUi(addmedicine);

        QMetaObject::connectSlotsByName(addmedicine);
    } // setupUi

    void retranslateUi(QDialog *addmedicine)
    {
        addmedicine->setWindowTitle(QCoreApplication::translate("addmedicine", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addmedicine", "[ADDING NEW MEDICINE TO THE INVETORY]", nullptr));
        pushButton_add->setText(QCoreApplication::translate("addmedicine", "ADD", nullptr));
        pushButton_back->setText(QCoreApplication::translate("addmedicine", "back", nullptr));
        label_2->setText(QCoreApplication::translate("addmedicine", "NAME", nullptr));
        label_3->setText(QCoreApplication::translate("addmedicine", "PRICE", nullptr));
        label_4->setText(QCoreApplication::translate("addmedicine", "STOCK", nullptr));
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class addmedicine: public Ui_addmedicine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMEDICINE_H
