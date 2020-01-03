#include "Set.h"
#include <iostream>
#include <iomanip>
using namespace std;
Sets::Sets()
{
	for (int i = 0; i < MAX_SIZE; i++)
	{
		array[i] = 0;
	}
	size = 0;
}
bool Sets::addElementValidation(int element, int index)
{
	for (int j = 0; j < MAX_SIZE; j++)
	{
		if (element == array[j]){
			cout << element << " is a duplicate not adding it to the set" << endl << endl;
			return false;
		}
		else if (element < 0){
			cout << element << " is a negative not adding it to the set" << endl << endl;
			return false;
		}
	}
	return true;
}
void Sets::addElement(int element, int index)
{
	if (addElementValidation(element, index))
	{
		array[index] = element;
		size++;
	}

}
int Sets::getElement(int index)
{
	if (index > size || index < 0)
	{
		return -1;
	}
	else
	{
		return array[index];
	}
}
int Sets::getSize()
{
	return size;
}

void  Sets::unionOps(Sets& b)
{
	for (int i = 0; i < b.getSize(); i++)
	{

		addElement(b.getElement(i), size);

	}
}
void  Sets::intersection(Sets& b)
{
	int tempAry[MAX_SIZE];
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < b.getSize(); j++)
		{
			if (getElement(i) == b.getElement(j))
			{
				tempAry[i] = b.getElement(j);
				count++;
			}
		}
	}
	for (int k = 0; k < count; k++)
	{
		array[k] = tempAry[k];
	}
}
void  Sets::printSet()
{
	for (int i = 0; i < MAX_SIZE; i++)
	{
		if (getElement(i)>0)
		{
			cout << getElement(i) << " ";
		}
	}
}
bool Sets::isSubset(Sets& b)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < b.size; j++)
		{
			if (array[i] == b.array[j])
			{
				count++;
			}
		}
	}
	if (size == count)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 1; j < size - 1; j++)
			{
				if (array[i] == array[i + j])
				{
					return true;
				}
				else if (size == b.size)
				{
					return true;
				}
			}

		}
	}
	else{
		return false;
	}

}
bool Sets::isProper(Sets& b)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < b.size; j++)
		{
			if (array[i] == b.array[j])
			{
				count++;
			}
		}
	}
	if (size == count)
	{
		int temp = 1;
		for (int i = 0; i < size; i++)
		{
			for (int j = 1; j < size + 1; j++)
			{
				if (array[i] == array[i + j])
				{
					temp++;
					if (temp >= 2){
						return false;
					}
				}
				else if (size == b.size)
				{
					return false;
				}
			}

		}
		return true;
	}
	else{
		return false;
	}
}
void Sets::printOrderedPairs(Sets& b)
{
	int count = 0;

	cout << "AxB\n";
	cout << "  ";
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < b.size; j++)
		{
			cout << "(" << array[i] << ", " << b.array[j] << "), " << setw(3);
			count++;
			if (!(count % 3))
			{
				cout << endl;
			}
		}
	}
}