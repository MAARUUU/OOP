#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>
#include "ClassTime.h"
#include "filetime.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	ClassTime a_time(12, 56, 23);
	a_time.print_time(a_time);
	cout << "Перевод времени в часы  - " << a_time.translate_hours(a_time) << endl;
	cout << "Перевод времени в минуты  - "<< a_time.translate_minutes(a_time) << endl;
	cout << "Перевод времени в секунды  - " << a_time.translate_seconds(a_time) << endl;
	cout << endl;

	ClassTime b_time;
	b_time.set_time(8,25,11);
	b_time.print_time(b_time);
	cout << "Добавление  19 секунд - "; 
	b_time.add_seconds(19);
	b_time.print_time(b_time);
	cout << "Добавление  45 минут - ";
	b_time.add_minutes(45);
	b_time.print_time(b_time);
	cout << "Добавление  10 часов - ";
	b_time.add_hours(10);
	b_time.print_time(b_time);
	cout << endl;

	cout << "Операции:" << endl;
	ClassTime s_time(23, 59, 55);
	s_time.print_time(s_time);
	ClassTime d_time(0, 0, 5);
	d_time.print_time(d_time);
	ClassTime c_time;
	c_time = s_time + d_time;
	c_time.print_time(c_time);
	ClassTime z_time;
	z_time = s_time - d_time;
	z_time.print_time(z_time);


	


	//массив из объектов
	unsigned n = 4;
	vector<ClassTime> elArray(4);
	int h, m, s;
	ClassTime d;
	
	//добавление объектов в динам.массив
	for (unsigned i = 0; i < n; i++)
	{
		h = rand() % 24;
		m = rand() % 60;
		s = rand() % 60;
		ClassTime d(h, m, s);
		elArray.push_back(d);
	}


	//работа с файлами
	//запись в файл 
	string filename = "time.txt";
	write_file(d, filename, n);
	//чтение из файла
	elArray=read_file(filename);
	

	// динамический массив из указателей 
	vector<ClassTime*> dynamic;
	// добавление объектов в динамический массив
	for (unsigned i = 0; i < n; i++) {
		ClassTime* m = new ClassTime(i, i, i);
		dynamic.push_back(m);
	}

	// освобождение памяти, занимаемой объектами
	for (unsigned i = 0; i < dynamic.size(); i++) {
		delete dynamic[i];
	}

	system("pause");
	return 0;
}

