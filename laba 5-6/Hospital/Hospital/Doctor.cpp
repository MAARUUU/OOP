#include "pch.h"
#include<iostream>
#include "Doctor.h"


Doctor::Doctor()
{
}


Doctor::~Doctor()
{
}

Doctor::Doctor(string a, string b, string c, string h)
{
	name_doctor = b;
	surname_doctor = a;
	fullname = c;
	work = h;
}

void Doctor::set_doctor(string a1, string b1, string c1, string h1)
{
	name_doctor = b1;
	surname_doctor = a1;
	fullname = c1;
	work = h1;
}

void Doctor::set_name_doctor(string k)
{
	name_doctor = k;
}

string Doctor::get_name_doctor() const
{
	return name_doctor;
}

void Doctor::set_surname_docor(string s)
{
	surname_doctor = s;
}

string Doctor::get_surname_doctor() const
{
	return surname_doctor;
}

void Doctor::set_fullname(string q)
{
	fullname = q;
}

string Doctor::get_fullname() const
{
	return fullname;
}

void Doctor::set_work(string w)
{
	work = w;
}

string Doctor::get_work() const
{
	return work;
}

void Doctor::patients_push_back(Patient* item)
{
	m_patient.push_back(item);
}

void Doctor::patients_erase(Patient* item)
{
	vector<Patient*>::iterator iter;
	for (iter = m_patient.begin(); iter < m_patient.end(); iter++) {
		if (*iter == item) {
			m_patient.erase(iter);
			break;
		}
	}
}

void Doctor::patients_print()
{
	vector<Patient*>::const_iterator const_iter;
	for (const_iter = m_patient.begin(); const_iter < m_patient.end(); const_iter++) {
		std::cout << (**const_iter).get_FIO() <<" "<< (**const_iter).get_diag() << std::endl;
	}
}

string Doctor::doctor()
{
	return ("Врач - " + this->surname_doctor +" "+this->name_doctor+" "+ this->fullname+" "+ this->work);

}



