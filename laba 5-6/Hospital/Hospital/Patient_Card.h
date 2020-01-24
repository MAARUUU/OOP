#pragma once
#include "Man.h"

//класс карта больного
class Patient_Card
{
private: 
	float number;//номер карты
	
public:
	Patient_Card();
	~Patient_Card();
	Patient_Card(float c);
	void set_card(float c);
	float get_number_card() const;
};

