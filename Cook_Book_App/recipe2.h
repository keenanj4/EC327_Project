#ifndef RECIPE2_H
#define RECIPE2_H

#include <QDialog>

namespace Ui {
class Recipe2;
}

class Recipe2 : public QDialog
{
    Q_OBJECT

public:
    explicit Recipe2(QWidget *parent = 0);
    ~Recipe2();

private slots:
    void on_pushButton_clicked();

    void on_Directions_clicked();

private:
    Ui::Recipe2 *ui;
};

#endif // DEFAULT_NEW_RECIPE_H
