#include "pch.h"
#include "House_Patient.h"


House_Patient::House_Patient()
{
}


House_Patient::~House_Patient()
{
}

House_Patient::House_Patient(float n)
{
	if (n > 0)
		num = n;
}

void House_Patient::set_house(float n)
{
	if (n > 0)
		num = n;
}

float House_Patient::get_num_house() const
{
	return num;
}


