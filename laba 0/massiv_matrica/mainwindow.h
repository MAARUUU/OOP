#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <vector>

using namespace std;

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
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();


    void on_spinBox_valueChanged(int arg1);

private:
    Ui::MainWindow *ui;
    unsigned n;
    double *a;
    vector<vector <int>> m;

};
#endif // MAINWINDOW_H
