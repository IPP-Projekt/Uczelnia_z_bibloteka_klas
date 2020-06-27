#include "databaselibrary.h"

DatabaseLibrary::DatabaseLibrary()
{

}

bool DatabaseLibrary::cConnectDatabase(QString name, QString hostName, QString databaseName, QString userName, QString password)
{
    QSqlDatabase l_database;
    l_database = QSqlDatabase::addDatabase(name);
    l_database.setHostName(hostName);
    l_database.setDatabaseName(databaseName);
    l_database.setUserName(userName);
    l_database.setPassword(password);
    if(l_database.open()){
        m_databaseNameList.append(name);
        return true;
    }
    else{
        return false;
    }
}
