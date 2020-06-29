#include "dodaj_grupe_dialog.h"
#include "ui_dodaj_grupe_dialog.h"
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QSqlField>

Dodaj_grupe_Dialog::Dodaj_grupe_Dialog(UczelniaDB* uczelniaPointer, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dodaj_grupe_Dialog)
{
    setUczelnia(uczelniaPointer);
    ui->setupUi(this);
}

Dodaj_grupe_Dialog::~Dodaj_grupe_Dialog()
{
    delete ui;
}

void Dodaj_grupe_Dialog::nowyrekord()
{
    QString tekstNazwa = ui->txtbox_Nazwa->text();
    QString tekstKierunek = ui->txtbox_Kierunek->text();
    QSqlRecord rekord = uczelnia->getModel(1)->record();
    rekord.setValue("Id",DatabaseLibrary::cGenerateIndex(uczelnia->getModel(1)));
    rekord.setValue("Nazwa",tekstNazwa);
    rekord.setValue("Kierunek",tekstKierunek);
    qDebug() << DatabaseLibrary::cInsertRecord(uczelnia->getModel(1),rekord);
}

void Dodaj_grupe_Dialog::on_buttonBox_accepted()
{
    nowyrekord();
}
