#include "Adult.h"



std::string Adult::GetDescription()
{
	std::string tmpS = Surname + " " + Name + ", " + IntToStr(Age) + " years old," + SexToStr(sex);
	if (MarriedOn == nullptr)
	{
		tmpS = tmpS + ", single";
	}
	else
	{
		tmpS = tmpS + ", married on "+MarriedOn->Name+" "+MarriedOn->Surname;
	}
	/*if (WorkPlace!="")
	{
		tmpS = tmpS + ", " + WorkPlace;
	}
	else
	{
		tmpS = tmpS + ", unworked";
	}*/
	return tmpS;
}

void Adult::RandAdult(Adult * adult)
{
	adult->FillRandomPerson();
	adult->SetAge(25);
	adult->MarriedOn = nullptr;
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
	WorkPlace = "none";
}


Adult::~Adult()
{
}
