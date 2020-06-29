#ifndef DODAJ_GRUPE_DIALOG_H
#define DODAJ_GRUPE_DIALOG_H

#include <QDialog>

namespace Ui {
class Dodaj_grupe_Dialog;
}

class Dodaj_grupe_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dodaj_grupe_Dialog(QWidget *parent = nullptr);
    ~Dodaj_grupe_Dialog();

private:
    Ui::Dodaj_grupe_Dialog *ui;
};

#endif // DODAJ_GRUPE_DIALOG_H
