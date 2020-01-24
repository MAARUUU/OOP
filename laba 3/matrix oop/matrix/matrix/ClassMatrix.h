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

	void fill_random(); //���������� ������� ���������� ������� 
	void fill_number(float number); //���������� ������� ����� ������ 

	Matrix operator + (const Matrix &b)const;//�������� ������
	Matrix operator += (const Matrix&b); //+=
	Matrix operator - (const Matrix &b)const; //��������� ������
	Matrix operator -= (const Matrix&b); //-=
	Matrix operator * (float n) const; //���������  �� �����  
	Matrix operator * (const Matrix&b) const; //��������� ������� �� �������
	Matrix operator *= (const Matrix&b); //*=

	void transpose(); //���������������� 
	void diagonal(); // �������� ������������ �������

	//���������� ������������ ������� 1/2/3 �������
	float Determinant_matr1x1();
	float Determinant_matr2x2();
	float Determinant_matr3x3();

	int get_elem(unsigned i, unsigned j);
	int get_element(unsigned i,unsigned j);//������ � ��������� ��-���
	void init_element(unsigned i, unsigned j, float element);

	void apply(funType f); //���������� ������� � ��������� �������

	void print(); //����� �� �����
};
