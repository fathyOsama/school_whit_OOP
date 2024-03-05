#include "CridetStudent.h"

CridetStudent::CridetStudent(int payments[4], string duilding_namber, int degrees[4], string name, int age, string address, string gender):Student(duilding_namber,degrees, name, age, address, gender)
{
	payments = payments;
}

void CridetStudent::set_payments(int* _payments)
{
	int size = sizeof(payments) / sizeof(_payments[0]);
	for (int i = 0; i < size; i++)
	{
		payments[i] = _payments[i];
	}
}

int* CridetStudent::get_payments()
{
	return payments;
}



