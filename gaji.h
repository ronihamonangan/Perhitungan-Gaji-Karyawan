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

    void on_karyawan_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::gaji *ui;
    gaji *karyawan;
};

#endif // GAJI_H
