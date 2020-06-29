#ifndef DODAJ_GRUPE_DIALOG_H
#define DODAJ_GRUPE_DIALOG_H

#include <QDialog>
#include "uczelniadb.h"
#include "string"

namespace Ui {
class Dodaj_grupe_Dialog;
}

class Dodaj_grupe_Dialog : public QDialog
{
    Q_OBJECT

public:
    bool grupa;
    int idGrupy;
    UczelniaDB* uczelnia;
    explicit Dodaj_grupe_Dialog(UczelniaDB* uczelniaPointer, QWidget *parent = nullptr);
    ~Dodaj_grupe_Dialog();
    void setUczelnia(UczelniaDB* uczelniaPointer) {uczelnia = uczelniaPointer;}

protected:
    void nowyrekord();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::Dodaj_grupe_Dialog *ui;


};

#endif // DODAJ_GRUPE_DIALOG_H
