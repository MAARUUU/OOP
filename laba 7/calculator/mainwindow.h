#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "calculator.h"
#include <QPushButton>
#include <QLabel>
#include <QIcon>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();

    void on_C_clicked();

    void on_erase_clicked();

    void on_pushButton_dot_clicked();

    void on_pushButton_sign_clicked();

    void on_pushButton_add_clicked();

    void on_pushButton_equally_clicked();

    void on_pushButton_sub_clicked();

    void on_pushButton_mul_clicked();

    void on_pushButton_div_clicked();

    void on_pushButton_exp_clicked();

    void on_pushButton_ln_clicked();

    void on_pushButton_yx_clicked();

    void on_pushButton_sqrt_clicked();

    void on_pushButton_x2_clicked();

    void on_pushButton_sin_clicked();

    void on_pushButton_cos_clicked();

    void on_pushButton_tan_clicked();

private:
    Ui::MainWindow *ui;
    calculator num;
    QString operation; // для определения операции
    bool flag = 0;


    void addLabel(QPushButton *button,QLabel *label); // добавлениe текста на экран
    void checkOperation(); // проверка операции

};
#endif // MAINWINDOW_H
