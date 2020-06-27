#ifndef EDYTUJ_DIALOG_H
#define EDYTUJ_DIALOG_H

#include <QDialog>

namespace Ui {
class Edytuj_dialog;
}

class Edytuj_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Edytuj_dialog(QWidget *parent = nullptr);
    ~Edytuj_dialog();

private:
    Ui::Edytuj_dialog *ui;
};

#endif // EDYTUJ_DIALOG_H
