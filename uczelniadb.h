#ifndef UCZELNIADB_H
#define UCZELNIADB_H

#include "databaselibrary.h"

class UczelniaDB
{
protected:
    DatabaseLibrary m_database;
    int m_modelEntries = 0;
    QSqlTableModel** m_model;
    QString m_tableStudenciColumns[4] {"Id", "Imie", "Nazwisko", "Srednia"};
public:
    UczelniaDB();
    QSqlTableModel* getModel(int index){if (index<m_modelEntries)return m_model[index];else return nullptr;}
};

#endif // UCZELNIADB_H
