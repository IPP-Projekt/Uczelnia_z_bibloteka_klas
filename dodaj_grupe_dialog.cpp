#include "dodaj_grupe_dialog.h"
#include "ui_dodaj_grupe_dialog.h"
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QSqlField>

Dodaj_grupe_Dialog::Dodaj_grupe_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dodaj_grupe_Dialog)
{
    ui->setupUi(this);

}

Dodaj_grupe_Dialog::~Dodaj_grupe_Dialog()
{
    delete ui;
}
