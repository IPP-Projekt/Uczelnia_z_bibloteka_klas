#include "konfiguracja.h"
#include <QDebug>

Konfiguracja::Konfiguracja(QString lokacja): lokacjaPliku(lokacja)
{
    konfiguracja = new QSettings(lokacjaPliku, QSettings::IniFormat);
    if(!sprawdzKonfiguracje())
        stworzKonfiguracje();
    konfiguracja->beginGroup("BazaDanych");
    bazaDanych.append(konfiguracja->value("host").toString());
    bazaDanych.append(konfiguracja->value("lokalizacja").toString());
    bazaDanych.append(konfiguracja->value("uzytkownik").toString());
    bazaDanych.append(konfiguracja->value("haslo").toString());
    konfiguracja->endGroup();
}

QString Konfiguracja::getLocalhost()
{
   return bazaDanych.value(0);
}

QString Konfiguracja::getLocation()
{
    return bazaDanych.value(1);
}

QString Konfiguracja::getUserName()
{
    return bazaDanych.value(2);
}

QString Konfiguracja::getPassword()
{
    return bazaDanych.value(3);
}

void Konfiguracja::stworzKonfiguracje()
{
    konfiguracja->clear();
    konfiguracja->beginGroup("BazaDanych");
    konfiguracja->setValue("host","localhost");
            konfiguracja->setValue("lokalizacja", "C:\\sqlite3\\Uczelnia.db");
            konfiguracja->setValue("uzytkownik", "");
            konfiguracja->setValue("haslo", "");
    konfiguracja->endGroup();
    konfiguracja->sync();
}

bool Konfiguracja::sprawdzKonfiguracje()
{
    konfiguracja->beginGroup("BazaDanych");
    bool zawiera = false;
    if(konfiguracja->contains("host") && konfiguracja->contains("lokalizacja") && konfiguracja->contains("uzytkownik") && konfiguracja->contains("haslo"))
        zawiera = true;
    konfiguracja->endGroup();
    return zawiera;
}
