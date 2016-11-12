#include "Child.h"

std::string Child::GetDescription()
{
	std::string tmpS = Surname + " " + Name + ", " + IntToStr(Age) + " years old," + SexToStr(sex);
	if (Mother != NULL && Father != NULL)
	{
		tmpS = tmpS + ", Parents are " + Mother->Name + " and " + Father->Name;
	}
	else if (Mother!=NULL)
	{
		tmpS = tmpS + ", Mother is " + Mother->Name ;
	}
	else if (Father != NULL)
	{
		tmpS = tmpS + ", Father is " + Father->Name;
	}
	else
	{
		tmpS = tmpS + ", Parents are not specified";
	}
	if (School != "")
	{
		tmpS = tmpS + ", " + School;
	}
	return tmpS;
}

void Child::RandChild(Child * child)
{
	child->FillRandomPerson();
	child->SetAge(1 + rand() % 16);
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
}

Child::~Child()
{
}
