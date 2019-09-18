#ifndef INICIOTIENDA_H
#define INICIOTIENDA_H

#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QWidget>
#include<mainwindow.h>
#include <gestioninventario.h>

namespace Ui {
class inicioTienda;
}

class inicioTienda : public QWidget
{
    Q_OBJECT

public:
    explicit inicioTienda(QWidget *parent = 0);
    class MainWindow *mw;
    class gestionInventario * gi;
    ~inicioTienda();

private slots:
    void on_botonTienda_2_clicked();

    void on_botonTienda_clicked();

    void on_btnInventarioLogo_clicked();

    void on_btnVentasIcon_clicked();

    void on_botonCompra_clicked();

  private:
    Ui::inicioTienda *ui;
};

#endif // INICIOTIENDA_H
