#pragma once
#include "Person.h"
#include <string>

class Adult :
	public Person
{
public:
	Adult();
	~Adult();
	std::string GetDescription();
	static void RandAdult(Adult * adult);
	Person* MarriedOn = nullptr;
	int GetAge();
	void SetAge(int age);
	std::string WorkPlace = "";

};

