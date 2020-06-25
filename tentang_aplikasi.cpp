#include "tentang_aplikasi.h"
#include "ui_tentang_aplikasi.h"

Tentang_Aplikasi::Tentang_Aplikasi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tentang_Aplikasi)
{
    ui->setupUi(this);
    QPixmap pix("D:/Campoes/SEM.2/Struktur Data/Project Aplikasi Sederhana/2020-02-17 11.47.14 1.png");
    int w = ui -> label_10->width();
    int h = ui -> label_10->height();
    ui->label_10->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

    QPixmap pic("D:/Campoes/SEM.2/Struktur Data/Project Aplikasi Sederhana/123.png");
    int p = ui -> label_11 -> width();
    int t = ui -> label_11 -> height();
    ui->label_11->setPixmap(pic.scaled(p,t,Qt::KeepAspectRatio));

    QPixmap pit("D:/Campoes/SEM.2/Struktur Data/Project Aplikasi Sederhana/WhatsApp Image 2020-03-19 at 21.00.16.png");
    int x = ui -> label_12 -> width();
    int y = ui -> label_12 -> height();
    ui->label_12->setPixmap(pit.scaled(x,y,Qt::KeepAspectRatio));
}

Tentang_Aplikasi::~Tentang_Aplikasi()
{
    delete ui;
}

void Tentang_Aplikasi::on_pushButton_clicked()
{

}
