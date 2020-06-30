#ifndef UCZELNIADB_H
#define UCZELNIADB_H

#include "databaselibrary.h"
#include "konfiguracja.h"

class UczelniaDB
{
protected:
    DatabaseLibrary m_database;
    int m_modelEntries = 0;
    QSqlTableModel** m_model;
    QString m_tableStudenciColumns[5] {"Id", "Imie", "Nazwisko", "Srednia", "Id_Grupy"};
public:
    UczelniaDB();
    QSqlTableModel* getModel(int index){if (index<m_modelEntries)return m_model[index];else return nullptr;}
    void refreshTables();
};

#endif // UCZELNIADB_H
