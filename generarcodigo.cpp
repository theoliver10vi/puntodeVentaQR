#include "generarcodigo.h"
#include "ui_generarcodigo.h"
#include "formulariocompra.h"

generarCodigo::generarCodigo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::generarCodigo)
{
    ui->setupUi(this);
}

generarCodigo::~generarCodigo()
{
    delete ui;
}

void generarCodigo::on_botonTienda_2_clicked()
{
    formularioCompra *fc = new formularioCompra();
    fc->show();
    this->close();
}
