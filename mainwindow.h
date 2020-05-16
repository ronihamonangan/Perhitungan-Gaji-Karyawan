#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "tentang_aplikasi.h"
#include "masuk_pt.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionTentang_Aplikasi_triggered();

    void on_actionKeluar_triggered();

    void on_pushButton_clicked();

    void on_label_linkActivated(const QString &link);

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;

    Tentang_Aplikasi *Kelompok1;
    masuk_pt *login;
};
#endif // MAINWINDOW_H
