#ifndef DODAJ_DIALOG_H
#define DODAJ_DIALOG_H

#include <QDialog>

namespace Ui {
class Dodaj_dialog;
}

class Dodaj_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dodaj_dialog(QWidget *parent = nullptr);
    ~Dodaj_dialog();

private:
    Ui::Dodaj_dialog *ui;
};

#endif // DODAJ_DIALOG_H
