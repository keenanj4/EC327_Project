#include "add_new.h"
#include "ui_add_new.h"

#include <QString>
#include <QFile>
#include <QTextStream>
#include <QtCore>

Add_New::Add_New(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_New)
{
    ui->setupUi(this);

    ui->Cancel->setText("Cancel");
    ui->Save->setText("Save");
}

Add_New::~Add_New()
{
    delete ui;
}

void Add_New::on_Save_clicked()
{
    QString text = ui->Input->toPlainText();
    QFile myFile(":/recipes/Recipe17.txt");
    if (myFile.open(QIODevice::ReadWrite))
    {
        QTextStream in (&myFile);
        in << text << endl;
    }
    myFile.close();
    ui->Cancel->clicked(true);
}
