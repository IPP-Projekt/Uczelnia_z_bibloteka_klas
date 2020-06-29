#include "oceny_studenta.h"
#include "ui_oceny_studenta.h"

Oceny_studenta::Oceny_studenta(UczelniaDB* uczelniaPointer, int index, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Oceny_studenta)
{
    QSqlTableModel* modelStudenci = uczelniaPointer->getModel(0);
    QList<QString> list;

    int modelIndx;
    ui->setupUi(this);
    for(int i = 0; i < modelStudenci->rowCount(); i++){
        if(modelStudenci->record(i).value(0) == index){
            modelIndx = i;
            break;
        }
    }
    qDebug() << modelIndx;
    QSqlTableModel* modelOceny = uczelniaPointer->getModel(2);
    for(int i = 0; i < modelOceny->rowCount(); i++){
        if(modelOceny->record(i).value(3) == modelIndx)
            list.append(modelOceny->record(i).value(1).toString() + ": " + modelOceny->record(i).value(2).toString());
    }
    ui->listViewOceny->addItems(list);
}
Oceny_studenta::~Oceny_studenta()
{
    delete ui;
}

void Oceny_studenta::on_pushButtonExit_clicked()
{
    this->close();
}
