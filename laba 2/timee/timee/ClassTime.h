#pragma once
#include <iostream>
#include <string>

const auto max_t = 60;
const auto max_h = 24;

class ClassTime
{
private:

	int hours, minutes, seconds; // ����, ������, �������


public:
	ClassTime();

	//����������� �� ����������
	ClassTime(int hours1, int minutes1, int seconds1);

	//������������ � ������� ������ -> ���������� ������������ � �������� �������	
	void overflow_seconds();
	//������������ � ������� ����� -> ���������� ������������ � �������� ������� 
	void overflow_minutes();
	// ������������ � ������� ����� ->  ����������� ������� �� ������� � ����� 
	void overflow_hours();


	//������������� �������� �����, �����, ������
	void set_seconds(int seconds1);
	void set_minutes(int minutes1);
	void set_hours(int hours1);
	//������������� ����. ������� ��� �������� 
	void set_time(int hours1, int minutes1, int seconds1);


	//����� ������� �� �����
	void print_time(const ClassTime &t); 


	//���������
	//�������� +
	ClassTime operator + (const ClassTime& t);
	//�������� -
	ClassTime operator - (const ClassTime& t);

	//���������� ������, �����, �����
	void add_seconds(unsigned int s);
	void add_minutes(unsigned int m);
	void add_hours(unsigned int h);
	//���������� ����� � �����, � ������
	void add_time(int hours1, int minutes1, int seconds1);

	//�������������� � ������
	std::string toStr();

	//������� � �������,������, ����
	float mintohours(int m);
	float mintoseconds(int m);
	float hourstomin(int h);
	float hourstoseconds(int h);
	float secondstomin(int s);
	float secondstohours(int s);
	float translate_minutes(ClassTime a);
	float translate_seconds(ClassTime a);
	float translate_hours(ClassTime a);


	//o�������� ���������
	bool operator == (const ClassTime& w);
	bool operator != (const ClassTime& w);
	bool operator > (const ClassTime& w);
	bool operator < (const ClassTime& w);
	bool operator <= (const ClassTime& w);
	bool operator >= (const ClassTime& w);
};

