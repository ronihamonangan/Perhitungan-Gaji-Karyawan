#include "gaji.h"
#include "ui_gaji.h"

gaji::gaji(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gaji)
{
    ui->setupUi(this);
}

gaji::~gaji()
{
    delete ui;
}

void gaji::on_pushButton_clicked()
{

}
