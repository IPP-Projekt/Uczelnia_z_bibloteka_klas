#ifndef DATABASELIBRARY_H
#define DATABASELIBRARY_H

#include"QVector"
#include "QtSql/QSql"
#include "QtSql/QSqlDatabase"

class DatabaseLibrary
{
protected:
    QVector<QString> m_databaseNameContainer;
public:
    DatabaseLibrary();
    bool cConnectDatabase(QString name, QString hostName, QString databaseName, QString userName, QString password);
    void cDisconnectDatabase(int index);
};

#endif // DATABASELIBRARY_H
