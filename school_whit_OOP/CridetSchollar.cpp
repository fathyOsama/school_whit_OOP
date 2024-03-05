#include "CridetSchollar.h"

CridetSchollar::CridetSchollar(int payments[4], int duilding_namber, int degrees[4], string name, int age, string address, string gender):Student(duilding_namber,degrees, name, age, address, gender)
{
	payments = payments;
}

void CridetSchollar::set_payments(int* _payments)
{
	int size = sizeof(payments) / sizeof(_payments[0]);
	for (int i = 0; i < size; i++)
	{
		payments[i] = _payments[i];
	}
}

int* CridetSchollar::get_payments()
{
	return payments;
}

void CridetSchollar::prient()
{
	Person::prient();
	Student::prient();
	cout << "payments = " << payments << endl;
}

