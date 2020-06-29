#include "dodaj_dialog.h"
#include "ui_dodaj_dialog.h"
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QSqlField>

Dodaj_dialog::Dodaj_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dodaj_dialog)
{
    ui->setupUi(this);
}

Dodaj_dialog::~Dodaj_dialog()
{
    delete ui;
}

void Dodaj_dialog::setUczelnia(UczelniaDB* uczelniaPointer)
{
    uczelnia = uczelniaPointer;
}

void Dodaj_dialog::nowyrekord()
{
    QString tekstImie = ui->txtbox_imie->text();
    QString tekstNazwisko = ui->txtbox_nazwisko->text();
    QString tekstSrednia = QString::number(ui->doubleSpinBoxSrednia->value());
    QSqlRecord rekord = uczelnia->getModel(0)->record();
    rekord.setValue("Id",DatabaseLibrary::cGenerateIndex(uczelnia->getModel(0)));
    rekord.setValue("Imie",tekstImie);
    rekord.setValue("Nazwisko",tekstNazwisko);
    rekord.setValue("Srednia",tekstSrednia);
    rekord.setValue("Id_Grupy", 0);
    qDebug() << DatabaseLibrary::cInsertRecord(uczelnia->getModel(0),rekord);
}

void Dodaj_dialog::on_buttonBox_accepted()
{
    nowyrekord();
}
