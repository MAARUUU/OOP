#include "pch.h"
#include <iostream>
#include "ClassMatrix.h"
#include <ctime>
#include<iomanip>
#include<vector>

using namespace std;

Matrix::Matrix()
{
	matrix.resize(2);
	for (unsigned i = 0; i < matrix.size(); i++)
		matrix[i].resize(2);
}

Matrix::Matrix(unsigned l)
{
	matrix.resize(l);
	for (unsigned i = 0; i < l; i++)
		matrix[i].resize(l);
}

Matrix::Matrix(unsigned n, unsigned m)
{
	matrix.resize(n);
	for (unsigned i = 0; i < n; i++)
		matrix[i].resize(m);
}

//���������� ������� ���������� ������� 
void Matrix::fill_random()
{
	for (unsigned i = 0; i < matrix.size(); i++) {
		for (unsigned j = 0; j < matrix[i].size(); j++) {
			matrix[i][j] = rand() % 20;
		}
	}
}

//���������� ������� ����� ������
void Matrix::fill_number(float number) {
	for (unsigned i = 0; i < matrix.size(); i++)
	{
		for (unsigned j = 0; j < matrix[i].size(); j++) {
			matrix[i][j] = number;
		}
	}
}

//�������� ������
Matrix Matrix::operator + (const Matrix&b) const
{
	Matrix a(matrix.size(), matrix[0].size());
	for (unsigned i = 0; i < matrix.size(); i++) {
		for (unsigned j = 0; j < matrix[i].size(); j++) {
			a.matrix[i][j] = matrix[i][j] + b.matrix[i][j];
		}
	}
	return a;
}


// +=
Matrix Matrix::operator += (const Matrix&b)
{
	Matrix a(matrix.size(), matrix[0].size());
	for (unsigned i = 0; i < matrix.size(); i++) {
		for (unsigned j = 0; j < matrix[i].size(); j++) {
			matrix[i][j] += b.matrix[i][j];
		}
	}
	return *this;
}


//��������� ������
Matrix Matrix::operator - (const Matrix&b) const
{
	Matrix a(matrix.size(), matrix[0].size());
	for (unsigned i = 0; i < matrix.size(); i++) {
		for (unsigned j = 0; j < matrix[i].size(); j++) {
			a.matrix[i][j] = matrix[i][j] - b.matrix[i][j];
		}
	}
	return a;
}


// -=
Matrix Matrix::operator -= (const Matrix & b)
{
	Matrix a(matrix.size(), matrix[0].size());
	for (unsigned i = 0; i < matrix.size(); i++) {
		for (unsigned j = 0; j < matrix[i].size(); j++) {
			matrix[i][j] -= b.matrix[i][j];
		}
	}
	return *this;
}

//���������  �� �����
Matrix Matrix::operator * (float n) const
{
	Matrix a(matrix.size(), matrix[0].size());
	for (unsigned i = 0; i < matrix.size(); i++) {
		for (unsigned j = 0; j < matrix[i].size(); j++) {
			a.matrix[i][j] = matrix[i][j] * n;
		}
	}
	return a;
}

//��������� ������� �� �������
Matrix Matrix::operator * (const Matrix&b) const
{
	Matrix a(matrix.size(), matrix[0].size());
	for (unsigned i = 0; i < matrix.size(); i++) {
		for (unsigned j = 0; j < matrix[i].size(); j++) {
			for (unsigned k = 0; k < matrix[i].size(); k++)
				a.matrix[i][j] += matrix[i][k] * b.matrix[k][j];
		}
	}
	return a;
}



//*=                                                                          
Matrix Matrix::operator *= (const Matrix & b)
{
	Matrix a(matrix.size(), matrix[0].size());
	for (unsigned i = 0; i < matrix.size(); i++) {
		for (unsigned j = 0; j < matrix[i].size(); j++)
			for (unsigned k = 0; k < matrix[i].size(); k++) {
				a.matrix[i][j] += matrix[i][k] * b.matrix[k][j];
			}
	}
	return *this;
}


//����� �� �����
void Matrix::print()
{
	for (unsigned i = 0; i < matrix.size(); i++) {
		for (unsigned j = 0; j < matrix[i].size(); j++) {
			cout << setw(3) << matrix[i][j] << " ";
		}
		cout << "\n";
	}
}


//����������������
void Matrix::transpose()
{
	float s;
	for (unsigned i = 0; i < matrix.size(); i++)
		for (unsigned j = i; j < matrix[i].size(); j++) {
			s = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = s;
		}
}


// �������� ������������ �������
void Matrix::diagonal()
{
	Matrix d;
	for (unsigned i = 0; i < matrix.size(); i++) {
		for (unsigned j = 0; j < matrix[i].size(); j++) {
			if ((i != j)) {
				matrix[i][j] = 0;
			}
		}
	}
}


//���������� ������������
// ������� 1 �������
float Matrix::Determinant_matr1x1()
{
	float res;
	res = matrix[0][0];
	return res;
}


// ������� 2 �������
float Matrix::Determinant_matr2x2()
{
	float res;
	res = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
	return res;
}


// ������� 3 �������
float Matrix::Determinant_matr3x3()
{
	float res;
	res = ((matrix[0][0] * matrix[1][1] * matrix[2][2] + matrix[0][1] * matrix[1][2] * matrix[2][0] + matrix[2][1] * matrix[1][0] * matrix[0][2])
		- (matrix[2][0] * matrix[1][1] * matrix[0][2] + matrix[1][0] * matrix[0][1] * matrix[2][2] + matrix[2][1] * matrix[1][2] * matrix[0][0]));
	return res;
}


//������ � ��������� ��-���
int  Matrix::get_element(unsigned i, unsigned j) {
	return matrix[i - 1][j - 1];
}


int  Matrix::get_elem(unsigned i, unsigned j) {
	return matrix[i][j];
}

void Matrix::init_element(unsigned i, unsigned j, float element)
{
	matrix[i][j] = element;
}


//���������� ������� � ��������� �������
void Matrix::apply(funType f)
{
	for (unsigned i = 0; i < matrix.size(); i++)
	{
		for (unsigned j = 0; j < matrix[i].size(); j++)
		{
			matrix[i][j] = f(i, j, 0);
		}
	}
}



