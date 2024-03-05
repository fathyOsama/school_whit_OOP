#include "Student.h"
int Student::counter = 0;
vector<Student> Student::students;
Student::Student()
{
	counter++;
}

Student::Student(string duilding_namber, int degrees[4], string name, int age, string address, string gender):Person(name,age,address,gender)
{
	duilding_namber = duilding_namber;
	degrees = degrees;
}


void Student::set_duilding_namber(string _duilding_namber)
{
	duilding_namber = _duilding_namber;
}

string Student::get_duilding_namber()
{
	return duilding_namber;
}

void Student::set_degrees(int* ptr)
{
	for (size_t i = 0; i < SIZE; i++)
	{
		degrees[i] = ptr[i];
	}
	
}

int* Student::get_degrees()
{
	return degrees;
}



void Student::add_students()
{
	int student_size;
	cout << "student_size = ";
	cin>> student_size;
	for (int i = 0; i < student_size; i++)
	{
		Student timpstudent;

		string student_name;
		cout << "Student_name = ";
		cin >> student_name;
	    timpstudent.set_name(student_name);
		//cout << timpstudent.get_name() << endl;

		int student_age;
		cout << "Student_age = ";
		cin >> student_age;
		timpstudent.set_age(student_age);
		//cout << timpstudent.get_age() << endl;

		string student_address;
		cout << "student_address = ";
		cin >> student_address;
		timpstudent.set_address(student_address);
		//cout << timpstudent.get_address() << endl;

		string student_gender;
		cout << "Student_gender = ";
		cin >> student_gender;
		timpstudent.set_gender(student_gender);
		//cout << timpstudent.get_gender() << endl;

		string student_duilding_namber;
		cout << "student_duilding_namber = ";
		cin >> student_duilding_namber;
		timpstudent.set_duilding_namber(student_duilding_namber);
		//cout << timpstudent.get_duilding_namber() << endl;

		int student_degrees[SIZE];
		int* ptrDegrees=&student_degrees[0];
		for (int j = 0; j < SIZE; j++)
		{
			int student_degrees;
			cout << "student_degrees = ";
			cin >> student_degrees;
			ptrDegrees[j] = student_degrees;
           
		}
		timpstudent.set_degrees(ptrDegrees);
		students.push_back(timpstudent);
		cout << "============================" << endl;
	}
	
}

void Student::prient_student()
{
	vector<Student>::iterator iter;

	for (iter = students.begin(); iter != students.end(); ++iter)
	{
		Student student;
		student = *iter;

		cout << "Student_name = " << student.get_name() << endl;
		cout << "Student_age = " << student.get_age() << endl;
		cout << "student_address = " << student.get_address() << endl;
		cout << "Student_gender = " << student.get_gender() << endl;
		cout << "student_duilding_namber = " << student.get_duilding_namber() << endl;
		for (int j = 0; j < SIZE; j++)
		{
			cout << "student_degrees = " <<student.get_degrees()[j] << endl;

		}
		cout << endl;

	}

}







