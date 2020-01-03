/*Aram Mikayelian
CSIS 137 - FALL 2O17
HW #2 - INTEGERSET*/

#include <iostream>
#include "IntegerSet.h"

using namespace std;



IntegerSet::IntegerSet(int size)
{
	set = new double[size];
	numSize = size;

	for (int i = 0; i < numSize; i++)
	{
		set[i] = 0;
	}
}

IntegerSet::~IntegerSet()
{
	delete [] set;
}



void IntegerSet::unionOfSets(const IntegerSet &unionSet,const IntegerSet &set2)
{
	
	for (int i = 0; i < numSize; i++)
	{
		if (set[i] == 0 && set2.set[i] == 1 || set[i] == 1 && set2.set[i] == 0 || set[i] == 1 && set2.set[i] == 1)
		{
			unionSet.set[i] = 1;
		}
		else 
		{
			unionSet.set[i] = 0;
		}
	}
	
}



void IntegerSet::intersectionOfSets(const IntegerSet &intersect, const IntegerSet &set2)const
{

	for (int i = 0; i < numSize; i++)
	{
		if (set[i] == 1 && set2.set[i] == 1)
		{
			intersect.set[i] = 1;
		}
		else
		{
			intersect.set[i] = 0;
		}
	}

}


void IntegerSet::insertElement()const
{
	int choice = 0;

	for (int i = 0; i < numSize; i++)
	{
		cout << "Please enter if you would like an element in position #" << i + 1 << ": " << endl;
		cout << "1) Yes" << "\n2)No" << endl;
		cin >> choice;

		if (choice == 1)
		{
			set[i] = 1;
		}
		else
		{
			set[i] = 0;
		}
	}
}

void IntegerSet::printSet()const
{
	cout << " values in this set are: ";
	for (int i = 0; i < numSize; i++)
	{
		cout << set[i] << " ";
	}
	
	cout << endl;
}

bool IntegerSet::isEqual(const IntegerSet &equalSet)const
{
	int equal = false;

	for (int i = 0; i < numSize; i++)
	{
		if (set[i] == equalSet.set[i])
		{
			equal = true;
		}
	}

	if (equal)
	{
		cout << "Your original sets are equal!" << endl;
	}

	return equal;
}

void IntegerSet::deleteElement(int delNum)const
{
	set[delNum - 1] = 0;
}