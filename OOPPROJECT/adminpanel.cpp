#include "adminpanel.h"
#include "ui_adminpanel.h"
#include<QMessageBox>
#include<login.h>
#include<addemployee.h>
#include<getemployee.h>
#include<addmedicine.h>
adminpanel::adminpanel(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::adminpanel)
{
    ui->setupUi(this);
}

adminpanel::~adminpanel()
{
    delete ui;
}

void adminpanel::on_pushButton_signout_clicked()
{
    hide();
      QMessageBox::question(this,"","Are you sure you want to signOut?");
    Login *l=new Login(this);
      l->show();
}


void adminpanel::on_pushButton_addemployee_clicked()
{
    addemployee* emp=new addemployee(this);
    emp->show();
}


void adminpanel::on_pushButton_getemployee_clicked()
{
    getemployee *gemp=new getemployee(this);
    gemp->show();
}


void adminpanel::on_pushButton_addmedcine_clicked()
{
    addmedicine*addmed=new addmedicine(this);
    addmed->show();
}

