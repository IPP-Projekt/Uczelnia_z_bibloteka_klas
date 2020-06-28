#include "edytuj2_nazwisko_dialog.h"
#include "ui_edytuj2_nazwisko_dialog.h"

edytuj2_nazwisko_Dialog::edytuj2_nazwisko_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edytuj2_nazwisko_Dialog)
{
    ui->setupUi(this);
}

edytuj2_nazwisko_Dialog::~edytuj2_nazwisko_Dialog()
{
    delete ui;
}
