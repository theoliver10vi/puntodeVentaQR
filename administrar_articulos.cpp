#include "administrar_articulos.h"
#include "ui_administrar_articulos.h"
#include "gestioninventario.h"
#include "agregararticulo.h"
#include "eliminararticulo.h"
#include "editararticulo.h"

Administrar_Articulos::Administrar_Articulos(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::Administrar_Articulos)
{
  ui->setupUi(this);

  BaseDatos = QSqlDatabase::addDatabase("QMYSQL");
  BaseDatos.setHostName("localhost");
  BaseDatos.setUserName("BRivera");
  BaseDatos.setPassword("1uuXuBdiZ7NVElka");
  BaseDatos.setDatabaseName("mydb");

  QStringList Titulos;
  ui->tableWidget->setColumnCount(5);
  Titulos << "Nombre" << "Precio" << "Marca" << "Codigo_Barras" << "Stock";
  ui->tableWidget->setHorizontalHeaderLabels(Titulos);
  /*Hacemos que las columnas se estiren para que rellenen el espacio del widget*/
  QHeaderView* header = ui->tableWidget->horizontalHeader();
  header->setSectionResizeMode(QHeaderView::Stretch);

  if(BaseDatos.open()){
        QSqlQuery query;
        if(query.exec("SELECT NombreArticulo, Precio, Marca, CodigoDeBarras, NumeroExistentes FROM Articulo")){
            while(query.next()){
                qDebug() << query.value(0) << query.value(1) << query.value(2) << query.value(3) << query.value(4);

                QString nom = query.value(0).toString();
                QString pre = query.value(1).toString();
                QString mar = query.value(2).toString();
                QString cod = query.value(3).toString();
                QString num = query.value(4).toString();
                ui->tableWidget->setRowCount(ui->tableWidget->rowCount() + 1);

                QTableWidgetItem* nomItem = new QTableWidgetItem(nom);
                QTableWidgetItem* preItem = new QTableWidgetItem(pre);
                QTableWidgetItem* marItem = new QTableWidgetItem(mar);
                QTableWidgetItem* codItem = new QTableWidgetItem(cod);
                QTableWidgetItem* numItem = new QTableWidgetItem(num);

                ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 0, nomItem);
                ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 1, preItem);
                ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 2, marItem);
                ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 3, codItem);
                ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 4, numItem);
            }
            hasInit = true;
        }else{
            qDebug() << query.lastError().text();
        }
    }else{
        qDebug() << "Fallo al conectarse con la base de datos";
    }
}

Administrar_Articulos::~Administrar_Articulos()
{
  delete ui;
}

void Administrar_Articulos::on_btnRegresar_clicked()
{
  gestionInventario *returnWindow = new gestionInventario();
  returnWindow->show();
  this->close();
}

void Administrar_Articulos::on_btnAgregarArt_clicked()
{
  AgregarArticulo *ventanaAgregar = new AgregarArticulo();
  ventanaAgregar->show();
  ventanaAgregar->isModal();
}

void Administrar_Articulos::on_btnEliminarArt_clicked()
{
  EliminarArticulo *ventanaElimina = new EliminarArticulo();
  ventanaElimina->show();
}

void Administrar_Articulos::on_btnEditarArt_clicked()
{
  EditarArticulo *ventanaEditar = new EditarArticulo();
  ventanaEditar->show();
  this->close();
}
