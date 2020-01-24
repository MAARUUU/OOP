#pragma once
#include "Shape.h"

const  double pi = 3.141592653589793238463;

//класс круг
class Circle :
	public Shape
{
private:

	float r; //радиус круга

public:
	Circle();
	Circle(float d);
	~Circle();
	void set_r(float s);
	float get_r() const;
	float area() override; //площадь круга
	float perimetr() override; //периметр круга
	float diametr() const; //диаметр круга
};
