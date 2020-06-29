#include "edytuj_dialog.h"
#include "ui_edytuj_dialog.h"
#include "QMessageBox"



Edytuj_dialog::Edytuj_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Edytuj_dialog)
{
    ui->setupUi(this);
}

Edytuj_dialog::~Edytuj_dialog()
{
    delete ui;
}

void Edytuj_dialog::on_buttonBox_accepted()
{
    QMessageBox::information(this,tr("Uwaga"),tr("Funkcja w trakcie wdrażania"));
}
