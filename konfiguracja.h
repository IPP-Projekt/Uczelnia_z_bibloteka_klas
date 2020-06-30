#ifndef KONFIGURACJA_H
#define KONFIGURACJA_H

#include <QSettings>
#include <QDir>


class Konfiguracja
{
protected:
    QString lokacjaPliku;
    QSettings* konfiguracja;
    QList<QString> bazaDanych;
public:
    Konfiguracja(QString lokacja = (QDir::currentPath() + "/konfiguracja.ini"));
    QString getLocalhost();
    QString getLocation();
    QString getUserName();
    QString getPassword();
    void stworzKonfiguracje();
    bool sprawdzKonfiguracje();
};

#endif // KONFIGURACJA_H
