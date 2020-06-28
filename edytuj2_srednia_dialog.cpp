#include "edytuj2_srednia_dialog.h"
#include "ui_edytuj2_srednia_dialog.h"

edytuj2_srednia_Dialog::edytuj2_srednia_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edytuj2_srednia_Dialog)
{
    ui->setupUi(this);
}

edytuj2_srednia_Dialog::~edytuj2_srednia_Dialog()
{
    delete ui;
}
