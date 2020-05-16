#ifndef TENTANG_APLIKASI_H
#define TENTANG_APLIKASI_H

#include <QDialog>

namespace Ui {
class Tentang_Aplikasi;
}

class Tentang_Aplikasi : public QDialog
{
    Q_OBJECT

public:
    explicit Tentang_Aplikasi(QWidget *parent = nullptr);
    ~Tentang_Aplikasi();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Tentang_Aplikasi *ui;
};

#endif // TENTANG_APLIKASI_H
