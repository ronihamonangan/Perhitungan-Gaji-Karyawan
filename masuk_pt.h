#ifndef MASUK_PT_H
#define MASUK_PT_H

#include <QMainWindow>

namespace Ui {
class masuk_pt;
}

class masuk_pt : public QMainWindow
{
    Q_OBJECT

public:
    explicit masuk_pt(QWidget *parent = nullptr);
    ~masuk_pt();

private:
    Ui::masuk_pt *ui;
};

#endif // MASUK_PT_H
