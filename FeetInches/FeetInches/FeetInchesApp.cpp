#include <iostream>
#include <iomanip>
#include <string>
#include "FeetInches.h"

using namespace std;

int main()
{
	int ftChoice = 0;
	int inChoice = 0;
	FeetInches measurement;
	FeetInches measure2(5, 5);

	cout << "Please enter measurement in Feet and Inches" << endl
		<< "Feet: ";
	cin >> ftChoice;

	cout << "\nInches: ";
	cin >> inChoice;

	
		
		while (measurement.checkMeasure(ftChoice, inChoice))
		{
			cout << "Invalid Entry. Please select a positive numbers " << endl;
			
			if (inChoice < 0)
			{
				cout << "\nInches: ";
				cin >> inChoice;
			}
			else if (ftChoice < 0)
			{
				cout << "Feet: ";
				cin >> ftChoice;

			}
		}
		

		measurement.simpleMeasure(&ftChoice, &inChoice);
		
		
		cout << "\nfeet: " << measurement.getFeet() << "\nInches: " << measurement.getInches() << endl;
		cout << "Measure2 " << "\nFeet: " << measure2.getFeet() << "\nInches: " << measure2.getInches() << endl;

		measurement.decimalForm();


	system("PAUSE");
	return 0;
}