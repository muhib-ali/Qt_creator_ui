/********************************************************************************
** Form generated from reading UI file 'getemployee.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETEMPLOYEE_H
#define UI_GETEMPLOYEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_getemployee
{
public:
    QLabel *label;
    QPushButton *pushButton_back;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_id;
    QPushButton *pushButton_search;
    QListWidget *listWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *getemployee)
    {
        if (getemployee->objectName().isEmpty())
            getemployee->setObjectName("getemployee");
        getemployee->resize(400, 300);
        label = new QLabel(getemployee);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 20, 291, 16));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);
        pushButton_back = new QPushButton(getemployee);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setGeometry(QRect(270, 230, 80, 18));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(true);
        pushButton_back->setFont(font1);
        pushButton_back->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(getemployee);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(60, 60, 281, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(137, 207, 240);\n"
"color: rgb(0, 102, 178);"));

        horizontalLayout->addWidget(label_2);

        lineEdit_id = new QLineEdit(layoutWidget);
        lineEdit_id->setObjectName("lineEdit_id");

        horizontalLayout->addWidget(lineEdit_id);

        pushButton_search = new QPushButton(layoutWidget);
        pushButton_search->setObjectName("pushButton_search");
        pushButton_search->setStyleSheet(QString::fromUtf8("image: url(:/img/img/imag3.png);"));

        horizontalLayout->addWidget(pushButton_search);


        horizontalLayout_2->addLayout(horizontalLayout);

        listWidget = new QListWidget(getemployee);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(60, 90, 241, 131));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setItalic(true);
        listWidget->setFont(font2);
        listWidget->setStyleSheet(QString::fromUtf8("color: rgb(85, 170, 255);"));
        widget = new QWidget(getemployee);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(310, 90, 31, 71));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("image: url(:/img/img/view.png);"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("image: url(:/img/img/eye.png);"));

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(getemployee);

        QMetaObject::connectSlotsByName(getemployee);
    } // setupUi

    void retranslateUi(QDialog *getemployee)
    {
        getemployee->setWindowTitle(QCoreApplication::translate("getemployee", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("getemployee", "[GET EMPLOYEE DETAILS]", nullptr));
        pushButton_back->setText(QCoreApplication::translate("getemployee", "back", nullptr));
        label_2->setText(QCoreApplication::translate("getemployee", "Search id", nullptr));
        pushButton_search->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class getemployee: public Ui_getemployee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETEMPLOYEE_H
