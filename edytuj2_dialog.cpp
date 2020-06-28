#include "edytuj2_dialog.h"
#include "ui_edytuj2_dialog.h"

using namespace std;

edytuj2_Dialog::edytuj2_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edytuj2_Dialog)
{
    ui->setupUi(this);
}

edytuj2_Dialog::~edytuj2_Dialog()
{
    delete ui;
}

QString edytuj2_Dialog::edycjarekordow()
{
    string rekordy;
}
