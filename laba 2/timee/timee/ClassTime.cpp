#include "pch.h"
#include <fstream>
#include <string>
#include <iomanip>
#include <iostream>
#include <math.h>
#include "ClassTime.h"

using namespace std;


// констуктур  по умолчанию
ClassTime::ClassTime()
{
	hours = 0;
	minutes = 0;
	seconds = 0;
}

//конструктор со значениями
ClassTime::ClassTime(int hours1, int minutes1, int seconds1) {

	set_hours(hours1);
	set_minutes(minutes1);
	set_seconds(seconds1);
}



void ClassTime::set_time(int hours1, int minutes1, int seconds1) {
	set_hours(hours1);
	set_minutes(minutes1);
	set_seconds(seconds1);
}


//переполнение в разряде секунд -> прибавляет переполнение к старшему разряду	
void ClassTime::overflow_seconds() {
	unsigned char t;
	if (seconds >= max_t) {
		t = seconds / max_t;
		if (t >= 1) {
			seconds -= max_t * t;
			minutes += t;
		}
	}
	overflow_minutes();
}

//переполнение в разряде минут -> прибавляет переполнение к старшему разряду 
void ClassTime::overflow_minutes() {
	unsigned char t;
	if (minutes >= max_t) {
		t = minutes / max_t;
		if (t >= 1) {
			minutes -= max_t * t;
			hours += t;
		}
	}
	overflow_hours();
}

// переполнение в разряде часов ->  присваевает остаток от деления к часам 
void ClassTime::overflow_hours() {
	unsigned char t, r;
	if (hours >= max_h) {
		t = hours / max_h;
		if (t >= 1) {
			r = hours % max_h;
			hours = r;
		}
	}
}


//устанавливают значение часов, минут, секунд
void ClassTime::set_seconds(int seconds1) {
	if ((seconds1 >= 0) && (seconds1 < max_t))
		seconds = seconds1;
}
void ClassTime::set_minutes(int minutes1) {
	if ((minutes1 >= 0) && (minutes1 < max_t))
		minutes = minutes1;
}
void ClassTime::set_hours(int hours1) {
	if ((hours1 >= 0) && (hours1 < max_h))
		hours = hours1;
}


//вывод времени на экран
void ClassTime::print_time(const ClassTime &t) {
	//cout << "Часы:" << hours << "Минуты:" << minutes << "Секунды:" << seconds << endl;
	cout << hours << ":" << minutes << ":" << seconds << endl;
}

//оператор +
ClassTime ClassTime::operator + (const ClassTime &t) {
	ClassTime a;
	cout << "Вызвался оператор +" << endl;
	a.seconds = seconds + t.seconds;
	a.minutes = minutes + t.minutes;
	a.hours = hours + t.hours;

	if (a.seconds > 59)
	{
		a.seconds -= 60;
		a.minutes++;
	}
	if (a.minutes > 59)
	{
		a.minutes -= 60;
		a.hours++;
	}
	if (a.hours > 23)
	{
		a.hours -= 24;
	}
	return a;
}

//оператор -
ClassTime ClassTime::operator - (const ClassTime &t) {
	ClassTime a;
	cout << "Вызвался оператор -" << endl;
	a.set_time(hours - t.hours, minutes - t.minutes, seconds - t.seconds);
	overflow_seconds();
	return a;
}

//добавление секунд, минут, часов
void ClassTime::add_seconds(unsigned int s) {
	if (s >= 0) {
		seconds = seconds + s;
		overflow_seconds();
	}
}
void ClassTime::add_minutes(unsigned int m) {
	if (m >= 0) {
		minutes = minutes + m;
		overflow_minutes();
	}
}
void  ClassTime::add_hours(unsigned int h) {
	if (h >= 0) {
		hours = hours + h;
		overflow_hours();
	}
}


//добавление часов и минут, и секунд
void ClassTime::add_time(int hours1, int minutes1, int seconds1) {

	if ((hours1 >= 0) && (minutes1 >= 0) && (seconds1 >= 0)) {
		hours += hours1;
		minutes += minutes1;
		seconds += seconds1;
		overflow_seconds();
	}
}


//преобразование в строку
string ClassTime::toStr()
{
	return to_string(hours) + ":" + to_string(minutes) + ":" + to_string(seconds);
}


//перевод в секунды,минуты, часы
float ClassTime::mintohours(int m) {
	return m / 60.0;
}

float ClassTime::mintoseconds(int m) {
	return m / 60.0;
}

float ClassTime::hourstomin(int h) {
	return h * 60.0;
}

float ClassTime::hourstoseconds(int h) {
	return h * 3600.0;
}

float ClassTime::secondstomin(int s) {
	return s / 60.0;
}

float ClassTime::secondstohours(int s) {
	return s / 3600.0;
}

float ClassTime::translate_minutes(ClassTime a) {
	return minutes + a.secondstomin(seconds) + a.hourstomin(hours);
}

float ClassTime::translate_seconds(ClassTime a) {
	return seconds += a.hourstoseconds(seconds) + a.mintoseconds(hours);
}

float ClassTime::translate_hours(ClassTime a) {
	return hours += a.mintohours(seconds) + a.secondstohours(hours);
}



//oператоры сравнения
bool ClassTime::operator == (const ClassTime& w)
{
	ClassTime q;
	return (q == w);
}

bool ClassTime::operator != (const ClassTime& w)
{
	ClassTime q;
	return (q != w);
}

bool ClassTime::operator > (const ClassTime& w)
{
	ClassTime q;
	return ((q > w) && (q != w));
}

bool ClassTime::operator < (const ClassTime& w)
{
	ClassTime q;
	return ((q < w) && (q != w));
}

bool ClassTime::operator <= (const ClassTime& w)
{
	ClassTime q;
	return ((q == w) || (q < w));
}

bool ClassTime::operator >= (const ClassTime& w)
{
	ClassTime q;
	return ((q == w) || (q > w));
}
