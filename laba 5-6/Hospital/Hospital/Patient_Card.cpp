#include "pch.h"
#include "Patient_Card.h"


Patient_Card::Patient_Card()
{
}


Patient_Card::~Patient_Card()
{
}

Patient_Card::Patient_Card(float c)
{
	if (c > 0)
		number = c;
}

void Patient_Card::set_card(float c)
{
	if (c > 0)
		number = c;
}

float Patient_Card::get_number_card() const
{
	return number;
}
