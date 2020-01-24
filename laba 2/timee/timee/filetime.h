#pragma once
#include "ClassTime.h"
#include "vector"

using namespace std;

void write_file(const ClassTime &d, string filename, unsigned n); // запись в файл
vector <ClassTime> read_file(string filename); // чтение из файла
unsigned number_line(string filename, unsigned sum); // функция подсчета символов