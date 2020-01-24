#pragma once

//класс фигура
class Shape
{
public:
	Shape();
	~Shape();

	float virtual area() = 0; // площадь
	float virtual perimetr() = 0;  //периметр
};