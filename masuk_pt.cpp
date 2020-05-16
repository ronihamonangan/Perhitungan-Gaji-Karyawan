#include "masuk_pt.h"
#include "ui_masuk_pt.h"

masuk_pt::masuk_pt(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::masuk_pt)
{
    ui->setupUi(this);
}

masuk_pt::~masuk_pt()
{
    delete ui;
}
