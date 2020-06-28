#ifndef DODAJ_DIALOG_H
#define DODAJ_DIALOG_H

#include <QDialog>
#include "string"
#include "uczelniadb.h"

namespace Ui {
class Dodaj_dialog;
}

class Dodaj_dialog : public QDialog
{
    Q_OBJECT

public:
    UczelniaDB* uczelnia;
    explicit Dodaj_dialog(QWidget *parent = nullptr);
    ~Dodaj_dialog();
    void setUczelnia(UczelniaDB* uczelniaPointer);
private:
    Ui::Dodaj_dialog *ui;

protected:
    void nowyrekord();
private slots:
    void on_buttonBox_accepted();
};

#endif // DODAJ_DIALOG_H
