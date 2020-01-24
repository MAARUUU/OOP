#include "pch.h"
#include "Circle.h"


Circle::Circle()
{
}


Circle::~Circle()
{
}


Circle::Circle(float d)
{
	if (d > 0)
		r = d;
}

void Circle::set_r(float s)
{
	if (s > 0)
		r = s;
}


float Circle::get_r()const
{
	return r;
}

//площадь круга
float Circle::area()
{
	return r * r*pi;
}

//периметр круга
float Circle::perimetr()
{
	return 2 * pi*r;
}

//диаметр круга
float Circle::diametr() const
{
	return 2 * r;
}