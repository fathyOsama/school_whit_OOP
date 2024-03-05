#pragma once
#include<iostream>
using namespace std;
class Person
{
private:
	string name;
	int age;
	string address;
	string gender;
public:
	Person();
	Person(string name, int age, string address, string gender);
	void set_name(string name);
	string get_name();
	void set_age(int age);
	int get_age();
	void set_address(string address);
	string get_address();
	void set_gender(string gender);
	string get_gender();
};



