#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iniciotienda.h"
#include "formulariocompra.h"
#include <QMessageBox>
#include <QSqlError>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QSqlDatabase BaseDatos = QSqlDatabase::addDatabase("QMYSQL");
    BaseDatos.setHostName("localhost");
    BaseDatos.setUserName("BRivera");
    BaseDatos.setPassword("1uuXuBdiZ7NVElka");
    BaseDatos.setDatabaseName("mydb");

//    if(!BaseDatos.open()) {
//        QMessageBox::critical(this, "Error", BaseDatos.lastError().text());
//        return;
//    }else{
//        QMessageBox::information(this, "Base Conectada", "La base funciona :D");
//    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_botonTienda_clicked()
{
    inicioTienda *itienda = new inicioTienda();
    itienda->show();
    this->close();
}

void MainWindow::on_botonCompra_clicked()
{
    formularioCompra *fcompra = new formularioCompra();
    fcompra->show();
    this->close();
}

void MainWindow::on_label_2_linkActivated(const QString &link)
{
  int i;
  i++;
}

void MainWindow::on_pushButton_clicked()
{
  formularioCompra *fcompra = new formularioCompra();
  fcompra->show();
  this->close();
}

void MainWindow::on_pushButton_2_clicked()
{
  inicioTienda *itienda = new inicioTienda();
  itienda->show();
  this->close();
}
