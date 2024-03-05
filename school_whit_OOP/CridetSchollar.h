#pragma once
#include "Student.h"
class CridetSchollar : public Student
{
	int payments[4];
public:
	CridetSchollar(int payments[4],int duilding_namber, int degrees[4], string name, int age, string address, string gender);
	void set_payments(int*_payments);
	int* get_payments();
	void prient();
};

