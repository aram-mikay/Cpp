#include "Header.h"
#include <iostream>
#include <iomanip>
using namespace std;
Sets::Sets(int size1)
{
	size = size1;
	array = new int[size];
}
void Sets::addElement(int i, int index)
{
	array[index] = i;
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
bool Sets::isSubset(const Sets& b)
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
bool Sets::isProper(const Sets& b)
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
		int temp=1;
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
void Sets::printOrderedPairs(const Sets& b)
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