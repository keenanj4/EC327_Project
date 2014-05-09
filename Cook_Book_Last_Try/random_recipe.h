#ifndef RANDOM_RECIPE_H
#define RANDOM_RECIPE_H

#include <QDialog>

namespace Ui {
class Random_Recipe;
}

class Random_Recipe : public QDialog
{
    Q_OBJECT

public:
    explicit Random_Recipe(QWidget *parent = 0);
    ~Random_Recipe();

private:
    Ui::Random_Recipe *ui;
};

#endif // RANDOM_RECIPE_H
