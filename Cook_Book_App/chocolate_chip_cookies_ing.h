#ifndef CHOCOLATE_CHIP_COOKIES_H
#define CHOCOLATE_CHIP_COOKIES_H
#include <QDialog>

namespace Ui {
class Chocolate_Chip_Cookies;
}

class Chocolate_Chip_Cookies : public QDialog
{
    Q_OBJECT

public:
    explicit Chocolate_Chip_Cookies(QWidget *parent = 0);
    ~Chocolate_Chip_Cookies();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Chocolate_Chip_Cookies *ui;
};

#endif // CHOCOLATE_CHIP_COOKIES_H
