#pragma once
#include "Person.h"

class Child :
	public Person
{
	Person* Mother;
	Person* Father;
	std::string GetDescription();
	static Person* RandChild();
	int GetAge();
	void SetAge(int age);
	char School[100];
public:
	Child();
	~Child();
};
