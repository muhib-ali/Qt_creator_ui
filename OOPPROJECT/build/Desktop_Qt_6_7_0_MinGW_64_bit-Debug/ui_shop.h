/********************************************************************************
** Form generated from reading UI file 'shop.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOP_H
#define UI_SHOP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_shop
{
public:
    QLabel *label;
    QListWidget *listWidget;
    QPushButton *pushButton_viewcart;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_item;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit;

    void setupUi(QDialog *shop)
    {
        if (shop->objectName().isEmpty())
            shop->setObjectName("shop");
        shop->resize(410, 300);
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        shop->setFont(font);
        shop->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(shop);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 0, 381, 16));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(true);
        label->setFont(font1);
        listWidget = new QListWidget(shop);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(40, 20, 256, 192));
        listWidget->setFont(font);
        listWidget->viewport()->setProperty("cursor", QVariant(QCursor(Qt::BusyCursor)));
        listWidget->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 127);\n"
"background-color: rgb(255, 255, 255);"));
        pushButton_viewcart = new QPushButton(shop);
        pushButton_viewcart->setObjectName("pushButton_viewcart");
        pushButton_viewcart->setGeometry(QRect(300, 20, 51, 51));
        pushButton_viewcart->setFont(font);
        pushButton_viewcart->setStyleSheet(QString::fromUtf8("\n"
"image: url(:/img/img/cart.jpg);\n"
""));
        layoutWidget = new QWidget(shop);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 220, 381, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit_item = new QLineEdit(layoutWidget);
        lineEdit_item->setObjectName("lineEdit_item");

        horizontalLayout->addWidget(lineEdit_item);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(pushButton_2);


        horizontalLayout_2->addLayout(horizontalLayout);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(pushButton);

        layoutWidget1 = new QWidget(shop);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(20, 250, 219, 24));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        lineEdit = new QLineEdit(layoutWidget1);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_3->addWidget(lineEdit);


        retranslateUi(shop);

        QMetaObject::connectSlotsByName(shop);
    } // setupUi

    void retranslateUi(QDialog *shop)
    {
        shop->setWindowTitle(QCoreApplication::translate("shop", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("shop", "[LIST OF AVAILABLE MEDICINES]", nullptr));
        pushButton_viewcart->setText(QString());
        label_2->setText(QCoreApplication::translate("shop", "Enter here ", nullptr));
        pushButton_2->setText(QCoreApplication::translate("shop", "add to cart", nullptr));
        pushButton->setText(QCoreApplication::translate("shop", "back", nullptr));
        label_3->setText(QCoreApplication::translate("shop", "Quantity", nullptr));
    } // retranslateUi

};

namespace Ui {
    class shop: public Ui_shop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOP_H
