#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

#include <QMainWindow>
#include <formulariocompra.h>
#include <iniciotienda.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    class inicioTienda * itienda;
    class formularioCompra * fcompra;
    ~MainWindow();

private slots:
    void on_botonTienda_clicked();

    void on_botonCompra_clicked();

    void on_label_2_linkActivated(const QString &link);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

  private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
