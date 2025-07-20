/********************************************************************************
** Form generated from reading UI file 'cart.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CART_H
#define UI_CART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_cart
{
public:
    QLabel *label;
    QPushButton *pushButton_back;
    QListWidget *listWidget_cart;
    QPushButton *pushButton_buy;
    QLabel *label_2;

    void setupUi(QDialog *cart)
    {
        if (cart->objectName().isEmpty())
            cart->setObjectName("cart");
        cart->resize(400, 300);
        label = new QLabel(cart);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 20, 181, 20));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        label->setFont(font);
        pushButton_back = new QPushButton(cart);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setGeometry(QRect(310, 250, 80, 18));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(true);
        pushButton_back->setFont(font1);
        pushButton_back->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);"));
        listWidget_cart = new QListWidget(cart);
        listWidget_cart->setObjectName("listWidget_cart");
        listWidget_cart->setGeometry(QRect(60, 50, 256, 192));
        listWidget_cart->setStyleSheet(QString::fromUtf8("color: rgb(255, 85, 0);"));
        pushButton_buy = new QPushButton(cart);
        pushButton_buy->setObjectName("pushButton_buy");
        pushButton_buy->setGeometry(QRect(220, 250, 80, 18));
        pushButton_buy->setFont(font1);
        pushButton_buy->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        label_2 = new QLabel(cart);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(320, 50, 81, 91));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/img/img/i1.png);"));

        retranslateUi(cart);

        QMetaObject::connectSlotsByName(cart);
    } // setupUi

    void retranslateUi(QDialog *cart)
    {
        cart->setWindowTitle(QCoreApplication::translate("cart", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("cart", "[MY CART]", nullptr));
        pushButton_back->setText(QCoreApplication::translate("cart", "back", nullptr));
        pushButton_buy->setText(QCoreApplication::translate("cart", "BUY", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class cart: public Ui_cart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CART_H
