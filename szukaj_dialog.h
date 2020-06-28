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
    QString* szukana;
    explicit Szukaj_dialog(QString* i_szukana, QWidget *parent = nullptr);
    ~Szukaj_dialog();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::Szukaj_dialog *ui;
};

#endif // SZUKAJ_DIALOG_H
