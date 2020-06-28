#include "edytuj2_imiesrednia_dialog.h"
#include "ui_edytuj2_imiesrednia_dialog.h"

edytuj2_imieSrednia_Dialog::edytuj2_imieSrednia_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edytuj2_imieSrednia_Dialog)
{
    ui->setupUi(this);
}

edytuj2_imieSrednia_Dialog::~edytuj2_imieSrednia_Dialog()
{
    delete ui;
}
