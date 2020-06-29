#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dodaj_dialog.h"
#include "usun_dialog.h"
#include "edytuj_dialog.h"
#include "szukaj_dialog.h"
#include "dodaj_grupe_dialog.h"
#include "QMessageBox"
#include "oceny_studenta.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , oceny(SystemOceniania(&uczelnia))
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableViewDatabase->setModel(uczelnia.getModel(0));
    ui->tableViewDatabase->show();
    ui->comboBoxTable->addItems({"Studenci","Grupy","Oceny"});
    oceny.AktualizujOceny();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_Dodaj_clicked()
{
    if( (ui->comboBoxTable->currentText()) == "Studenci")
    {
        Dodaj_dialog dialog(&uczelnia);
        dialog.setModal(true);
        dialog.exec();
        uczelnia.refreshTables();

    }
    else if ((ui->comboBoxTable->currentText()) == "Grupy")
    {
        Dodaj_grupe_Dialog dialog(&uczelnia);
        dialog.setModal(true);
        dialog.exec();

    }
    else
       QMessageBox::information(this,tr("Uwaga"),tr("Nie wybrano żadnej opcji"));
    }




void MainWindow::on_btn_Usun_clicked()
{
    Usun_dialog dialog(&uczelnia, selectedEntry, ui->comboBoxTable->currentIndex());
    dialog.setModal(true);
    dialog.exec();
    uczelnia.refreshTables();
}

void MainWindow::on_btn_Edytuj_clicked()
{
    Edytuj_dialog dialog;
    dialog.setModal(true);
    dialog.exec();
}

void MainWindow::on_btn_Szukaj_clicked()
{
    QString szukana;
    Szukaj_dialog dialog(&szukana);
    dialog.setModal(true);
    dialog.exec();
    int znaleziona;
    QSqlTableModel* model = uczelnia.getModel(ui->comboBoxTable->currentIndex());
    for(int i= 0; i < model->columnCount(); i++){
        for(int j = 0; j < model->rowCount(); j++){
            if(ui->tableViewDatabase->model()->index(j,i).data().toString() == szukana){
                znaleziona = j;
            }
        }
    }
    ui->tableViewDatabase->selectRow(znaleziona);
}

void MainWindow::on_tableViewDatabase_clicked(const QModelIndex &index)
{
    selectedEntry = ui->tableViewDatabase->model()->index(index.row(),0).data().toInt();
}

void MainWindow::on_comboBoxTable_currentIndexChanged(int index)
{
    ui->tableViewDatabase->setModel(uczelnia.getModel(index));
    ui->tableViewDatabase->show();
    if(index == 0)
        ui->pushButtonOceny->setDisabled(0);
    else
        ui->pushButtonOceny->setDisabled(1);
}

void MainWindow::on_tableViewDatabase_entered(const QModelIndex &index)
{
    uczelnia.refreshTables();
}

void MainWindow::on_pushButtonOceny_clicked()
{
    Oceny_studenta dialog(&uczelnia, selectedEntry);
    dialog.setModal(true);
    dialog.exec();
}

void MainWindow::on_pushButtonOceny_2_clicked()
{
    oceny.AktualizujOceny();
}
