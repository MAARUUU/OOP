#pragma once
#include "ClassTime.h"
#include "vector"

using namespace std;

void write_file(const ClassTime &d, string filename, unsigned n); // ������ � ����
vector <ClassTime> read_file(string filename); // ������ �� �����
unsigned number_line(string filename, unsigned sum); // ������� �������� ��������