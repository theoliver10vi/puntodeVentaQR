#include "visualizaganancias.h"
#include "ui_visualizaganancias.h"
#include "iniciotienda.h"

visualizaGanancias::visualizaGanancias(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::visualizaGanancias)
{
  ui->setupUi(this);

  //set table to display results
  QStringList Titulos;
  ui->tableWidget->setColumnCount(2);
  Titulos << "Fecha" << "Ganancia de Ventas";
  ui->tableWidget->setHorizontalHeaderLabels(Titulos);
  /*Hacemos que las columnas se estiren para que rellenen el espacio del widget*/
  QHeaderView* header = ui->tableWidget->horizontalHeader();
  header->setSectionResizeMode(QHeaderView::Stretch);

  //set combobox
  this->ui->comboBoxPeriodo->addItem("-- Selecciona uno --");
  this->ui->comboBoxPeriodo->addItem("Día");
  this->ui->comboBoxPeriodo->addItem("Mes");
  this->ui->comboBoxPeriodo->addItem("Año");
}

visualizaGanancias::~visualizaGanancias()
{
  delete ui;
}

void visualizaGanancias::on_btnRegresar_clicked()
{
    inicioTienda *ventanaTienda = new inicioTienda();
    ventanaTienda->show();
    this->close();
}

void visualizaGanancias::on_btnVisualizar_clicked()
{ //para tony

}
