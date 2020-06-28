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
    uczelnia.getModel(0)->removeRows(selectedEntry,1);
    //Usun_dialog dialog;
    //dialog.setModal(true);
    //dialog.exec();
}

void MainWindow::on_btn_Edytuj_clicked()
{
    Edytuj_dialog dialog;
    dialog.setModal(true);
    dialog.exec();
}

void MainWindow::on_btn_Szukaj_clicked()
{
    Szukaj_dialog dialog;
    dialog.setModal(true);
    dialog.exec();
}

void MainWindow::on_tableViewDatabase_clicked(const QModelIndex &index)
{
    selectedEntry = ui->tableViewDatabase->model()->index(index.row(),0).data().toInt();
}
