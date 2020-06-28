#include "usun_dialog.h"
#include "ui_usun_dialog.h"

Usun_dialog::Usun_dialog(UczelniaDB* i_uczelnia, int i_selEntry, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Usun_dialog)
{
    uczelnia = i_uczelnia;
    selectedEntry = i_selEntry;
    ui->setupUi(this);
    rowInModel = findRow();
    QString entry = "";
    QSqlRecord record = uczelnia->getModel(0)->record(rowInModel);
    for(int i = 0; i < uczelnia->getModel(0)->columnCount(); i++){
        entry += (record.fieldName(i) + ":  ");
        entry += (record.value(i).toString() + "    ");
    }
    ui->labelEntry->setText(entry);
}

Usun_dialog::~Usun_dialog()
{
    delete ui;
}

int Usun_dialog::findRow()
{
    QSqlTableModel* model = uczelnia->getModel(0);
    for(int i = 0; i < model->rowCount(); i++){
        if(model->record(i).value(0) == selectedEntry){
            return i;
        }
    }
    return -1;
}

void Usun_dialog::on_buttonBox_accepted()
{
uczelnia->getModel(0)->removeRows(rowInModel,1);
}
