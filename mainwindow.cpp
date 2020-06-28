#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dodaj_dialog.h"
#include "usun_dialog.h"
#include "edytuj_dialog.h"
#include "szukaj_dialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableViewDatabase->setModel(uczelnia.getModel(0));
    ui->tableViewDatabase->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_Dodaj_clicked()
{
    Dodaj_dialog dialog;
    dialog.setUczelnia(&uczelnia);
    dialog.setModal(true);
    dialog.exec();
}

void MainWindow::on_btn_Usun_clicked()
{
    Usun_dialog dialog(&uczelnia, selectedEntry);
    dialog.setModal(true);
    dialog.exec();
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
    QSqlTableModel* model = uczelnia.getModel(0);
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
