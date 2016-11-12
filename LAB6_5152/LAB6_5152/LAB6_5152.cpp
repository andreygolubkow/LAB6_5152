#include "Adult.h"
#include "Child.h"
#include "Person.h"
#include "Sex.h"
#include "PersonList.h"
#include <iostream>

using namespace std;

int main()
{
	PersonList personList;

	Child * childPointer = new Child();
	Adult * adultPointer = new Adult();

	Child::RandChild(childPointer);
	Adult::RandAdult(adultPointer);
	personList.Add(childPointer);
	personList.Add(adultPointer);

	for (int i = 0;i<personList.GetCount();i++)
	{
		Person * personTemp = personList.Find(i);
			if (personTemp->GetAge() < 18)
			{
				cout <<"\nThis is child";
					Child * child = (Child*)personTemp;
					cout << child->GetDescription();
			}
			else
			{
				cout << "\nThis is adult";
				Adult * adult = (Adult*)personTemp;
				cout << adult->GetDescription();
			}
	}
	return 0;
}