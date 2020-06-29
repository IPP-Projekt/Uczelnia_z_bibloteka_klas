#include "dodaj_dialog.h"
#include "ui_dodaj_dialog.h"
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QSqlField>

Dodaj_dialog::Dodaj_dialog( UczelniaDB* uczelniaPointer, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dodaj_dialog)
{
    setUczelnia(uczelniaPointer);
    ui->setupUi(this);
    QList<QString> listaGrup;
    QSqlTableModel* model = uczelnia->getModel(1);
    for(int i = 0; i < model->rowCount(); i++){
        listaGrup.append(model->record(i).value(1).toString());
    }
    ui->comboBox->addItems(listaGrup);
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
    if(grupa == true)
        rekord.setValue("Id_Grupy", "");
    else
        rekord.setValue("Id_Grupy", idGrupy);
    qDebug() << DatabaseLibrary::cInsertRecord(uczelnia->getModel(0),rekord);
}

void Dodaj_dialog::on_buttonBox_accepted()
{
    nowyrekord();
}

void Dodaj_dialog::on_checkBoxGrupa_clicked(bool checked)
{
    grupa = checked;
    ui->comboBox->setDisabled(checked);
    if(checked)
        ui->labelGrupa->clear();
    else
        on_comboBox_currentIndexChanged(ui->comboBox->currentIndex());
}

void Dodaj_dialog::on_comboBox_currentIndexChanged(int index)
{
    idGrupy = index;
    QString entry = "";
    QSqlRecord record = uczelnia->getModel(1)->record(index);
    for(int i = 0; i < uczelnia->getModel(1)->columnCount(); i++){
        entry += (record.fieldName(i) + ":  ");
        entry += (record.value(i).toString() + "    ");
    }
    ui->labelGrupa->setText(entry);
}

