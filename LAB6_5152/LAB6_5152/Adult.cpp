#include "Adult.h"



std::string Adult::GetDescription()
{
	return std::string();
}

void Adult::RandAdult(Adult * adult)
{
	adult->FillRandomPerson();
	adult->SetAge(20 + rand() % 50);
	adult->WorkPlace = "Random Work Company";
}


int Adult::GetAge()
{
	return 0;
}

void Adult::SetAge(int age)
{
}

Adult::Adult()
{
}


Adult::~Adult()
{
}
