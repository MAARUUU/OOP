#pragma once
#include <vector>

using namespace std;
using funType = float (*)(unsigned, unsigned, float);

class Matrix
{
private:
	vector<vector<float>> matrix;
public:
	Matrix();
	Matrix(unsigned k);
	Matrix(unsigned n, unsigned m);

	void fill_random(); //заполнение матрицы случайными числами 
	void fill_number(float number); //заполнение матрицы одним числом 

	Matrix operator + (const Matrix &b)const;//сложение матриц
	Matrix operator += (const Matrix&b); //+=
	Matrix operator - (const Matrix &b)const; //вычитание матриц
	Matrix operator -= (const Matrix&b); //-=
	Matrix operator * (float n) const; //умножение  на число  
	Matrix operator * (const Matrix&b) const; //умножение матрицы на матрицу
	Matrix operator *= (const Matrix&b); //*=

	void transpose(); //транспонирование 
	void diagonal(); // создание диагональной матрицы

	//вычисление определителя матрицы 1/2/3 порядка
	float Determinant_matr1x1();
	float Determinant_matr2x2();
	float Determinant_matr3x3();

	int get_elem(unsigned i, unsigned j);
	int get_element(unsigned i,unsigned j);//доступ к отдельным эл-там
	void init_element(unsigned i, unsigned j, float element);

	void apply(funType f); //применения функции к элементам функции

	void print(); //вывод на экран
};
