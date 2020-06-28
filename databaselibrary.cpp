#include "databaselibrary.h"

DatabaseLibrary::DatabaseLibrary()
{

}

bool DatabaseLibrary::cConnectDatabase(QString hostName, QString databaseName, QString userName, QString password)
{
    m_database.setHostName(hostName);
    m_database.setDatabaseName(databaseName);
    m_database.setUserName(userName);
    m_database.setPassword(password);
    if(m_database.open()){
        qDebug() << "Yes";
        return true;
    }
    else{
        qDebug() << "No";
        return false;
    }
}

void DatabaseLibrary::cDisconnectDatabase()
{
    if(m_database.isOpen())
        m_database.close();
}

QSqlTableModel *DatabaseLibrary::cModel(QString table, int numOfColumns, QString* columns)
{
    QSqlTableModel* l_model = new QSqlTableModel(nullptr,m_database);
    l_model->setTable(table);
    for(int i = 0; i < numOfColumns; i++){
        l_model[0].setHeaderData(i,Qt::Horizontal, columns[i]);
    }
    l_model->select();
    return l_model;
}

bool DatabaseLibrary::cInsertRecord(QSqlTableModel *model, int fieldsNum, QSqlField* field)
{
    QSqlRecord l_record;
    for (int i = 0; i < fieldsNum; i++){
    //l_record.append(field[i]);
        return true;
    }
}
