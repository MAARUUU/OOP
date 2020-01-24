#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "array_mas.h"
#include <vector>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    int i=0;
    unsigned n;
    double *a;


 n = ui->spinBox->value();
 on_spinBox_valueChanged(n);
 const string fname="myFile.txt";
 n=ui->spinBox->value();
 a= new double[n];
 create_array(n,a);// создание массива
 array_file(n,a,fname);// запись в текстовый файл
  file_array(n,fname);
  ui->textEdit->clear();
  for(int i = 0; i < n; i++){
      ui->textEdit->append(QString::number(a[i])+" ");
  }
  for(int i = 0; i < n; i++){
      ui->tableWidget->item(0,i)->setText(QString::number(a[i])+" ");
  }
}


void MainWindow::on_pushButton_2_clicked()
{
    n = ui->spinBox->value();
    randMatrix(m,n);
    writeMatrixToFile("matrix.txt", m, n);
    readMatrixFromFile("matrix.txt", m, n);

    ui->tableWidget->setColumnCount(n);
    ui->tableWidget->setRowCount(n);
    QTableWidgetItem *cell;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++){
        if (ui->tableWidget->item(j,i) == NULL ) {
            cell = new QTableWidgetItem();
            ui->tableWidget->setItem(j,i,cell);
        }
    }
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++){
            ui->tableWidget->item(j,i)->setText(QString::number(m[j][i]));
        }
}

void MainWindow::on_spinBox_valueChanged(int arg1)
{
    ui->tableWidget->setColumnCount(arg1);
    ui->tableWidget->setRowCount(1);
    QTableWidgetItem *cell;
    for(int i = 0; i < arg1; i++){
        if (ui->tableWidget->item(0,i) == NULL ) {
            cell = new QTableWidgetItem();
            ui->tableWidget->setItem(0,i,cell);
        }
}
}
