#pragma once
#include "Man.h"
#include "Patient.h"
#include <string>
#include <vector>
#include <list>


//класс врач
using namespace std;
class Patient;

class Doctor
{
private:
	string name_doctor; // имя доктора
	string surname_doctor; // фамилия доктора
	string fullname; // отчество доктора
	string work; // 

	vector <Patient*> m_patient;
	
public:
	Doctor();
	~Doctor();
	Doctor(string a,string b,string c, string h);
	void set_doctor(string a1, string b1, string c1, string h1);
	void set_name_doctor(string k);
	string get_name_doctor() const;
	void set_surname_docor(string s);
	string get_surname_doctor() const;
	void set_fullname(string q);
	string get_fullname() const;
	void set_work(string w);
	string get_work() const;

	void  patients_push_back(Patient* item); //добавить пациента
	void  patients_erase(Patient* item); //удалить  пациента
	void patients_print();
	
	string doctor();

	
	
};

