#ifndef TST_H
#define TST_H

#include <QDialog>

namespace Ui {
class tst;
}

class tst : public QDialog
{
    Q_OBJECT

public:
    explicit tst(QWidget *parent = 0);
    ~tst();

private:
    Ui::tst *ui;
};

#endif // TST_H
