#ifndef EDYTUJ2_DIALOG_H
#define EDYTUJ2_DIALOG_H

#include <QDialog>
#include <string>

namespace Ui {
class edytuj2_Dialog;
}

class edytuj2_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit edytuj2_Dialog(QWidget *parent = nullptr);
    ~edytuj2_Dialog();

private:
    Ui::edytuj2_Dialog *ui;

QString edycjarekordow ();
};

#endif // EDYTUJ2_DIALOG_H
