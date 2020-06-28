#include "edytuj2_imie_dialog.h"
#include "ui_edytuj2_imie_dialog.h"

edytuj2_imie_Dialog::edytuj2_imie_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edytuj2_imie_Dialog)
{
    ui->setupUi(this);
}

edytuj2_imie_Dialog::~edytuj2_imie_Dialog()
{
    delete ui;
}
