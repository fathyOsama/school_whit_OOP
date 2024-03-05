#pragma once
#include "Person.h"
#include "vector"
class Teacher : public Person
{
private:
	static const int size = 4;
	string subject[size];
	static vector<Teacher> teachers;
public:
	Teacher();
	Teacher(string subject[3], string name, int age, string address, string gender);
	void set_subject(string*_subject);
	string* get_subject();
	static void add_teacher();
	static void prient_teacher();
};

