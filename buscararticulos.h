#ifndef BUSCARARTICULOS_H
#define BUSCARARTICULOS_H

#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QMainWindow>

namespace Ui {
  class BuscarArticulos;
}

class BuscarArticulos : public QMainWindow
{
    Q_OBJECT

  public:
    explicit BuscarArticulos(QWidget *parent = nullptr);
    ~BuscarArticulos();

  private slots:
    void on_btnRegresar_clicked();

  private:
    Ui::BuscarArticulos *ui;
    QSqlDatabase BaseDatos;
    bool hasInit;
    enum Columna{
      NOMBRE, MARCA, PRECIO, BARCODE, STOCK
    };
};

#endif // BUSCARARTICULOS_H
