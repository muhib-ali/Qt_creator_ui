#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include<adminpanel.h>
namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_pushButton_login_clicked();

    void on_pushButton_back1_clicked();

private:
    Ui::Login *ui;
    adminpanel*a;
};

#endif // LOGIN_H
