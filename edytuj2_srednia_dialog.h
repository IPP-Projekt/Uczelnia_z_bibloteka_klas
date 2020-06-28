#ifndef EDYTUJ2_SREDNIA_DIALOG_H
#define EDYTUJ2_SREDNIA_DIALOG_H

#include <QDialog>

namespace Ui {
class edytuj2_srednia_Dialog;
}

class edytuj2_srednia_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit edytuj2_srednia_Dialog(QWidget *parent = nullptr);
    ~edytuj2_srednia_Dialog();

private:
    Ui::edytuj2_srednia_Dialog *ui;
};

#endif // EDYTUJ2_SREDNIA_DIALOG_H
