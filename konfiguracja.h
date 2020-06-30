#ifndef KONFIGURACJA_H
#define KONFIGURACJA_H

#include <QSettings>
#include <QDir>


class Konfiguracja
{
protected:
QSettings* konfiguracja;
public:
    Konfiguracja();
    QString getLocalhost();
    QString getLocation();
    QString getUserName();
    QString getPassword();
};

#endif // KONFIGURACJA_H
