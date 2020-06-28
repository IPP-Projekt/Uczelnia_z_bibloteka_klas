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
        return true;
    }
    else{
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
    l_model->setEditStrategy(QSqlTableModel::EditStrategy::OnFieldChange);
    l_model->setTable(table);
    for(int i = 0; i < numOfColumns; i++){
        l_model[0].setHeaderData(i,Qt::Horizontal, columns[i]);
    }
    l_model->select();
    return l_model;
}

bool DatabaseLibrary::cInsertRecord(QSqlTableModel *model, QSqlRecord& record)
{
    QSqlRecord l_record;
        int i = model->rowCount();
        return model->insertRecord(i,record);
        qDebug() << model->lastError().databaseText().toStdWString();
}

int DatabaseLibrary::cGenerateIndex(QSqlTableModel *model)
{
    QList<int> l_list;
    for(int i = 0; i < model->rowCount(); i++){
        l_list.append(model->record(i).field(0).value().toInt());
    }
    for(int i = 0; i < model->rowCount()+1; i++){
        if(!l_list.contains(i))
            return i;
    }
}
