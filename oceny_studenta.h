#ifndef OCENY_STUDENTA_H
#define OCENY_STUDENTA_H

#include <QDialog>
#include "uczelniadb.h"

namespace Ui {
class Oceny_studenta;
}

class Oceny_studenta : public QDialog
{
    Q_OBJECT

public:
    explicit Oceny_studenta(UczelniaDB* uczelniaPointer, int index, QWidget *parent = nullptr);
    ~Oceny_studenta();

private slots:
    void on_pushButtonExit_clicked();

private:
    Ui::Oceny_studenta *ui;
};

#endif // OCENY_STUDENTA_H
