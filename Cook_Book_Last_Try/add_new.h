#ifndef ADD_NEW_H
#define ADD_NEW_H

#include <QDialog>

namespace Ui {
class Add_New;
}

class Add_New : public QDialog
{
    Q_OBJECT

public:
    explicit Add_New(QWidget *parent = 0);
    ~Add_New();

private slots:
    void on_Save_clicked();

private:
    Ui::Add_New *ui;
};

#endif // ADD_NEW_H
