#include "gestioninventario.h"
#include "ui_gestioninventario.h"
#include "agregararticulo.h"
#include "iniciotienda.h"
#include "administrar_articulos.h"
#include "buscararticulos.h"

gestionInventario::gestionInventario(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gestionInventario)
{
    ui->setupUi(this);
}

gestionInventario::~gestionInventario()
{
    delete ui;
}

void gestionInventario::on_botonTienda_2_clicked()
{
    inicioTienda *it = new inicioTienda();
    it->show();
    this->close();
}

void gestionInventario::on_btnAgregarArt_clicked()
{

}

void gestionInventario::on_btnAdmnistrarArticulos_clicked()
{
  Administrar_Articulos *ventanaAdmon = new Administrar_Articulos();
  ventanaAdmon->show();
  this->close();
}

void gestionInventario::on_btnBuscarArt_clicked()
{
  BuscarArticulos *ventanaBusqueda = new BuscarArticulos();
  ventanaBusqueda->show();
  this->close();
}
