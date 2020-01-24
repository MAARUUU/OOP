#include "pch.h"
#include "Square.h"
#include "math.h"

Square::Square()
{
}


Square::~Square()
{
}


Square::Square(float s)
{
	if (s > 0)
		a = s;
}


void Square::set(float s)
{
	if (s > 0)
		a = s;
}


float Square::get()const
{
	return a;
}

//площадь квадрата
float Square::area()
{
	return a * a;
}

//периметр квадрата
float Square::perimetr()
{
	return 4 * a;
}

//диагональ квадрата
float  Square::diagonal() const
{
	return sqrt(a*a + a * a);
}