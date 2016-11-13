#include "Adult.h"



std::string Adult::GetDescription()
{
	string tmpS(Surname + " " + Name + ", " + IntToStr(Age) + " years old," + SexToStr(sex));
//	string tmpWrkPlace = WorkPlace;
	if (MarriedOn == nullptr)
	{
		tmpS = tmpS + ", single";
	}
	else
	{
		tmpS = tmpS + ", married on "+MarriedOn->Name+" "+MarriedOn->Surname;
	}
	if (WorkPlace.length()>0)
	{
		tmpS = tmpS + ", " +WorkPlace;
	}
	else
	{
		tmpS = tmpS + ", unworked";
	}
	return tmpS;
}

void Adult::RandAdult(Adult * adult)
{
	adult->FillRandomPerson();
	adult->SetAge(25);
	adult->MarriedOn = nullptr;
	adult->WorkPlace = " Rand workPlace";
	
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
	WorkPlace = "";
}


Adult::~Adult()
{

}
