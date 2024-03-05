#pragma once
#include "Person.h"
#include "vector"
class Student:public Person
{
private:
	string duilding_namber;
    static const int SIZE = 4;
	int degrees[SIZE];
	static vector<Student> students;
public:
	static int counter;
	Student();
	Student(string duilding_namber, int degrees[4], string name, int age, string address, string gender);
	void set_duilding_namber(string duilding_namber);
	string get_duilding_namber();
	void set_degrees(int* ptr);
	int* get_degrees();
	static void add_students();
	static void prient_student();
};

