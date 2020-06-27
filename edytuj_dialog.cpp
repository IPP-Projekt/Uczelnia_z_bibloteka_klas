#include "edytuj_dialog.h"
#include "ui_edytuj_dialog.h"

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
