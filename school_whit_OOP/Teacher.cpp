#include "Teacher.h"

vector<Teacher>Teacher::teachers;
Teacher::Teacher()
{
}

Teacher::Teacher(string subject[3], string name, int age, string address, string gender) :Person(name, age, address, gender)
{
	subject = subject;

}

void Teacher::set_subject(string* _subject)
{
	int size = sizeof(subject) / sizeof(_subject[0]);
	for (int i = 0; i < size; i++)
	{
		subject[i] = _subject[i];
	}
}

string* Teacher::get_subject()
{
	return subject;
}

void Teacher::add_teacher()
{
	int teacher_size;
	cin >> teacher_size;
	for (int i = 0; i < teacher_size; i++)
	{
		Teacher timpteacher;

		string teacher_name;
		cout << "teacher_name = ";
		cin >> teacher_name;
		timpteacher.set_name(teacher_name);
		cout << timpteacher.get_name() << endl;

		int teacher_age;
		cout << "teacher_age = ";
		cin >> teacher_age;
		timpteacher.set_age(teacher_age);
		cout << timpteacher.get_age() << endl;

		string teacher_address;
		cout << "teacher_address = ";
		cin >> teacher_address;
		timpteacher.set_address(teacher_address);
		cout << timpteacher.get_address() << endl;

		string teacher_gender;
		cout << "teacher_gender = ";
		cin >> teacher_gender;
		timpteacher.set_gender(teacher_gender);
		cout << timpteacher.get_gender() << endl;

		string teacher_subject[4];
		string* ptr_subject=&teacher_subject[0];
		for (int j = 0; j < 4; j++)
		{
			string teacher_subject;
			cout << "teacher_subject = ";
			cin >> teacher_subject;
			ptr_subject[j] = teacher_subject;
		}
		timpteacher.set_subject(ptr_subject);
		teachers.push_back(timpteacher);

	}
}

void Teacher::prient_teacher()
{
	vector<Teacher>::iterator iter;
	for (iter = teachers.begin(); iter != teachers.end(); ++iter)
	{
		Teacher teacher;
		teacher = *iter;
		cout << "teacher_name = " << teacher.get_name() << endl;
		cout << "teacher_age = " << teacher.get_age() << endl;
		cout << "teacher_address = " << teacher.get_address() << endl;
		cout << "teacher_gender = " << teacher.get_gender() << endl;
		for (int j = 0; j < 4; j++)
		{
			cout << "teacher_subject = " << teacher.get_subject() << endl;
		}
		cout << endl;
	}
}

void Teacher::print()
{
	Person::prient();
	cout << "subject = " << subject << endl;
}
