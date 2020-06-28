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

QString Dodaj_dialog::nowyrekord()
{
    QString tekst = ui->txtbox_imie->text();
    QSqlField pole = QSqlField(tekst,QVariant::Char);
    QSqlRecord rekord = QSqlRecord();
    rekord.insert(2,pole);
    const QSqlRecord rekordstaly;

    QSqlTableModel::insertRecord(3,rekordstaly);


}


