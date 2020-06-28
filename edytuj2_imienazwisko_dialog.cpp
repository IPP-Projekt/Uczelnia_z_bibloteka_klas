#include "edytuj2_imienazwisko_dialog.h"
#include "ui_edytuj2_imienazwisko_dialog.h"

edytuj2_imieNazwisko_Dialog::edytuj2_imieNazwisko_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edytuj2_imieNazwisko_Dialog)
{
    ui->setupUi(this);
}

edytuj2_imieNazwisko_Dialog::~edytuj2_imieNazwisko_Dialog()
{
    delete ui;
}
