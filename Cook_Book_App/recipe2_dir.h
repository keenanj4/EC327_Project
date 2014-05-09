#ifndef RECIPE2_DIR
#define RECIPE2_DIR

#include <QDialog>

namespace Ui {
class recipe2_dir;
}

class recipe2_dir : public QDialog
{
    Q_OBJECT

public:
    explicit recipe2_dir(QWidget *parent = 0);
    ~recipe2_dir();

private:
    Ui::recipe2_dir *ui;
};

#endif // DEFAULT_NEW_RECIPE_H
