#include "databaselibrary.h"

DatabaseLibrary::DatabaseLibrary()
{

}

bool DatabaseLibrary::cConnectDatabase(QString name, QString hostName, QString databaseName, QString userName, QString password)
{
    m_database = QSqlDatabase::addDatabase(name);
    m_database.setHostName(hostName);
    m_database.setDatabaseName(databaseName);
    m_database.setUserName(userName);
    m_database.setPassword(password);
    return m_database.open();

}
