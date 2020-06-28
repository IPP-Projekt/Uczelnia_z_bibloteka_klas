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
void Dodaj_dialog::setUczelnia(UczelniaDB* uczelniaPointer){
    uczelnia = uczelniaPointer;
}

void Dodaj_dialog::nowyrekord()
{
    QString tekst = ui->txtbox_imie->text();
    QSqlField poleId = QSqlField("5",QVariant::Int);
    QSqlField poleImie = QSqlField(tekst,QVariant::Char);
    QSqlField poleNazwisko = QSqlField("Nazwisko", QVariant::Char);
    QSqlField poleSrednia = QSqlField("3.0", QVariant::Int);
    //QSqlRecord rekord = QSqlRecord();
    //rekord.insert(0,poleId);
    //rekord.insert(1,poleImie);
    //rekord.insert(2,poleNazwisko);
    //rekord.insert(3,poleSrednia);
    QSqlRecord rekord = uczelnia->getModel(0)->record();
    rekord.remove(rekord.indexOf("Id"));
    rekord.setGenerated("Id",true);
    rekord.setValue("Imie",tekst);
    rekord.setValue("Nazwisko","dydrp");
    rekord.setValue("Srednia","3.5");
    qDebug() << DatabaseLibrary::cInsertRecord(uczelnia->getModel(0),rekord);
}



void Dodaj_dialog::on_buttonBox_accepted()
{
    nowyrekord();
}
