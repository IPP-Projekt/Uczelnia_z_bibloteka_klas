#include "szukaj_dialog.h"
#include "ui_szukaj_dialog.h"

Szukaj_dialog::Szukaj_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Szukaj_dialog)
{
    ui->setupUi(this);
}

Szukaj_dialog::~Szukaj_dialog()
{
    delete ui;
}
