#ifndef EDYTUJ2_NAZWISKO_DIALOG_H
#define EDYTUJ2_NAZWISKO_DIALOG_H

#include <QDialog>

namespace Ui {
class edytuj2_nazwisko_Dialog;
}

class edytuj2_nazwisko_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit edytuj2_nazwisko_Dialog(QWidget *parent = nullptr);
    ~edytuj2_nazwisko_Dialog();

private:
    Ui::edytuj2_nazwisko_Dialog *ui;
};

#endif // EDYTUJ2_NAZWISKO_DIALOG_H
