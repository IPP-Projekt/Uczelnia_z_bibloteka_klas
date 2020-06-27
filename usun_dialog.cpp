#include "usun_dialog.h"
#include "ui_usun_dialog.h"

Usun_dialog::Usun_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Usun_dialog)
{
    ui->setupUi(this);
}

Usun_dialog::~Usun_dialog()
{
    delete ui;
}
