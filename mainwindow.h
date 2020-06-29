#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "uczelniadb.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    UczelniaDB uczelnia;
    int selectedEntry;
private slots:
    void on_btn_Dodaj_clicked();

    void on_btn_Usun_clicked();

    void on_btn_Edytuj_clicked();

    void on_btn_Szukaj_clicked();

    void on_tableViewDatabase_clicked(const QModelIndex &index);

    void on_comboBoxTable_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
