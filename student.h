#pragma once
#include <iostream>
#include <cstring> 
using namespace std;

class Student
{
private:

    unsigned int age;
    char* name;
    char* surname;
    static int count;

public:
    Student();
    Student(const char* name, const char* surname, unsigned int age);
    Student(const Student& other);

    static int getCount() { return count; }

    void Show();
    void SetAge(int age) { this->age = age; }
    ~Student();
};