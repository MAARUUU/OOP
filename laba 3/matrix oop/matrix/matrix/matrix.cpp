
#include "pch.h"
#include <iostream>
#include<vector>
#include "ClassMatrix.h"
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	Matrix s(3, 3);
	s.fill_number(5); //заполнение одним числом
	cout << "Заполнение матрицы одним числом" << endl << "Матрица S:" << endl;
	s.print();
	cout << "\n";
	cout << "Диагональная матрица:" << endl;
	s.diagonal();
	s.print();
	cout << "\n";

	Matrix a(3, 3);
	a.fill_random(); //заполнение матрицы случайными числами
	Matrix b(3, 3);
	b.fill_random();
	cout << "Матрица А:" << endl;
	a.print();
	cout << "\n";
	cout << "Транспонирование  матрицы А:" << endl;
	a.transpose();
	a.print();
	cout << "\n";
	cout << "Матрица В:" << endl;
	b.print();
	cout << "\n";

	float determinant = b.Determinant_matr3x3();
	cout << "Определитель матрицы В =" << determinant;
	cout << "\n";
	
	Matrix c(3, 3);

	cout << " А + В:" << endl;
	c = a + b;
	c.print();
	cout << "\n";
	cout << " А - В:" << endl;
	c = a - b;
	c.print();
	cout << "\n";
	cout << " А * В:" << endl;
	c = a * b;
	c.print();
	cout << "\n";
	cout << " А * 2:" << endl;
	c = a * 2;
	c.print();
	cout << "\n";
	c += a;
	c -= b;
	c *= a;
	
	a.apply([](unsigned i, unsigned j, float a)->float {return 42; });
	a.print();
	cout << "\n";

	a.get_element(1, 2);

	cout << " Решение СЛАУ:" << endl;
	Matrix H;

	H.init_element(0, 0, 3);
	H.init_element(0, 1, -2);
	H.init_element(1, 0, 5);
	H.init_element(1, 1, 1);
	cout << "\n";
	Matrix X;
	X.init_element(0, 0, -6);
	X.init_element(1, 0, 3);
	cout << "\n";

	Matrix f;
	f = H * X;
	X =  H ;

	cout << " f:" << endl;
	for (unsigned i = 0; i < 2; i++)
	{
		cout << " " << f.get_elem(i, 0) << endl;
	}
	cout << "\n";

	return 0;
}