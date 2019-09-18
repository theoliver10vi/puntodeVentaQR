#include "agregararticulo.h"
#include "ui_agregararticulo.h"
#include "gestioninventario.h"
#include <QMessageBox>

AgregarArticulo::AgregarArticulo(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::AgregarArticulo)
{
  ui->setupUi(this);

  BaseDatos = QSqlDatabase::addDatabase("QMYSQL");
  BaseDatos.setHostName("localhost");
  BaseDatos.setUserName("BRivera");
  BaseDatos.setPassword("1uuXuBdiZ7NVElka");
  BaseDatos.setDatabaseName("mydb");
}

AgregarArticulo::~AgregarArticulo()
{
  delete ui;
}

void AgregarArticulo::on_btnAgregar_clicked()
{
  QSqlQuery query1;
      BaseDatos.open();
      query1.exec("INSERT INTO `Articulo`(`NombreArticulo`, `Precio`, `Marca`, `CodigoDeBarras`, `NumeroExistentes`) VALUES ('" + ui->lineEdit->text() + "','" + ui->lineEdit_2->text() + "','" + ui->lineEdit_3->text() + "','" + ui->lineEdit_5->text() + "','" + ui->lineEdit_4->text() + "')");
      BaseDatos.close();
    QMessageBox::warning(this, "Información", "El artículo ha sido agregado.");
}

void AgregarArticulo::on_btnCancelar_clicked()
{
//  gestionInventario *returnWindow = new gestionInventario();
  this->close();
}
