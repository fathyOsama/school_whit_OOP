#pragma once
#include "Student.h"
class CridetStudent : public Student
{
	int payments[4];
public:
	CridetStudent(int payments[4], string duilding_namber, int degrees[4], string name, int age, string address, string gender);
	void set_payments(int*_payments);
	int* get_payments();
};

