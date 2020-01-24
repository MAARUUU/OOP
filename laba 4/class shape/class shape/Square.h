#pragma once
#include "Shape.h"

//класс квадрат
class Square :
	public Shape
{
private:

	float a; //сторона квадрата

public:
	Square();
	Square(float s);
	~Square();
	void set(float s);
	float get()const;
	float area() override; // площадь квадрата
	float perimetr() override; //периметр квадрата
	float diagonal() const; //диагональ квадрата
};
