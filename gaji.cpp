#include "gaji.h"
#include "ui_gaji.h"
#include <QString>

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
    ui->lineEdit_nama->setText(ui->lineEdit->text());
    QString gajipokok = ui->lineEdit_5->text();
    QString tunjangan = ui->lineEdit_6->text();
  //QString jabatan = ui->lineEdit_3->text();
    QString jabatan = ui->comboBox->currentText();
  //QString status = ui->lineEdit_4->text();
    QString status = ui->comboBox_2->currentText();
    QString gajikotor = ui->lineEdit_7->text();
    QString pokokgajikaryawan = ui->lineEdit_8->text();

    if (jabatan == "Manajer" && status == "Menikah"){
    ui->lineEdit_2->setText(ui->lineEdit->text());
    ui->lineEdit_3->setText(ui->comboBox->itemText(ui->comboBox->currentIndex()));
    ui->lineEdit_4->setText(ui->comboBox_2->itemText(ui->comboBox_2->currentIndex()));
    ui->lineEdit_5->setText(QString :: number(7000000));
    ui->lineEdit_6->setText(QString :: number(4000000));
    ui->lineEdit_7->setText(QString :: number(3000000));
    ui->lineEdit_8->setText(QString :: number(700000));

    int gajiditerima = 7000000 + 4000000 + 3000000 - 700000;
    ui->lineEdit_9->setText(QString :: number(gajiditerima));
    } else if (jabatan == "Kepala Divisi" && status == "Menikah") {
        ui->lineEdit_2->setText(ui->lineEdit->text());
        ui->lineEdit_3->setText(ui->comboBox->itemText(ui->comboBox->currentIndex()));
        ui->lineEdit_4->setText(ui->comboBox_2->itemText(ui->comboBox_2->currentIndex()));
        ui->lineEdit_5->setText(QString :: number(6000000));
        ui->lineEdit_6->setText(QString :: number(3500000));
        ui->lineEdit_7->setText(QString :: number(2500000));
        ui->lineEdit_8->setText(QString :: number(600000));

        int gajiditerima = 6000000 + 3500000 + 2500000 - 600000;
        ui->lineEdit_9->setText(QString :: number(gajiditerima));
    } else if (jabatan == "Karyawan Tetap" && status == "Menikah") {
        ui->lineEdit_2->setText(ui->lineEdit->text());
        ui->lineEdit_3->setText(ui->comboBox->itemText(ui->comboBox->currentIndex()));
        ui->lineEdit_4->setText(ui->comboBox_2->itemText(ui->comboBox_2->currentIndex()));
        ui->lineEdit_5->setText(QString :: number(4000000));
        ui->lineEdit_6->setText(QString :: number(3000000));
        ui->lineEdit_7->setText(QString :: number(2000000));
        ui->lineEdit_8->setText(QString :: number(450000));

        int gajiditerima = 4000000 + 3000000 + 2000000 - 450000;
        ui->lineEdit_9->setText(QString :: number(gajiditerima));
    } else if (jabatan == "Karyawan Kontrak" && status == "Menikah") {
        ui->lineEdit_2->setText(ui->lineEdit->text());
        ui->lineEdit_3->setText(ui->comboBox->itemText(ui->comboBox->currentIndex()));
        ui->lineEdit_4->setText(ui->comboBox_2->itemText(ui->comboBox_2->currentIndex()));
        ui->lineEdit_5->setText(QString :: number(3000000));
        ui->lineEdit_6->setText(QString :: number(2000000));
        ui->lineEdit_7->setText(QString :: number(1500000));
        ui->lineEdit_8->setText(QString :: number(325000));

        int gajiditerima = 3000000 + 2000000 + 1500000 - 325000;
        ui->lineEdit_9->setText(QString :: number(gajiditerima));
    } else if (jabatan == "Manajer" && status == "Belum Menikah"){
        ui->lineEdit_2->setText(ui->lineEdit->text());
        ui->lineEdit_3->setText(ui->comboBox->itemText(ui->comboBox->currentIndex()));
        ui->lineEdit_4->setText(ui->comboBox_2->itemText(ui->comboBox_2->currentIndex()));
        ui->lineEdit_5->setText(QString :: number(7000000));
        ui->lineEdit_6->setText(QString :: number(2000000));
        ui->lineEdit_7->setText(QString :: number(3000000));
        ui->lineEdit_8->setText(QString :: number(600000));

        int gajiditerima = 7000000 + 2000000 + 3000000 - 600000;
        ui->lineEdit_9->setText(QString :: number(gajiditerima));
        } else if (jabatan == "Kepala Divisi" && status == "Belum Menikah") {
            ui->lineEdit_2->setText(ui->lineEdit->text());
            ui->lineEdit_3->setText(ui->comboBox->itemText(ui->comboBox->currentIndex()));
            ui->lineEdit_4->setText(ui->comboBox_2->itemText(ui->comboBox_2->currentIndex()));
            ui->lineEdit_5->setText(QString :: number(6000000));
            ui->lineEdit_6->setText(QString :: number(1500000));
            ui->lineEdit_7->setText(QString :: number(2500000));
            ui->lineEdit_8->setText(QString :: number(500000));
            int gajiditerima = 6000000 + 1500000 + 2500000 - 500000;
            ui->lineEdit_9->setText(QString :: number(gajiditerima));
        } else if (jabatan == "Karyawan Tetap" && status == "Belum Menikah") {
            ui->lineEdit_2->setText(ui->lineEdit->text());
            ui->lineEdit_3->setText(ui->comboBox->itemText(ui->comboBox->currentIndex()));
            ui->lineEdit_4->setText(ui->comboBox_2->itemText(ui->comboBox_2->currentIndex()));
            ui->lineEdit_5->setText(QString :: number(4000000));
            ui->lineEdit_6->setText(QString :: number(1000000));
            ui->lineEdit_7->setText(QString :: number(2000000));
            ui->lineEdit_8->setText(QString :: number(350000));
            int gajiditerima = 4000000 + 1000000 + 2000000 - 350000;
            ui->lineEdit_9->setText(QString :: number(gajiditerima));
        } else if (jabatan == "Karyawan Kontrak" && status == "Belum Menikah") {
            ui->lineEdit_2->setText(ui->lineEdit->text());
            ui->lineEdit_3->setText(ui->comboBox->itemText(ui->comboBox->currentIndex()));
            ui->lineEdit_4->setText(ui->comboBox_2->itemText(ui->comboBox_2->currentIndex()));
            ui->lineEdit_5->setText(QString :: number(3000000));
            ui->lineEdit_6->setText(QString :: number(500000));
            ui->lineEdit_7->setText(QString :: number(1500000));
            ui->lineEdit_8->setText(QString :: number(250000));

            int gajiditerima = 3000000 + 500000 + 1500000 - 250000;
            ui->lineEdit_9->setText(QString :: number(gajiditerima));
    }

}
