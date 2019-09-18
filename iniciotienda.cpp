#include "iniciotienda.h"
#include "ui_iniciotienda.h"
#include "mainwindow.h"
#include "gestioninventario.h"
#include "visualizaganancias.h"

inicioTienda::inicioTienda(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::inicioTienda)
{
    ui->setupUi(this);
}

inicioTienda::~inicioTienda()
{
    delete ui;
}

void inicioTienda::on_botonTienda_2_clicked()
{
    MainWindow *mw = new MainWindow();
    mw->show();
    this->close();
}

void inicioTienda::on_botonTienda_clicked()
{
    gestionInventario *gi = new gestionInventario();
    gi->show();
    this->close();
}

void inicioTienda::on_btnInventarioLogo_clicked()
{
  gestionInventario *gi = new gestionInventario();
  gi->show();
  this->close();
}

void inicioTienda::on_btnVentasIcon_clicked()
{
  visualizaGanancias *ventanaVentas = new visualizaGanancias();
  ventanaVentas->show();
  this->close();
}

void inicioTienda::on_botonCompra_clicked()
{
  visualizaGanancias *ventanaVentas = new visualizaGanancias();
  ventanaVentas->show();
  this->close();
}
