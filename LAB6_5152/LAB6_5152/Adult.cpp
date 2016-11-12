#include "Adult.h"



std::string Adult::GetDescription()
{
	std::string tmpS = Surname + " " + Name + ", " + IntToStr(Age) + " years old," + SexToStr(sex);
	if (MarriedOn == NULL)
	{
		tmpS = tmpS + ", single";
	}
	else
	{
		tmpS = tmpS + ", married on "+MarriedOn->Name+" "+MarriedOn->Surname;
	}
	if (WorkPlace.length() != 0)
	{
		tmpS = tmpS + ", " + WorkPlace;
	}
	else
	{
		tmpS = tmpS + ", unworked";
	}
}

void Adult::RandAdult(Adult * adult)
{
	adult->FillRandomPerson();
	adult->SetAge(20 + rand() % 50);
	adult->WorkPlace = "tester in Random Work Company";
}


int Adult::GetAge()
{
	return Age;
}

void Adult::SetAge(int age)
{
	if (age > 17)
	{
		Age = age;
	}
	else
	{
		age = 18;
	}
}

Adult::Adult()
{
}


Adult::~Adult()
{
}
