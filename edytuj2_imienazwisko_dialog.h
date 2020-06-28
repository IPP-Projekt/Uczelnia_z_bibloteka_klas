#ifndef EDYTUJ2_IMIENAZWISKO_DIALOG_H
#define EDYTUJ2_IMIENAZWISKO_DIALOG_H

#include <QDialog>

namespace Ui {
class edytuj2_imieNazwisko_Dialog;
}

class edytuj2_imieNazwisko_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit edytuj2_imieNazwisko_Dialog(QWidget *parent = nullptr);
    ~edytuj2_imieNazwisko_Dialog();

private:
    Ui::edytuj2_imieNazwisko_Dialog *ui;
};

#endif // EDYTUJ2_IMIENAZWISKO_DIALOG_H
