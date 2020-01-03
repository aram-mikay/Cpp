#include <iostream>
#include "Header.h"
using namespace std;
int main()
{
	int size1;
	int size2;
	int element;
	cout << "Enter the size of the first set 1" << endl;
	cin >> size1;
	cout << "Enter the size of the second set 2" << endl;
	cin >> size2;
	Sets set1(size1), set2(size2);
	cout << "Enter " << size1 << " elements for set 1" << endl;
	for (int i = 0; i < size1; i++)
	{
		cin >> element;
		set1.addElement(element, i);
	}
	cout << "Enter " << size2 << " elements for set 2" << endl;
	for (int i = 0; i < size2; i++)
	{
		cin >> element;
		set2.addElement(element, i);
	}

	set1.printOrderedPairs(set2);
	cout << endl;
	if (set1.isSubset(set2))
	{

		if (set1.isProper(set2))
		{
			cout << "Proper Subset\n";
		}
		else
		{
			cout << "Subset\n";
		}
	}
	else
	{
		cout << "Not Subset\n";
	}
	cout << endl;
	system("pause");
	return 0;
}