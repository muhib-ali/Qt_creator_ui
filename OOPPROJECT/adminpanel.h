#ifndef ADMINPANEL_H
#define ADMINPANEL_H

#include <QDialog>
//#include<login.h>
namespace Ui {
class adminpanel;
}

class adminpanel : public QDialog
{
    Q_OBJECT

public:
    explicit adminpanel(QWidget *parent = nullptr);
    ~adminpanel();

private slots:
    void on_pushButton_signout_clicked();

    void on_pushButton_addemployee_clicked();

    void on_pushButton_getemployee_clicked();

    void on_pushButton_addmedcine_clicked();

private:
    Ui::adminpanel *ui;
   // Login*l;
};

#endif // ADMINPANEL_H
