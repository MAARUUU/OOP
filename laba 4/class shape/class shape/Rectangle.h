#pragma once
#include "Shape.h"

//����� �������������
class Rectangle :
	public Shape
{
private:

	float a, b; //������� ��������������

public:
	Rectangle();
	Rectangle(float s, float d);
	~Rectangle();
	void set_a(float s);
	void set_b(float d);
	float get_a()const;
	float get_b()const;
	float area() override; //������� �������������� 
	float perimetr() override; //�������� �������������� 
	float radius() const;    //������ ���������� ��������� ������ 
	float diagonal() const; //��������� �������������� 
};

