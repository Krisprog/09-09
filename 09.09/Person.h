#pragma once
class Person  // ���� ������� !!!
{
	char* name;
	int age;
public:
	Person();
	Person(const char* n, int a);
	~Person();
	void Output();
};

