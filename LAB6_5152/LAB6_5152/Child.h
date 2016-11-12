#pragma once
#include "Person.h"

class Child :
	public Person
{
public:
	Person* Mother = nullptr;
	Person* Father=nullptr;
	std::string GetDescription();
	static void RandChild(Child * child);
	int GetAge();
	void SetAge(int age);
	std::string School = " ";
	Child();
	~Child();
};
