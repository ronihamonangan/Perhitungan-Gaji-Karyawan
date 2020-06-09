#ifndef MASUK_PT_H
#define MASUK_PT_H

#include <QMainWindow>
#include "tentang_aplikasi.h"
#include "gaji.h"

namespace Ui {
class masuk_pt;
}

class masuk_pt : public QMainWindow
{
    Q_OBJECT

public:
    explicit masuk_pt(QWidget *parent = nullptr);
    ~masuk_pt();

private slots:
    void on_pushButton_clicked();

    void on_actionTentang_Aplikasi_triggered();

    void on_actionKeluar_triggered();

private:
    Ui::masuk_pt *ui;
    masuk_pt *login;
    Tentang_Aplikasi *Kelompok1;
    gaji *karyawan;
};

#endif // MASUK_PT_H
