#pragma once
#include "Man.h"
#include <vector>
#include <list>
#include<iostream>

class Patient;
//����� ������ ��������
class House_Patient
{
private:
	float num; //����� ������
	
public:
	House_Patient();
	~House_Patient();
	House_Patient(float n);
	void set_house(float n);
	float get_num_house() const;

};

