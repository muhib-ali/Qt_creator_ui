/********************************************************************************
** Form generated from reading UI file 'information.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATION_H
#define UI_INFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_information
{
public:
    QLabel *label_4;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_fakeha;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_muhib;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_fizba;
    QLabel *label_3;

    void setupUi(QDialog *information)
    {
        if (information->objectName().isEmpty())
            information->setObjectName("information");
        information->resize(400, 300);
        label_4 = new QLabel(information);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(140, 20, 141, 20));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label_4->setFont(font);
        pushButton = new QPushButton(information);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(310, 250, 80, 18));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(true);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(information);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 60, 311, 141));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_fakeha = new QLabel(layoutWidget);
        label_fakeha->setObjectName("label_fakeha");
        label_fakeha->setStyleSheet(QString::fromUtf8("image: url(:/img/img/femaleuser.png);"));

        verticalLayout_3->addWidget(label_fakeha);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        verticalLayout_3->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_muhib = new QLabel(layoutWidget);
        label_muhib->setObjectName("label_muhib");
        label_muhib->setStyleSheet(QString::fromUtf8("image: url(:/img/img/maleuser.png);"));

        verticalLayout->addWidget(label_muhib);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setFont(font1);

        verticalLayout->addWidget(label);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_fizba = new QLabel(layoutWidget);
        label_fizba->setObjectName("label_fizba");
        label_fizba->setStyleSheet(QString::fromUtf8("image: url(:/img/img/femaleuser.png);"));

        verticalLayout_2->addWidget(label_fizba);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        verticalLayout_2->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(information);

        QMetaObject::connectSlotsByName(information);
    } // setupUi

    void retranslateUi(QDialog *information)
    {
        information->setWindowTitle(QCoreApplication::translate("information", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("information", "          INFO", nullptr));
        pushButton->setText(QCoreApplication::translate("information", "back", nullptr));
        label_fakeha->setText(QString());
        label_2->setText(QCoreApplication::translate("information", "FAKEHA", nullptr));
        label_muhib->setText(QString());
        label->setText(QCoreApplication::translate("information", "MUHIB ALI", nullptr));
        label_fizba->setText(QString());
        label_3->setText(QCoreApplication::translate("information", "FIZBAH", nullptr));
    } // retranslateUi

};

namespace Ui {
    class information: public Ui_information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATION_H
