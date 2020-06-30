#include "dodaj_ocene_dialog.h"
#include "ui_dodaj_ocene_dialog.h"

Dodaj_ocene_dialog::Dodaj_ocene_dialog(UczelniaDB* uczelniaPointer, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dodaj_ocene_dialog)
{
    ui->setupUi(this);
    uczelnia = uczelniaPointer;
    QList<QString> listaGrup;
    QSqlTableModel* model = uczelnia->getModel(1);
    for(int i = 0; i < model->rowCount(); i++){
        listaGrup.append(model->record(i).value(1).toString());
    }
    listaGrup.append("bez grupy");
    ui->comboBoxGrupa->addItems(listaGrup);
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
    rekord.setValue("Student",indexList.value(ui->comboBox->currentIndex()));
    DatabaseLibrary::cInsertRecord(uczelnia->getModel(2),rekord);
}

void Dodaj_ocene_dialog::on_comboBoxGrupa_currentIndexChanged(int index)
{
    ui->comboBox->clear();
    indexList.clear();
    QList<QString> listaStudentow;
    QSqlTableModel* model = uczelnia->getModel(0);
    if (index < uczelnia->getModel(1)->rowCount()){
        for(int i = 0; i < model->rowCount(); i++){
            if(uczelnia->getModel(1)->record(index).value(0) == model->record(i).value(4)){
                listaStudentow.append(model->record(i).value(1).toString() + " " + model->record(i).value(2).toString());
                indexList.append(model->record(i).value(0).toString());
            }
        }
    }
    else
        for(int i = 0; i < model->rowCount(); i++){
            if(model->record(i).value(4).toString() == ""){
                listaStudentow.append(model->record(i).value(1).toString() + " " + model->record(i).value(2).toString());
                indexList.append(model->record(i).value(0).toString());
            }
        }
    ui->comboBox->addItems(listaStudentow);
}
