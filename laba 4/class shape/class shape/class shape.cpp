#include "pch.h"
#include <iostream>
#include <vector>
#include "Shape.h"
#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"

using namespace std;

int main()
{
	setlocale(0, "RUS");
	Square d(2);

	Square a;
	a.set(5);
	float a1 = a.get();
	cout << "Сторона квадрата - " << a1 << endl;
	cout << "\n";

	float s = a.area();
	cout << "Площадь квадрата = " << s << endl;
	float f = a.diagonal();
	cout << "Диагональ квадрата = " << f << endl;
	float w = a.perimetr();
	cout << "Периметр квадрата = " << w << endl;

	cout << "\n";

	Rectangle b;
	b.set_a(3);
	b.set_b(5);
	float b1 = b.get_a();
	float b2 = b.get_b();
	cout << "Стороны прямоугольника - " << b1 << "," << b2 << endl;
	cout << "\n";

	float h = b.area();
	cout << "Площадь прямоугольника = " << h << endl;
	float j = b.diagonal();
	cout << "Диагональ прямоугольника = " << j << endl;
	float l = b.perimetr();
	cout << "Периметр прямоугольника = " << l << endl;
	float q = b.radius();
	cout << "Радиус окружности описанной вокруг прямоугольника = " << q << endl;

	cout << "\n";

	Circle z;
	z.set_r(5);
	float s1 = z.get_r();
	cout << "Радиус круга - " << s1 << endl;
	cout << "\n";

	float p = z.area();
	cout << "Площадь круга = " << p << endl;
	float u = z.diametr();
	cout << "Диагональ круга = " << u << endl;
	float e = z.perimetr();
	cout << "Периметр круга = " << e << endl;


cout << endl;	
	vector <Shape*> h1;
	h1.resize(3);
	
	Rectangle *h11 = new Rectangle(2, 5);
	Square *h12 = new Square(4);
	Circle *h13 = new Circle(5);
	h1[0] = h11;
	h1[1] = h12;
	h1[2] = h13;

	for (unsigned i = 0; i < h1.size(); i++)
	{
		cout << h1[i]->area() << endl;
	}
	

	system("pause");
}
