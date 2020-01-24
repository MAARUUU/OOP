#include "pch.h"
#include "Rectangle.h"
#include "math.h"


Rectangle::Rectangle()
{
}


Rectangle::~Rectangle()
{
}


Rectangle::Rectangle(float s, float d)
{
	if ((s > 0)&(d > 0))
		a = s;
	b = d;
}

void Rectangle::set_a(float s)
{
	if (s > 0)
		a = s;
}

void Rectangle::set_b(float d)
{
	if (d > 0)
		b = d;
}

float Rectangle::get_a()const
{
	return a;
}


float Rectangle::get_b()const
{
	return b;
}

//������� �������������� 
float Rectangle::area()
{
	return a * b;
}

//�������� �������������� 
float Rectangle::perimetr()
{
	return 2 * a + 2 * b;
}

// ������ ���������� ��������� ������ ��������������
float Rectangle::radius() const
{
	return (sqrt(a*a + b * b)) / 2;
}

//��������� �������������� 
float Rectangle::diagonal() const
{
	return sqrt(a*b);
}