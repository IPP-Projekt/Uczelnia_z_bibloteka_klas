#ifndef EDYTUJ2_IMIESREDNIA_DIALOG_H
#define EDYTUJ2_IMIESREDNIA_DIALOG_H

#include <QDialog>

namespace Ui {
class edytuj2_imieSrednia_Dialog;
}

class edytuj2_imieSrednia_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit edytuj2_imieSrednia_Dialog(QWidget *parent = nullptr);
    ~edytuj2_imieSrednia_Dialog();

private:
    Ui::edytuj2_imieSrednia_Dialog *ui;
};

#endif // EDYTUJ2_IMIESREDNIA_DIALOG_H
