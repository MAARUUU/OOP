#include "pch.h"
#include <iostream>
#include <string>
#include "Man.h"
#include "Doctor.h"
#include "House_Patient.h"
#include "Patient.h"
#include "Patient_Card.h"

using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");

	Man e("Сергей", "Иванов");
	cout << "Фамилия и Имя человека - " << e.get_name() << " " << e.get_surname() << endl;
	cout << "\n";
	Patient_Card g(231);
	House_Patient f(3);
	
	cout << "Номер карты пациента - " << g.get_number_card() << endl << "Номер палаты пациента - " << f.get_num_house() << endl;
	cout << "\n";
	Doctor h("Селиванов", "Игорь", "Алексеевич", "Хирург");
	cout << "Лечащий врач -" << h.get_surname_doctor() << " " << h.get_name_doctor() << " " << h.get_fullname() << " " << h.get_work() << endl;
	cout << "\n";
	cout << "\n";

	Patient nn("Сергей", "Иванов", "Аппендицит");
	cout << "Фамилия, Имя и диагноз пациента - " << nn.get_name() << " " << nn.get_surname() << " " << nn.get_diag() << endl;

	nn.card = g;
	nn.house = f;

	cout << "Карта пациента Иванова - " << nn.get_card().get_number_card() << endl;
	cout << "Палата пациента Иванова - " << nn.house.get_num_house() << endl;


	cout << "\n";
	Doctor doctor_1("Леонтьев", "Григорий", "Сергеевич", "Хирург");
	cout << "Лечащий врач -" << doctor_1.get_surname_doctor() << " " << doctor_1.get_name_doctor() << " " << doctor_1.get_fullname() << " " << doctor_1.get_work() << endl;
	cout << "\n";

	Patient*patient1 = new Patient();
	patient1->set_FIO_patient("Максим", "Летов", "ОРВИ");
	Patient*patient2 = new Patient();
	patient2->set_FIO_patient("Николай", "Филатов", "Перелом");
	Patient*patient3 = new Patient();
	patient3->set_FIO_patient("Елена", "Смирнова", "Сердце");
	Patient*patient4 = new Patient();
	patient4->set_FIO_patient("Сергей","Никитин","Травма головы");

	cout << "Пациенты Леонтьева: "<<endl;
	doctor_1.patients_push_back(patient2);
    doctor_1.patients_push_back(patient3);
	doctor_1.patients_push_back(patient4);
	
	doctor_1.patients_print();
	cout<<"\n";
	doctor_1.patients_erase(patient3);
	cout << "Список пациентов после удаления: "<<endl;
	doctor_1.patients_print();
	

	delete patient1;
	delete patient2;
	delete patient3;
	delete patient4;
	
	system("pause");
}