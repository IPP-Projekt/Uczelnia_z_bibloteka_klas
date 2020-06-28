#include "edytuj_dialog.h"
#include "ui_edytuj_dialog.h"
#include "edytuj2_dialog.h"
#include "QMessageBox"
#include "edytuj2_imie_dialog.h"
#include "edytuj2_nazwisko_dialog.h"
#include "edytuj2_srednia_dialog.h"
#include "edytuj2_imienazwisko_dialog.h"
#include "edytuj2_imiesrednia_dialog.h"
#include "edytuj2_srednianazwisko_dialog.h"


Edytuj_dialog::Edytuj_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Edytuj_dialog)
{
    ui->setupUi(this);
}

Edytuj_dialog::~Edytuj_dialog()
{
    delete ui;
}

void Edytuj_dialog::on_buttonBox_accepted()
{
    while(true)
    {
        if(ui->checkbox_imie->isChecked() && ui->checkBox_srednia->isChecked() && ui->checkBox_nazwisko->isChecked())
        {
            edytuj2_Dialog dialog;
            dialog.setModal(true);
            dialog.exec();
            break;
        }

        if(ui->checkbox_imie->isChecked() && ui->checkBox_srednia->isChecked() )
        {
            edytuj2_imieSrednia_Dialog dialog;
            dialog.setModal(true);
            dialog.exec();
            break;
        }

        if(ui->checkbox_imie->isChecked() && ui->checkBox_nazwisko->isChecked())
        {
            edytuj2_imieNazwisko_Dialog dialog;
            dialog.setModal(true);
            dialog.exec();
            break;
        }

        if(ui->checkBox_srednia->isChecked() && ui->checkBox_nazwisko->isChecked())
        {
            edytuj2_sredniaNazwisko_Dialog dialog;
            dialog.setModal(true);
            dialog.exec();
            break;
        }

        if(ui->checkbox_imie->isChecked())
        {
            edytuj2_imie_Dialog dialog;
            dialog.setModal(true);
            dialog.exec();
            break;
        }

        if(ui->checkBox_nazwisko->isChecked())
        {
            edytuj2_nazwisko_Dialog dialog;
            dialog.setModal(true);
            dialog.exec();
            break;
        }

        if(ui->checkBox_srednia->isChecked())
        {
            edytuj2_srednia_Dialog dialog;
            dialog.setModal(true);
            dialog.exec();
            break;
        }

        else if(!(ui->checkbox_imie->isChecked() || ui->checkBox_srednia->isChecked() || ui->checkBox_nazwisko->isChecked()))
        {
            QMessageBox::information(this,tr("Uwaga"),tr("Nie wybrano żadnej opcji"));
            break;
        }

    }


}
