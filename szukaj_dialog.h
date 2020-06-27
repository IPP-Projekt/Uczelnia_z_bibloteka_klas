#ifndef SZUKAJ_DIALOG_H
#define SZUKAJ_DIALOG_H

#include <QDialog>

namespace Ui {
class Szukaj_dialog;
}

class Szukaj_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Szukaj_dialog(QWidget *parent = nullptr);
    ~Szukaj_dialog();

private:
    Ui::Szukaj_dialog *ui;
};

#endif // SZUKAJ_DIALOG_H
