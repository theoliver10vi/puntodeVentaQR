#ifndef EDITARARTICULO_H
#define EDITARARTICULO_H

#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QMainWindow>

namespace Ui {
  class EditarArticulo;
}

class EditarArticulo : public QMainWindow
{
    Q_OBJECT

  public:
    explicit EditarArticulo(QWidget *parent = nullptr);
    ~EditarArticulo();

  private slots:
    void on_btnGuardarCambios_clicked();

    void on_btnRegresar_clicked();

    void on_btnSeleccionarArt_clicked();

  private:
    Ui::EditarArticulo *ui;
    QSqlDatabase BaseDatos;
    bool hasInit;
    enum Columna{
      NOMBRE, MARCA, PRECIO, BARCODE, STOCK
    };
};

#endif // EDITARARTICULO_H
