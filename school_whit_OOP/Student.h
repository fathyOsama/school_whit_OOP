#pragma once
#include "Person.h"
#include "vector"
class Student:public Person
{
private:
	int duilding_namber;
    static const int SIZE = 4;
	int degrees[SIZE];
	static vector<Student> students;
public:
	static int counter;
	Student();
	Student(int duilding_namber, int degrees[4], string name, int age, string address, string gender);
	void set_duilding_namber(int duilding_namber);
	int get_duilding_namber();
	void set_degrees(int* ptr);
	static void add_students();
	static void prient_student();
	void prient();
};

