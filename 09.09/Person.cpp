#include "Person.h" // файл реализации!!
#include <iostream>
using namespace std;

Person::Person()
{
	name = nullptr;
	age = 0;
}

Person::Person(const char* n, int a)
{}

Person::~Person()
{
	delete[] name;
	age = 0;
}

void Person::Output()
{
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
}
