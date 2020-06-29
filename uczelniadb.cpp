#include "uczelniadb.h"

UczelniaDB::UczelniaDB()
{
    m_database.cConnectDatabase("localhost","C:\\sqlite3\\Uczelnia.db","","");
    m_model = new QSqlTableModel*[2];
    m_modelEntries = 3;
    m_model[0] = m_database.cModel("Studenci", 5, m_tableStudenciColumns);
    m_model[1] = m_database.cModel("Grupy");
    m_model[2] = m_database.cModel("Ocena");
}

void UczelniaDB::refreshTables()
{
    for(int i = 0; i < m_modelEntries; i++){
        DatabaseLibrary::cRefeshModel(m_model[i]);
    }
}
