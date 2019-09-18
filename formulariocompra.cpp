#include "formulariocompra.h"
#include "ui_formulariocompra.h"
#include "generarcodigo.h"

formularioCompra::formularioCompra(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::formularioCompra)
{
    ui->setupUi(this);


}

formularioCompra::~formularioCompra()
{
    delete ui;
}

void formularioCompra::on_botonTienda_2_clicked()
{
  MainWindow *mw = new MainWindow();
  mw->show();
  this->close();
}

void formularioCompra::on_pushButton_2_clicked()
{
    generarCodigo *gc = new generarCodigo();
    gc->show();
    this->close();
}
