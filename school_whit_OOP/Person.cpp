#include "Person.h"

Person::Person()
{
}

Person::Person(string _name,int _age,string _address,string _gender)
{
	name = _name;
	age = _age;
	address = _address;
	gender = _gender;
}

void Person::set_name(string _name)
{
	name = _name;
}

string Person::get_name()
{	
	return name;
}

void Person::set_age(int _age)
{
	age = _age;
}

int Person::get_age()
{
	return age;
}

void Person::set_address(string _address)
{
	address = _address;
}

string Person::get_address()
{
	return address;
}

void Person::set_gender(string _gender)
{
	gender = _gender;
}

string Person::get_gender()
{
	return gender;
}

void Person::prient()
{
	cout << "name = " << name << endl;
	cout << "age = " << age << endl;
	cout << "address = " << address << endl;
	cout << "gender = " << gender << endl;
}



