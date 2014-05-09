#ifndef DEFAULT_NEW_RECIPE_H
#define DEFAULT_NEW_RECIPE_H

#include <QDialog>

namespace Ui {
class Default_New_Recipe;
}

class Default_New_Recipe : public QDialog
{
    Q_OBJECT

public:
    explicit Default_New_Recipe(QWidget *parent = 0);
    ~Default_New_Recipe();

private:
    Ui::Default_New_Recipe *ui;
};

#endif // DEFAULT_NEW_RECIPE_H
