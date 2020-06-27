#ifndef DATABASELIBRARY_H
#define DATABASELIBRARY_H

#include"QVector"
#include "QtSql/QSql"
#include "QtSql/QSqlDatabase"
#include "QtSql/QSqlTableModel"
#include "QtSql/QSqlDriver"
#include <QDebug>

class DatabaseLibrary
{
protected:
    QSqlDatabase m_database = QSqlDatabase::addDatabase("QSQLITE");
public:
    DatabaseLibrary();
    ~DatabaseLibrary() {cDisconnectDatabase();}
    bool cConnectDatabase(QString hostName, QString databaseName, QString userName, QString password);
    void cDisconnectDatabase();
    QSqlTableModel *cModel (QString table, int numOfColumns, QString* Columns);
};

#endif // DATABASELIBRARY_H
