#include "pch.h"
#include "Patient.h"


Patient::Patient()
{
}

Patient::Patient(string name1, string surname1, string diag)
{
	name = name1;
	surname = surname1;
	diagnosis = diag;
}


Patient::~Patient()
{
}


void Patient::set_FIO_patient(string n, string m, string s)
{
	name = n;
	surname = m;
	diagnosis = s;
}

void Patient::set_diagnosis(string diag)
{
	diagnosis = diag;
}

string Patient::get_diag() const
{
	return diagnosis;
}

void Patient::set_card(Patient_Card c)
{
	card = c;
}

Patient_Card Patient::get_card() const
{
	return card;
}

void Patient::set_house(House_Patient h)
{
	house = h;
}

House_Patient Patient::get_house() const
{
	return house;
}

string Patient::patient()
{
	return "Пациент - " + this->surname +" " + this->name +" "+ this->diagnosis;
}
