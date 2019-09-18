#ifndef GENERARCODIGO_H
#define GENERARCODIGO_H

#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QWidget>
#include <formulariocompra.h>

namespace Ui {
class generarCodigo;
}

class generarCodigo : public QWidget
{
    Q_OBJECT

public:
    explicit generarCodigo(QWidget *parent = 0);
    class formularioCompra *fc;
    ~generarCodigo();

private slots:
    void on_botonTienda_2_clicked();

private:
    Ui::generarCodigo *ui;
};

#endif // GENERARCODIGO_H
