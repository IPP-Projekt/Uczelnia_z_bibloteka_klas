#include "uczelniadb.h"

UczelniaDB::UczelniaDB()
{
    m_database.cConnectDatabase("localhost","C:\\sqlite3\\Uczelnia.db","","");
    m_model = new QSqlTableModel*[2];
    m_modelEntries = 2;
    m_model[0] = m_database.cModel("Studenci", 4, m_tableStudenciColumns);
}