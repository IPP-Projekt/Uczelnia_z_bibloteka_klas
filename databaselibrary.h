#ifndef DATABASELIBRARY_H
#define DATABASELIBRARY_H

#include "QVector"
#include "QtSql/QSql"
#include "QtSql/QSqlDatabase"
#include "QtSql/QSqlTableModel"
#include "QtSql/QSqlDriver"
#include "QDebug"
#include "QtSql/QSqlRecord"
#include "QtSql"

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
    QSqlTableModel *cModel (QString table);
    static bool cInsertRecord(QSqlTableModel* model, QSqlRecord& record);
    static int cGenerateIndex(QSqlTableModel* model);
    static void cRefeshModel(QSqlTableModel* model);
};

#endif // DATABASELIBRARY_H
