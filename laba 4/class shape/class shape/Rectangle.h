#pragma once
#include "Shape.h"

//класс прямоугольник
class Rectangle :
	public Shape
{
private:

	float a, b; //стороны прямоугольника

public:
	Rectangle();
	Rectangle(float s, float d);
	~Rectangle();
	void set_a(float s);
	void set_b(float d);
	float get_a()const;
	float get_b()const;
	float area() override; //площадь прямоугольника 
	float perimetr() override; //периметр прямоугольника 
	float radius() const;    //радиус окружности описанной вокруг 
	float diagonal() const; //диагональ прямоугольника 
};

