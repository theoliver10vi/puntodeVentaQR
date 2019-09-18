#ifndef VISUALIZAGANANCIAS_H
#define VISUALIZAGANANCIAS_H

#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QMainWindow>

namespace Ui {
  class visualizaGanancias;
}

class visualizaGanancias : public QMainWindow
{
    Q_OBJECT

  public:
    explicit visualizaGanancias(QWidget *parent = nullptr);
    ~visualizaGanancias();

  private slots:
    void on_btnRegresar_clicked();

    void on_btnVisualizar_clicked();

  private:
    Ui::visualizaGanancias *ui;
    enum Columna{
      FECHA, GANANCIA
    };
};

#endif // VISUALIZAGANANCIAS_H
