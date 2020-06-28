#ifndef EDYTUJ2_SREDNIANAZWISKO_DIALOG_H
#define EDYTUJ2_SREDNIANAZWISKO_DIALOG_H

#include <QDialog>

namespace Ui {
class edytuj2_sredniaNazwisko_Dialog;
}

class edytuj2_sredniaNazwisko_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit edytuj2_sredniaNazwisko_Dialog(QWidget *parent = nullptr);
    ~edytuj2_sredniaNazwisko_Dialog();

private:
    Ui::edytuj2_sredniaNazwisko_Dialog *ui;
};

#endif // EDYTUJ2_SREDNIANAZWISKO_DIALOG_H
