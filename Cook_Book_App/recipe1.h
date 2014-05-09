#ifndef RECIPE1_H
#define RECIPE1_H

#include <QDialog>

namespace Ui {
class Recipe1;
}

class Recipe1 : public QDialog
{
    Q_OBJECT

public:
    explicit Recipe1(QWidget *parent = 0);
    ~Recipe1();

private slots:
    void on_Home_clicked();

    void on_NextStep_clicked();

private:
    Ui::Recipe1 *ui;
};

#endif // RECIPE1_H
