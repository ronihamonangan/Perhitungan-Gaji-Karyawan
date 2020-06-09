#ifndef GAJI_H
#define GAJI_H

#include <QDialog>

namespace Ui {
class gaji;
}

class gaji : public QDialog
{
    Q_OBJECT

public:
    explicit gaji(QWidget *parent = nullptr);
    ~gaji();

private slots:
    void on_pushButton_clicked();

private:
    Ui::gaji *ui;
    gaji *karyawan;
};

#endif // GAJI_H
