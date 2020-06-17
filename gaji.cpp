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
    QString gajipokok = ui->lineEdit_5->text();
    QString tunjangan = ui->lineEdit_6->text();
  //QString jabatan = ui->lineEdit_3->text();
    QString jabatan = ui->comboBox->currentText();
  //QString status = ui->lineEdit_4->text();
    QString status = ui->comboBox_2->currentText();
    QString gajikotor = ui->lineEdit_7->text();

    ui->lineEdit_2->setText(ui->lineEdit->text());
    ui->lineEdit_3->setText(ui->comboBox->itemText(ui->comboBox->currentIndex()));
    ui->lineEdit_4->setText(ui->comboBox_2->itemText(ui->comboBox_2->currentIndex()));

}
