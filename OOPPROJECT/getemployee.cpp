#include "getemployee.h"
#include "ui_getemployee.h"

getemployee::getemployee(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::getemployee)
{
    ui->setupUi(this);
}

getemployee::~getemployee()
{
    delete ui;
}
