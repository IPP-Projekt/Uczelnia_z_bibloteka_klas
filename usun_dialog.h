#ifndef USUN_DIALOG_H
#define USUN_DIALOG_H

#include <QDialog>

namespace Ui {
class Usun_dialog;
}

class Usun_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Usun_dialog(QWidget *parent = nullptr);
    ~Usun_dialog();

private:
    Ui::Usun_dialog *ui;
};

#endif // USUN_DIALOG_H
