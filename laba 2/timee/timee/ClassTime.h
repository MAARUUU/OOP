#pragma once
#include <iostream>
#include <string>

const auto max_t = 60;
const auto max_h = 24;

class ClassTime
{
private:

	int hours, minutes, seconds; // часы, минуты, секунды


public:
	ClassTime();

	//конструктор со значениями
	ClassTime(int hours1, int minutes1, int seconds1);

	//переполнение в разряде секунд -> прибавляет переполнение к старшему разряду	
	void overflow_seconds();
	//переполнение в разряде минут -> прибавляет переполнение к старшему разряду 
	void overflow_minutes();
	// переполнение в разряде часов ->  присваевает остаток от деления к часам 
	void overflow_hours();


	//устанавливают значение часов, минут, секунд
	void set_seconds(int seconds1);
	void set_minutes(int minutes1);
	void set_hours(int hours1);
	//устанавливает знач. времени без проверки 
	void set_time(int hours1, int minutes1, int seconds1);


	//вывод времени на экран
	void print_time(const ClassTime &t); 


	//операторы
	//оператор +
	ClassTime operator + (const ClassTime& t);
	//оператор -
	ClassTime operator - (const ClassTime& t);

	//добавление секунд, минут, часов
	void add_seconds(unsigned int s);
	void add_minutes(unsigned int m);
	void add_hours(unsigned int h);
	//добавление часов и минут, и секунд
	void add_time(int hours1, int minutes1, int seconds1);

	//преобразование в строку
	std::string toStr();

	//перевод в секунды,минуты, часы
	float mintohours(int m);
	float mintoseconds(int m);
	float hourstomin(int h);
	float hourstoseconds(int h);
	float secondstomin(int s);
	float secondstohours(int s);
	float translate_minutes(ClassTime a);
	float translate_seconds(ClassTime a);
	float translate_hours(ClassTime a);


	//oператоры сравнения
	bool operator == (const ClassTime& w);
	bool operator != (const ClassTime& w);
	bool operator > (const ClassTime& w);
	bool operator < (const ClassTime& w);
	bool operator <= (const ClassTime& w);
	bool operator >= (const ClassTime& w);
};

