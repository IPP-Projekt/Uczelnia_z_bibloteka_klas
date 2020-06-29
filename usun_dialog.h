#ifndef USUN_DIALOG_H
#define USUN_DIALOG_H

#include <QDialog>
#include "uczelniadb.h"

namespace Ui {
class Usun_dialog;
}

class Usun_dialog : public QDialog
{
    Q_OBJECT

public:
    UczelniaDB* uczelnia;
    int selectedEntry;
    int selectedTable;
    int rowInModel;
    explicit Usun_dialog(UczelniaDB* i_uczelnia, int i_selEntry, int selTable, QWidget *parent = nullptr);
    ~Usun_dialog();
    int findRow();
private slots:
    void on_buttonBox_accepted();

private:
    Ui::Usun_dialog *ui;
};

#endif // USUN_DIALOG_H
