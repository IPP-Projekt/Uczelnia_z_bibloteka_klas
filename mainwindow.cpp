#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dodaj_dialog.h"
#include "usun_dialog.h"
#include "edytuj_dialog.h"
#include "szukaj_dialog.h"

 UczelniaDB uczelnia;

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
    dialog.setModal(true);
    dialog.exec();
}

void MainWindow::on_btn_Usun_clicked()
{
    Usun_dialog dialog;
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
    Szukaj_dialog dialog;
    dialog.setModal(true);
    dialog.exec();
}
