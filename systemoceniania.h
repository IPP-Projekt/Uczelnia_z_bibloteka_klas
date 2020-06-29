#ifndef SYSTEMOCENIANIA_H
#define SYSTEMOCENIANIA_H
#include "uczelniadb.h"

class SystemOceniania
{
protected:
    UczelniaDB* uczelnia;
public:
    SystemOceniania(UczelniaDB* uczelniaPointer) {uczelnia = uczelniaPointer;}
    void AktualizujOceny();
};

#endif // SYSTEMOCENIANIA_H
