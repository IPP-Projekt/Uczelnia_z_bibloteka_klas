#ifndef DODAJ_OCENE_DIALOG_H
#define DODAJ_OCENE_DIALOG_H

#include "uczelniadb.h"
#include <QDialog>

namespace Ui {
class Dodaj_ocene_dialog;
}

class Dodaj_ocene_dialog : public QDialog
{
    Q_OBJECT

public:
    int idGrupy;
    UczelniaDB* uczelnia;
    QList<QString> indexList;
    explicit Dodaj_ocene_dialog(UczelniaDB* uczelniaPointer, QWidget *parent = nullptr);
    ~Dodaj_ocene_dialog();

private slots:
    void on_buttonBox_accepted();

    void on_comboBoxGrupa_currentIndexChanged(int index);

private:
    Ui::Dodaj_ocene_dialog *ui;
};

#endif // DODAJ_OCENE_DIALOG_H
