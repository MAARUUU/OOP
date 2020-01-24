#include "pch.h"
#include "filetime.h"
#include <fstream>
#include <iostream>
#include <string>

//запись в файл
void write_file(const ClassTime &d, string filename, unsigned n)
{
	string str;
	int h, m, s;
	ofstream  f(filename);
	for (unsigned i = 0; i < n; i++)
	{
		h = rand() % 24;
		m = rand() % 60;
		s = rand() % 60;
		ClassTime d(h, m, s);
		str = d.toStr();
		f << str << endl;
	}
	f.close();
}


// функция подсчета символов
unsigned number_line(string filename, unsigned sum) 
{
	string line;
	ifstream f(filename);
	while (!f.eof()) {
		getline(f, line);
		sum++;
	}
	return sum;
}

//чтение из файла
vector <ClassTime> read_file(string filename) 
{
	int h, m, s, i = 0;
	unsigned sum = 0;
	vector<ClassTime> b;
	ifstream f(filename);
	sum = number_line(filename, sum);
	for (unsigned i = 0; i < sum; i++) {
		f >> h >> m >> s;
		ClassTime d(h, m, s);
		b.push_back(d);
	}
	f.close();
	return b;
};