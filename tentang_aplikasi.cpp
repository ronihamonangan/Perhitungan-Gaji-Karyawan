#include "tentang_aplikasi.h"
#include "ui_tentang_aplikasi.h"

Tentang_Aplikasi::Tentang_Aplikasi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tentang_Aplikasi)
{
    ui->setupUi(this);
}

Tentang_Aplikasi::~Tentang_Aplikasi()
{
    delete ui;
}

void Tentang_Aplikasi::on_pushButton_clicked()
{

}
