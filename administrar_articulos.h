#ifndef ADMINISTRAR_ARTICULOS_H
#define ADMINISTRAR_ARTICULOS_H

#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QMainWindow>

namespace Ui {
  class Administrar_Articulos;
}

class Administrar_Articulos : public QMainWindow
{
    Q_OBJECT

  public:
    explicit Administrar_Articulos(QWidget *parent = nullptr);
    ~Administrar_Articulos();

  private slots:
    void on_btnRegresar_clicked();

    void on_btnAgregarArt_clicked();

    void on_btnEliminarArt_clicked();

    void on_btnEditarArt_clicked();

  private:
    Ui::Administrar_Articulos *ui;
    QSqlDatabase BaseDatos;
    bool hasInit;
    enum Columna{
      NOMBRE, MARCA, PRECIO, BARCODE, STOCK
    };
};

#endif // ADMINISTRAR_ARTICULOS_H
