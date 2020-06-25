#include "masuk_pt.h"
#include "ui_masuk_pt.h"
#include <QString>
#include <QMessageBox>
#include <QPixmap>

masuk_pt::masuk_pt(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::masuk_pt)
{
    ui->setupUi(this);
    QPixmap pix("D:/Campoes/SEM.2/Struktur Data/Kali aja bisa/Untitled-1.png");
    int w = ui -> label->width();
    int h = ui -> label->height();
    ui->label->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

    QPixmap pic("D:/Campoes/SEM.2/Struktur Data/Project Aplikasi Sederhana/pc.png");
    int p = ui -> label_2 -> width();
    int t = ui -> label_2 -> height();
    ui->label_2->setPixmap(pic.scaled(p,t,Qt::KeepAspectRatio));
}

masuk_pt::~masuk_pt()
{
    delete ui;
}

void masuk_pt::on_pushButton_clicked()
{
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();

    if(username == "Indah Makmur,. Tbk" && password == "tobenice123"){
        hide();
        karyawan = new gaji(this);
        karyawan -> show();
    }else {
        QMessageBox:: warning(this, "Keterangan", "Username atau Password anda salah");
    }
}

void masuk_pt::on_actionTentang_Aplikasi_triggered()
{
    Kelompok1 = new Tentang_Aplikasi(this);
    Kelompok1 -> show();
}

void masuk_pt::on_actionKeluar_triggered()
{
    QApplication::quit();
}
