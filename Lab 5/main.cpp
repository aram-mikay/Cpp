#include <iostream>
#include "Set.h"
using namespace std;
int main()
{

	int element;
	bool loop = true;
	Sets set1, set2, set3;
	cout << "Enter elements for set 1 and set 3" << endl;
	for (int i = 0; i < MAX_SIZE; i++)
	{
		cin >> element;
		if (element != 0)
		{
			set1.addElement(element, i);
			set3.addElement(element, i);
		}
		else if (element == 0)
		{
			i = MAX_SIZE + 1;
		}

	}
	cout << "Enter elements for set 2" << endl;
	for (int i = 0; i < MAX_SIZE; i++)
	{
		cin >> element;
		if (element != 0)
		{
			set2.addElement(element, i);
		}
		else if (element == 0)
		{
			i = MAX_SIZE + 1;
		}
	}
	
	cout << endl << "Set 1: ";
	set1.printSet();
	cout << endl << endl;

	cout << "Set 2: ";
	set2.printSet();
	cout << endl << endl;

	cout << "Set 3: ";
	set3.printSet();
	cout << endl << endl;

	cout << "Doing Union of Set 1 and Set 2" << endl;
	set1.unionOps(set2);

	cout << endl << "Set 1: ";
	set1.printSet();
	cout << endl << endl;

	cout << "Set 2: ";
	set2.printSet();
	cout << endl << endl;

	cout << "Set 3: ";
	set3.printSet();
	cout << endl << endl;

	cout << "Doing Intersection of Set 2 and Set 3" << endl << endl;
	set3.intersection(set2);

	cout << endl << "Set 1: ";
	set1.printSet();
	cout << endl << endl;

	cout << "Set 2: ";
	set2.printSet();
	cout << endl << endl;

	cout << "Set 3: ";
	set3.printSet();
	cout << endl << endl;

	cout << endl << endl;
	system("pause");
	return 0;
}