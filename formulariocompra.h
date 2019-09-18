#ifndef FORMULARIOCOMPRA_H
#define FORMULARIOCOMPRA_H

#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QWidget>
#include <mainwindow.h>
#include <generarcodigo.h>
namespace Ui {
class formularioCompra;
}

class formularioCompra : public QWidget
{
    Q_OBJECT

public:
    explicit formularioCompra(QWidget *parent = 0);
    class MainWindow *mw;
    class generarCodigo *gc;
    ~formularioCompra();

private slots:
    void on_botonTienda_2_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::formularioCompra *ui;
    enum Columna{
      NOMBRE, PRECIO, CANTIDAD
    };
};

#endif // FORMULARIOCOMPRA_H
