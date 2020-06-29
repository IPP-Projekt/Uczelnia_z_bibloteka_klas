#include "oceny_studenta.h"
#include "ui_oceny_studenta.h"

Oceny_studenta::Oceny_studenta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Oceny_studenta)
{
    ui->setupUi(this);
}

Oceny_studenta::~Oceny_studenta()
{
    delete ui;
}

void Oceny_studenta::on_pushButtonExit_clicked()
{
    this->close();
}
