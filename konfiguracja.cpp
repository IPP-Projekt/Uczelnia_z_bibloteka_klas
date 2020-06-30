#include "konfiguracja.h"

Konfiguracja::Konfiguracja()
{
konfiguracja = new QSettings(QDir::currentPath() + "/konfiguracja.ini", QSettings::IniFormat);
konfiguracja->setValue("test", "value");
konfiguracja->sync();
}

QString Konfiguracja::getLocalhost()
{
    return "localhost";
}

QString Konfiguracja::getLocation()
{
    return "C:\\sqlite3\\Uczelnia.db";
}

QString Konfiguracja::getUserName()
{
    return "";
}

QString Konfiguracja::getPassword()
{
    return "";
}
