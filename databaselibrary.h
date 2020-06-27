#ifndef DATABASELIBRARY_H
#define DATABASELIBRARY_H

#include"QList"
#include "QtSql/QSql"
#include "QtSql/QSqlDatabase"

class DatabaseLibrary
{
protected:
    QList<QString> m_databaseNameList;
public:
    DatabaseLibrary();
    bool cConnectDatabase(QString name, QString hostName, QString databaseName, QString userName, QString password);
};

#endif // DATABASELIBRARY_H
