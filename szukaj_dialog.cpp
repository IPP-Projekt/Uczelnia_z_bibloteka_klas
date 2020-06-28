#include "szukaj_dialog.h"
#include "ui_szukaj_dialog.h"

Szukaj_dialog::Szukaj_dialog(QString* i_szukana, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Szukaj_dialog)
{
    ui->setupUi(this);
    szukana = i_szukana;
}

Szukaj_dialog::~Szukaj_dialog()
{
    delete ui;
}

void Szukaj_dialog::on_buttonBox_accepted()
{
    QString txt = ui->txtbox_szukaj->text();
    if(txt != "" && txt != " ")
        szukana->append(txt);
}
