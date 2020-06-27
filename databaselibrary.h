#ifndef DATABASELIBRARY_H
#define DATABASELIBRARY_H

#include "QtSql/QSql"
#include "QtSql/QSqlDatabase"

class DatabaseLibrary
{
protected:
    QSqlDatabase m_database;
    bool m_connected;
public:
    DatabaseLibrary();
    bool cConnectDatabase(QString name, QString hostName, QString databaseName, QString userName, QString password);
};

#endif // DATABASELIBRARY_H
