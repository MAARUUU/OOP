#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>






MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{


    ui->setupUi(this);
    QObject::connect(ui->spinBox,SIGNAL(valueChanged(int)),ui->progressBar,SLOT(setValue(int)));
    QObject::connect(ui->progressBar, SIGNAL(valueChanged(int)),ui->label,SLOT(setNum(int)));


    QObject::connect(ui->progressBar,&QProgressBar::valueChanged,[](){qDebug()<<"ОШИБКА!!!!!";});
    /////////////lcdNumber

}










MainWindow::~MainWindow()
{


    delete ui;



}






