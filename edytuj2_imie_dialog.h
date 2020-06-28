#ifndef EDYTUJ2_IMIE_DIALOG_H
#define EDYTUJ2_IMIE_DIALOG_H

#include <QDialog>

namespace Ui {
class edytuj2_imie_Dialog;
}

class edytuj2_imie_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit edytuj2_imie_Dialog(QWidget *parent = nullptr);
    ~edytuj2_imie_Dialog();

private:
    Ui::edytuj2_imie_Dialog *ui;
};

#endif // EDYTUJ2_IMIE_DIALOG_H
