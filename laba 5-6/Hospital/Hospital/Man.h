#pragma once
#include <string>

using namespace std;
//����� �������
class Man 
{
protected:
	string name; // ��� 
	string surname;// �������
public:
	Man();
	~Man();
	Man(string name1,string surname1);
	void set_name(string name1);
	void set_surname(string surname1);
	string get_name() const;
	string get_surname() const;
	string get_FIO() const;
};

