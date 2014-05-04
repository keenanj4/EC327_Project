#ifndef HOME_SCREEN_H
#define HOME_SCREEN_H

#include <QMainWindow>

namespace Ui {
class Home_Screen;
}

class Home_Screen : public QMainWindow
{
    Q_OBJECT

public:
    explicit Home_Screen(QWidget *parent = 0);
    ~Home_Screen();

private slots:
    void on_pushGenerate_clicked();

private:
    Ui::Home_Screen *ui;
};

#endif // HOME_SCREEN_H
