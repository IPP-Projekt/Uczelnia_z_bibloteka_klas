#include "dodaj_dialog.h"
#include "ui_dodaj_dialog.h"

Dodaj_dialog::Dodaj_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dodaj_dialog)
{
    ui->setupUi(this);
}

Dodaj_dialog::~Dodaj_dialog()
{
    delete ui;
}
