#pragma once
#include "Shape.h"

const  double pi = 3.141592653589793238463;

//����� ����
class Circle :
	public Shape
{
private:

	float r; //������ �����

public:
	Circle();
	Circle(float d);
	~Circle();
	void set_r(float s);
	float get_r() const;
	float area() override; //������� �����
	float perimetr() override; //�������� �����
	float diametr() const; //������� �����
};
