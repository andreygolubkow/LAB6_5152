#include "Child.h"

std::string Child::GetDescription()
{
	std::string tmpS = Surname + " " + Name + ", " + IntToStr(Age) + " years old," + SexToStr(sex);
	if (Mother != nullptr && Father != nullptr)
	{
		tmpS = tmpS + ", Parents are " + Mother->Name + " and " + Father->Name;
	}
	else if (Mother!=nullptr)
	{
		tmpS = tmpS + ", Mother is " + Mother->Name ;
	}
	else if (Father != nullptr)
	{
		tmpS = tmpS + ", Father is " + Father->Name;
	}
	else
	{
		tmpS = tmpS + ", Parents are not specified";
	}
	
	if (School.empty() == false)
	{
		tmpS = tmpS + ", " + School;
	}
	return tmpS;
}

void Child::RandChild(Child * child)
{
	child->FillRandomPerson();
	child->SetAge(12);
	child->Father = nullptr;
	child->Mother = nullptr;
	child->School = "Rand School";	
}


int Child::GetAge()
{
	return Age;
}

void Child::SetAge(int age)
{
	if (age > 0 && age < 19)
	{
		Age = age;
	}
	else
	{
		Age = 1;
	}
}

Child::Child()
{
	Mother = nullptr;
	Father = nullptr;
}

Child::~Child()
{
}
