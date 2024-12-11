#include "student.h"


int Student::count = 0;

Student::~Student()
{
	cout << "Destruct\n";
	if (name != nullptr)
	{
		delete[]name;
	}
	if (surname != nullptr)
	{
		delete[]surname;
	}
	count--;
}
Student::Student()
{

	age = 0;
	name = nullptr;
	surname = nullptr;
	count++;
}
Student::Student(const char* name, const char* surname, unsigned int age)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);

	this->surname = new char[strlen(surname) + 1];
	strcpy_s(this->surname, strlen(surname) + 1, surname);
	this->age = age;
	count++;

}

Student::Student(const Student& other) : age(other.age) {
	this->name = new char[strlen(other.name) + 1];
	strcpy_s(this->name, strlen(other.name) + 1, other.name);
	this->surname = new char[strlen(other.surname) + 1];
	strcpy_s(this->surname, strlen(other.surname) + 1, other.surname);
	count++;
}

void Student::Show()////this
{
	cout << "Name: " << name << endl;
	cout << "Surname: " << this->surname << endl;
	cout << "Age: " << this->age << endl;
}