#ifndef TABLEWIDGET_H
#define TABLEWIDGET_H



#include<QtWidgets/QTableWidget>

class TableWidget : public QTableWidget{

    Q_OBJECT

public:
    TableWidget(QTableWidget *parent=nullptr);
    ~TableWidget();

public Q_SLOTS:
    void NewRowColumn(int N){
        this->setColumnCount(N);
        this->setRowCount(N);
    }

                                 };
#endif // TABLEWIDGET_H
