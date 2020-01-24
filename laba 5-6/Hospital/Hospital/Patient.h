#pragma once
#include "Man.h"
#include "Patient_Card.h"
#include "House_Patient.h"
#include "Doctor.h"


class Doctor;

// класс пациент
class Patient :
	public Man
{
private:
	string diagnosis; //диагноз больного
public:
	Patient_Card card; //карта больного
	House_Patient house; //палата больного
	Patient();
	Patient(string name1,string surname1,string diag);
	~Patient();
	void set_FIO_patient(string n, string m, string s);
	void set_diagnosis(string diag);
	string get_diag() const;
	void set_card(Patient_Card c);
	Patient_Card get_card() const;
	void set_house(House_Patient h);
	House_Patient get_house() const;
	string patient();

	
};

