#ifndef ELIMINARARTICULO_H
#define ELIMINARARTICULO_H

#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QMainWindow>

namespace Ui {
  class EliminarArticulo;
}

class EliminarArticulo : public QMainWindow
{
    Q_OBJECT

  public:
    explicit EliminarArticulo(QWidget *parent = nullptr);
    ~EliminarArticulo();

  private slots:
    void on_btnRegresar_clicked();

    void on_btnBuscar_clicked();

    void on_btnGuardarCambios_clicked();

    void on_btnEliminarArt_clicked();

  private:
    Ui::EliminarArticulo *ui;
    QSqlDatabase BaseDatos;
    bool hasInit;
    enum Columna{
      NOMBRE, MARCA, PRECIO, BARCODE, STOCK
    };
};

#endif // ELIMINARARTICULO_H
