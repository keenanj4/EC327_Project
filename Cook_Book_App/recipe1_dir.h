#ifndef RECIPE1_DIR_H
#define RECIPE1_DIR_H

#include <QDialog>

namespace Ui {
class recipe1_dir;
}

class recipe1_dir : public QDialog
{
    Q_OBJECT

public:
    explicit recipe1_dir(QWidget *parent = 0);
    ~recipe1_dir();

private:
    Ui::recipe1_dir *ui;
};

#endif // RECIPE1_DIR_H
