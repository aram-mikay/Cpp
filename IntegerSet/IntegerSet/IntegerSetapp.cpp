/*Aram Mikayelian
CSIS 137 - FALL 2O17
HW #2 - INTEGERSET*/


#include <iostream>
#include <string>
#include "IntegerSet.h"

using namespace std;

int main()
{
	int arrSize = 0;
	int equal = 0;
	int choice= 0;
	
	cout << "How many elements do you want in your sets?" << endl;
		cin >> arrSize;
		IntegerSet set1(arrSize);
		IntegerSet set2(arrSize);
		IntegerSet unionS(arrSize);
		IntegerSet intersectSet(arrSize);
	
	

		set1.insertElement();

		cout << "Now the next set: " << endl;

		set2.insertElement();

		
		
		set1.unionOfSets(unionS, set2);
		set1.intersectionOfSets(intersectSet, set2);

		

		cout << "Set One: ";
		set1.printSet();
		cout << "Set Two: ";
		set2.printSet();

		

		cout << "Union Set: "; 
		unionS.printSet();
		cout << "Intersection Set: ";
		intersectSet.printSet();

		equal = set1.isEqual(set2);

		cout << "Would you like to delete a number from your original sets?" << endl;
		cout << "1) Yes" << "\n2) No" << endl;
		cin >> choice;

		while (choice < 1 && choice > 2)
		{
			cout << "Sorry that was an invalid selection. Please try again: " << endl;
			cout << "1) Yes" << "\n2) No" << endl;
			cin >> choice;
		}

		if (choice == 1)
		{
			cout << "Please select which set : \n"
				<< "1) Set 1\n" << "2) Set 2" << endl;
			cin >> choice;

			
			if (choice == 1)
			{
				cout << "Please enter the position in your set you'd like to delete: " << endl;
				cin >> choice;

				set1.deleteElement(choice);
				
				cout << "Your new set contains : ";
				set1.printSet();

			}
			else
			{
				cout << "Please enter the position in your set you'd like to delete: " << endl;
				cin >> choice;

				set2.deleteElement(choice);
				cout << "Your new set contains : ";
				set2.printSet();
			}
		}
		

	system("PAUSE");

	
	return 0;
}