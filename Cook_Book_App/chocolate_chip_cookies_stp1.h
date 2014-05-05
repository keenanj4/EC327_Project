#ifndef CHOCOLATE_CHIP_COOKIES_STP1_H
#define CHOCOLATE_CHIP_COOKIES_STP1_H

#include <QDialog>

namespace Ui {
class Chocolate_Chip_Cookies_stp1;
}

class Chocolate_Chip_Cookies_stp1 : public QDialog
{
    Q_OBJECT

public:
    explicit Chocolate_Chip_Cookies_stp1(QWidget *parent = 0);
    ~Chocolate_Chip_Cookies_stp1();

private:
    Ui::Chocolate_Chip_Cookies_stp1 *ui;
};

#endif // CHOCOLATE_CHIP_COOKIES_STP1_H
