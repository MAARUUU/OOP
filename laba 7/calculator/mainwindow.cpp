#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::addLabel(QPushButton *button, QLabel *label) {
    QString all_numbers; // запись всех чисел в строку

    if (flag) {
        label->setText(button->text());
        flag = 0;
        return;
    }

    if (label->text() == "0")
        label->setText(button->text());
    else {
        all_numbers = (ui->display->text() + button->text());
        label->setText(all_numbers);
    }
}

void MainWindow::on_pushButton_1_clicked()
{
    addLabel(ui->pushButton_1, ui->display);
}

void MainWindow::on_pushButton_2_clicked()
{
    addLabel(ui->pushButton_2, ui->display);
}

void MainWindow::on_pushButton_3_clicked()
{
    addLabel(ui->pushButton_3, ui->display);
}

void MainWindow::on_pushButton_4_clicked()
{
    addLabel(ui->pushButton_4, ui->display);
}

void MainWindow::on_pushButton_5_clicked()
{
    addLabel(ui->pushButton_5, ui->display);
}

void MainWindow::on_pushButton_6_clicked()
{
    addLabel(ui->pushButton_6, ui->display);
}

void MainWindow::on_pushButton_7_clicked()
{
    addLabel(ui->pushButton_7, ui->display);
}

void MainWindow::on_pushButton_8_clicked()
{
    addLabel(ui->pushButton_8, ui->display);
}

void MainWindow::on_pushButton_9_clicked()
{
    addLabel(ui->pushButton_9, ui->display);
}

void MainWindow::on_pushButton_0_clicked()
{
    addLabel(ui->pushButton_0, ui->display);
}

void MainWindow::on_C_clicked()
{
    if (num.get_value() != 0.0)
        num.set_value(0);
    ui->display->setText("0");
    operation = "";

    ui->labelERROR_2->clear();
}

void MainWindow::on_erase_clicked()
{

    QString str;
    str = ui->display->text();
    int size = str.size();
    str.resize(size-1);
    if (str == "") str = "0";
    ui->display->setText(str);

  ui->labelERROR_2->clear();

}

void MainWindow::on_pushButton_dot_clicked()
{
    if (!(ui->display->text().contains('.'))) {
        ui->display->setText(ui->display->text() + ".");
    }
}

void MainWindow::on_pushButton_sign_clicked()
{
   double res = ui->display->text().toDouble() * (-1.0);
   ui->display->setText(QString::number(res));
}

void MainWindow::checkOperation() {
    if (operation == "+"){
        num += ui->display->text().toDouble();
}
    if (operation == "-"){
        num -= ui->display->text().toDouble();
}
    if (operation == "*"){
        num *= ui->display->text().toDouble();
}
    try {
        if (operation == "/") {
            num /= ui->display->text().toDouble();
        }
    } catch (calculator::ERRORS e) {
        if (e == calculator::div_Zero)
            ui->labelERROR_2->setText("Ошибка при делении на ноль!");
    }

    if (operation == "pow")
       num.set_value(num.pow_value(ui->display->text().toDouble()));
}

void MainWindow::on_pushButton_equally_clicked()
{
    on_erase_clicked();

    checkOperation();
    ui->pushButton_add->setDefault(0);
    ui->pushButton_sub->setDefault(0);
    ui->pushButton_mul->setDefault(0);
    ui->pushButton_div->setDefault(0);
    ui->pushButton_yx->setDefault(0);
    ui->display->setText(QString::number(num.get_value()));
    operation = "";
    flag = 0;
}

void MainWindow::on_pushButton_add_clicked()
{
    ui->pushButton_add->setDefault(1);
    flag = 1;
    num.set_value(ui->display->text().toDouble());
    operation = "+";
}

void MainWindow::on_pushButton_sub_clicked()
{

    flag = 1;
    ui->pushButton_sub->setDefault(1);
    num.set_value(ui->display->text().toDouble());
    operation = "-";
}

void MainWindow::on_pushButton_mul_clicked()
{

    flag = 1;
    ui->pushButton_mul->setDefault(1);
    num.set_value(ui->display->text().toDouble());
    operation = "*";
}

void MainWindow::on_pushButton_div_clicked()
{

    flag = 1;
    ui->pushButton_div->setDefault(1);
    num.set_value(ui->display->text().toDouble());
    operation = "/";
}

void MainWindow::on_pushButton_exp_clicked()
{

    QString str;
    str = ui->display->text();
    num.set_value(str.toDouble());
    num.set_value(num.expr_value());
    ui->display->setText(QString::number(num.get_value()));
}

void MainWindow::on_pushButton_ln_clicked()
{

    QString str;
    str = ui->display->text();
    num.set_value(str.toDouble());

    try {
        num.set_value(num.ln_value());
        ui->display->setText(QString::number(num.get_value()));
    } catch (calculator::ERRORS e) {
        if (e == calculator::Wrong_data)
            ui->labelERROR_2->setText("Неверно введены данные");
    }
}


void MainWindow::on_pushButton_yx_clicked()
{


    ui->pushButton_yx->setDefault(1);
    flag = 1;
    num.set_value(ui->display->text().toDouble());
    operation = "pow";
}

void MainWindow::on_pushButton_sqrt_clicked()
{


    QString str;
       str = ui->display->text();
       num.set_value(str.toDouble());ui->labelERROR->setText("Неверно введены данные");

       try {
           num.set_value(num.sqrt_value());
           ui->display->setText(QString::number(num.get_value()));
       } catch (calculator::ERRORS e) {
           if (e == calculator::Wrong_data)
               ui->labelERROR_2->setText("Неверно введены данные");
       }
   }


void MainWindow::on_pushButton_x2_clicked()
{

    QString str;
    str = ui->display->text();
    num.set_value(str.toDouble());
    num.set_value(num.sqr_value());
    ui->display->setText(QString::number(num.get_value()));
}

void MainWindow::on_pushButton_sin_clicked()
{

    QString str;
    str = ui->display->text();
    num.set_value(str.toDouble());
    num.set_value(num.sin_value());
    ui->display->setText(QString::number(num.get_value()));
}

void MainWindow::on_pushButton_cos_clicked()
{

    QString str;
    str = ui->display->text();
    num.set_value(str.toDouble());
    num.set_value(num.cos_value());
    ui->display->setText(QString::number(num.get_value()));
}

void MainWindow::on_pushButton_tan_clicked()
{

    QString str;
    str = ui->display->text();
    num.set_value(str.toDouble());
    num.set_value(num.tg_value());
    ui->display->setText(QString::number(num.get_value()));
}



