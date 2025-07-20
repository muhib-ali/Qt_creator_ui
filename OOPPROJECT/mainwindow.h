#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QFile>
#include<QDir>
#include<QDebug>
#include<QString>
#include<QTextStream>
#include<login.h>
#include<adminpanel.h>
#include<addemployee.h>
#include<getemployee.h>
#include<addmedicine.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_close_clicked();

    void on_pushButton_adminpanel_clicked();

    void on_pushButton_shop_clicked();

    void on_pushButton_history_clicked();

private:
    Ui::MainWindow *ui;
    Login *l;
    adminpanel*a;
    addemployee *addemp;
    getemployee*getemp;
    addmedicine*addmed;
};
#endif // MAINWINDOW_H
