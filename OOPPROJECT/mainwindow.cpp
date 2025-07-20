#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_close_clicked()
{
    QMessageBox::StandardButton reply;
    reply=QMessageBox::question(this,"Login","Are you sure that you want to close the application?",QMessageBox:: Yes| QMessageBox::No);
    if(reply==QMessageBox::Yes){
        QApplication::quit();
    }
}


void MainWindow::on_pushButton_adminpanel_clicked()
{ hide();
    l=new Login(this);
    l->show();
}


void MainWindow::on_pushButton_shop_clicked()
{

}


void MainWindow::on_pushButton_history_clicked()
{

}

