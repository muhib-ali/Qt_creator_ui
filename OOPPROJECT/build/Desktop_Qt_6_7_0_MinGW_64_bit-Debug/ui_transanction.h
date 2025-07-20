/********************************************************************************
** Form generated from reading UI file 'transanction.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSANCTION_H
#define UI_TRANSANCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_transanction
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QListWidget *listWidget;
    QPushButton *pushButton_2;

    void setupUi(QDialog *transanction)
    {
        if (transanction->objectName().isEmpty())
            transanction->setObjectName("transanction");
        transanction->resize(400, 300);
        pushButton = new QPushButton(transanction);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(290, 240, 80, 18));
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(transanction);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 20, 181, 21));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label->setFont(font1);
        listWidget = new QListWidget(transanction);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(40, 40, 256, 192));
        listWidget->setFont(font);
        pushButton_2 = new QPushButton(transanction);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(310, 40, 81, 111));
        pushButton_2->setStyleSheet(QString::fromUtf8("image: url(:/img/img/transanction.png);"));

        retranslateUi(transanction);

        QMetaObject::connectSlotsByName(transanction);
    } // setupUi

    void retranslateUi(QDialog *transanction)
    {
        transanction->setWindowTitle(QCoreApplication::translate("transanction", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("transanction", "back", nullptr));
        label->setText(QCoreApplication::translate("transanction", "[PURCHASE HISTORY]", nullptr));
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class transanction: public Ui_transanction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSANCTION_H
