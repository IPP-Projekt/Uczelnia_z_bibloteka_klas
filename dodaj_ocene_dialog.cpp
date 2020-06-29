#include "dodaj_ocene_dialog.h"
#include "ui_dodaj_ocene_dialog.h"

Dodaj_ocene_dialog::Dodaj_ocene_dialog(UczelniaDB* uczelniaPointer, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dodaj_ocene_dialog)
{
    ui->setupUi(this);
    uczelnia = uczelniaPointer;
    QList<QString> listaStudentow;
    QSqlTableModel* model = uczelnia->getModel(0);
    for(int i = 0; i < model->rowCount(); i++){
        listaStudentow.append(model->record(i).value(1).toString() + " " + model->record(i).value(2).toString() + " Grupa: " + model->record(i).value(4).toString());
    }
    ui->comboBox->addItems(listaStudentow);
}

Dodaj_ocene_dialog::~Dodaj_ocene_dialog()
{
    delete ui;
}

void Dodaj_ocene_dialog::on_buttonBox_accepted()
{
    QSqlRecord rekord = uczelnia->getModel(2)->record();
    rekord.setValue("ID",DatabaseLibrary::cGenerateIndex(uczelnia->getModel(2)));
    rekord.setValue("Przedmiot",ui->lineEditPrzedmiot->text());
    rekord.setValue("Ocena",ui->doubleSpinBoxOcena->value());
    rekord.setValue("Student",ui->comboBox->currentIndex());
    DatabaseLibrary::cInsertRecord(uczelnia->getModel(2),rekord);
}
