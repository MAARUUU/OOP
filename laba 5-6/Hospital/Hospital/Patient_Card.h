#pragma once
#include "Man.h"

//����� ����� ��������
class Patient_Card
{
private: 
	float number;//����� �����
	
public:
	Patient_Card();
	~Patient_Card();
	Patient_Card(float c);
	void set_card(float c);
	float get_number_card() const;
};

