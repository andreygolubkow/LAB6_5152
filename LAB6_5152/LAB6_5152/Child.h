#pragma once
#include "Person.h"
using namespace std;
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
	string School;
	Child();
	~Child();
};
