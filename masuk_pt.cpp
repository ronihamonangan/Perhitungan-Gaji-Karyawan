#include "masuk_pt.h"
#include "ui_masuk_pt.h"
#include <QString>
#include <QMessageBox>

masuk_pt::masuk_pt(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::masuk_pt)
{
    ui->setupUi(this);
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
