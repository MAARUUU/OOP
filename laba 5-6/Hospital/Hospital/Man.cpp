#include "pch.h"
#include "Man.h"


Man::Man()
{
}

Man::~Man()
{
}


Man::Man(string name1, string surname1)
{
	name = name1;
	surname = surname1;
}

void Man::set_name(string name1)
{
	name = name1;
}

void Man::set_surname(string surname1)
{
	surname = surname1;
}

string Man::get_name() const
{
	return name;
}

string Man::get_surname() const
{
	return surname;
}

string Man::get_FIO() const
{
	return ("Фамилия имя пациента: " + this->get_surname() + " " + this->get_name());
}
