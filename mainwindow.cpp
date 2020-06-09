#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
