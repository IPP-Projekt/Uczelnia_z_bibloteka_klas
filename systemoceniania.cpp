#include "systemoceniania.h"

void SystemOceniania::AktualizujOceny()
{
    QSqlTableModel* studenci = uczelnia->getModel(0);
    QSqlTableModel* oceny = uczelnia->getModel(2);
    for(int i = 0; i < studenci->rowCount(); i++){
        double srednia = 0.0;
        int liczbaOcen = 0;
        for(int j = 0; j < oceny->rowCount(); j++){
            if(oceny->record(j).value(3)==studenci->record(i).value(0)){
                srednia += oceny->record(j).value(2).toDouble();
                liczbaOcen++;
            }
        }
        QSqlRecord record  = studenci->record(i);
        if(liczbaOcen > 0){
            srednia = srednia/(double)liczbaOcen;
            record.setValue(3, QString::number(srednia));
        }
        else{
            record.setValue(3, "");
        }
        DatabaseLibrary::cChangeRecord(studenci,record,i);
    }
}
