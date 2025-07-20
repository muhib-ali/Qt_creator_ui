#include "login.h"
#include "ui_login.h"
#include<QMessageBox>
#include<mainwindow.h>
Login::Login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_login_clicked()
{
    QString username=ui->lineEdit_username->text();
    QString password=ui->lineEdit_password->text();

    if(username=="OOPproject" && password=="12345"){
         hide();
        QMessageBox::information(this,"Login","Login successfull!");
      a=new adminpanel(this);
        a->show();
    }else{
        QMessageBox::warning(this,"Login","Incorret username or password");
    }
}


void Login::on_pushButton_back1_clicked()
{
    // Close the current dialog window
    close();

    // Create and show the main window
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

