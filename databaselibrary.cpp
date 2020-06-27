#include "databaselibrary.h"

DatabaseLibrary::DatabaseLibrary()
{

}

bool DatabaseLibrary::cConnectDatabase(QString name, QString hostName, QString databaseName, QString userName, QString password)
{
    QSqlDatabase l_database = QSqlDatabase::addDatabase(name);
    l_database.setHostName(hostName);
    l_database.setDatabaseName(databaseName);
    l_database.setUserName(userName);
    l_database.setPassword(password);
    if(l_database.open()){
        m_databaseNameContainer.append(name);
        return true;
    }
    else{
        return false;
    }
}

void DatabaseLibrary::cDisconnectDatabase(int index)
{
    QSqlDatabase l_database = QSqlDatabase::database(m_databaseNameContainer[index]);
    if(l_database.isOpen())
    {
        l_database.close();
        m_databaseNameContainer.remove(index);
    }
    else{
        m_databaseNameContainer.remove(index);
    }
}
