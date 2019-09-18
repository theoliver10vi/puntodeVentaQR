#ifndef GESTIONINVENTARIO_H
#define GESTIONINVENTARIO_H

#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QWidget>
#include<iniciotienda.h>
namespace Ui {
class gestionInventario;
}

class gestionInventario : public QWidget
{
    Q_OBJECT

public:
    explicit gestionInventario(QWidget *parent = 0);
    class inicioTienda * it;
    ~gestionInventario();

private slots:
    void on_botonTienda_2_clicked();

    void on_btnAgregarArt_clicked();

    void on_btnAdmnistrarArticulos_clicked();

    void on_btnBuscarArt_clicked();

  private:
    Ui::gestionInventario *ui;
};

#endif // GESTIONINVENTARIO_H
