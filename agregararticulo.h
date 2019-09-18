#ifndef AGREGARARTICULO_H
#define AGREGARARTICULO_H

#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QMainWindow>

namespace Ui {
  class AgregarArticulo;
}

class AgregarArticulo : public QMainWindow
{
    Q_OBJECT

  public:
    explicit AgregarArticulo(QWidget *parent = nullptr);
    ~AgregarArticulo();

  private slots:
    void on_btnAgregar_clicked();

    void on_btnCancelar_clicked();

  private:
    Ui::AgregarArticulo *ui;
    QSqlDatabase BaseDatos;
};

#endif // AGREGARARTICULO_H
