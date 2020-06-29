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
    bool grupa;
    int idGrupy;
    UczelniaDB* uczelnia;
    explicit Dodaj_dialog(UczelniaDB* uczelniaPointer, QWidget *parent = nullptr);
    ~Dodaj_dialog();
    void setUczelnia(UczelniaDB* uczelniaPointer);
private:
    Ui::Dodaj_dialog *ui;

protected:
    void nowyrekord();
private slots:
    void on_buttonBox_accepted();
    void on_checkBoxGrupa_clicked(bool checked);
    void on_comboBox_currentIndexChanged(int index);
};

#endif // DODAJ_DIALOG_H
