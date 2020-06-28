#include "edytuj2_srednianazwisko_dialog.h"
#include "ui_edytuj2_srednianazwisko_dialog.h"

edytuj2_sredniaNazwisko_Dialog::edytuj2_sredniaNazwisko_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edytuj2_sredniaNazwisko_Dialog)
{
    ui->setupUi(this);
}

edytuj2_sredniaNazwisko_Dialog::~edytuj2_sredniaNazwisko_Dialog()
{
    delete ui;
}
