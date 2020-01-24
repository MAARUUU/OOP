#pragma once
#include "Shape.h"

//����� �������
class Square :
	public Shape
{
private:

	float a; //������� ��������

public:
	Square();
	Square(float s);
	~Square();
	void set(float s);
	float get()const;
	float area() override; // ������� ��������
	float perimetr() override; //�������� ��������
	float diagonal() const; //��������� ��������
};
