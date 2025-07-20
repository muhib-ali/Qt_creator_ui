#include "addemployee.h"
#include "ui_addemployee.h"

addemployee::addemployee(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addemployee)
{
    ui->setupUi(this);
}

addemployee::~addemployee()
{
    delete ui;
}
