#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("D:/Campoes/SEM.2/Struktur Data/Kali aja bisa/Untitled-1.png");
    int w = ui -> label_2->width();
    int h = ui -> label_2->height();
    ui->label_2->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionTentang_Aplikasi_triggered()
{
    Kelompok1 = new Tentang_Aplikasi(this);
    Kelompok1 -> show();
}

void MainWindow::on_actionKeluar_triggered()
{
    QApplication::quit();
}

void MainWindow::on_pushButton_clicked()
{
    ui->label->setText("Selamat Datang di PT. Indah Makmur,. Tbk");
    ui->pushButton->setText("Login");

    login = new masuk_pt(this);
    login -> show();
}
