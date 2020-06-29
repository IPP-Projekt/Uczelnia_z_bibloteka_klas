#ifndef OCENY_STUDENTA_H
#define OCENY_STUDENTA_H

#include <QDialog>

namespace Ui {
class Oceny_studenta;
}

class Oceny_studenta : public QDialog
{
    Q_OBJECT

public:
    explicit Oceny_studenta(QWidget *parent = nullptr);
    ~Oceny_studenta();

private:
    Ui::Oceny_studenta *ui;
};

#endif // OCENY_STUDENTA_H
