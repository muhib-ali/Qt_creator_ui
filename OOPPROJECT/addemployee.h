#ifndef ADDEMPLOYEE_H
#define ADDEMPLOYEE_H

#include <QDialog>

namespace Ui {
class addemployee;
}

class addemployee : public QDialog
{
    Q_OBJECT

public:
    explicit addemployee(QWidget *parent = nullptr);
    ~addemployee();

private:
    Ui::addemployee *ui;
};

#endif // ADDEMPLOYEE_H
