#ifndef GETEMPLOYEE_H
#define GETEMPLOYEE_H

#include <QDialog>

namespace Ui {
class getemployee;
}

class getemployee : public QDialog
{
    Q_OBJECT

public:
    explicit getemployee(QWidget *parent = nullptr);
    ~getemployee();

private:
    Ui::getemployee *ui;
};

#endif // GETEMPLOYEE_H
