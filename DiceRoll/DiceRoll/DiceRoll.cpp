/*Aram Mikayelian
CSIS 135 - Spring 2017 Wed Night
HW#3 - Q1*/

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;


int main()
{
	int choice = 0;
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int num5 = 0;
	int num6 = 0;
	int numRolled = 0;
	
	srand(time(NULL));

	cout << "How many times would you like to roll the dice?" << endl;
	cin >> choice;

	while (choice < 1)
	{
		cout << "This is an invalid number. \n" 
			 << "The number of rolls should be equal to or greater than 1.\n"
			 << "Please enter again." << endl;
		cin >> choice;
	}

		 
	for (int counter = 1; counter <= choice; ++counter)
	{
		numRolled = rand() % 6+1;
		
			if (numRolled == 1)
			{
				++num1;
			
			}
			else if (numRolled == 2)
			{
				++num2;
			
			}
			else if (numRolled == 3)
			{
				++num3;
			
			}
			else if (numRolled == 4)
			{
				++num4;
			}
			else if (numRolled == 5)
			{
				++num5;
			}
			else if ( numRolled == 6)
			{
				++num6;
			}			
		}


	
	cout << fixed << setprecision(2);
	cout << "\nDICE ROLL STATISTICS\n\n" <<  "# Rolled\t" << setw(8) << "# Times\t" << setw(8) << "\t% Times" << endl
		<< "--------\t" << "--------\t" << "--------" << endl;
	cout << setw(8) << 1 << "\t" << setw(8) << num1 << "       " <<setw(8) << ((double)num1 / choice) * 100 << "%" << endl;
	cout << setw(8) << 2 << "\t" << setw(8) << num2 << "       " <<setw(8) << ((double)num2 / choice) * 100 << "%" << endl;
	cout << setw(8) << 3 << "\t" << setw(8) << num3 << "       " <<setw(8) << ((double)num3 / choice) * 100 << "%" << endl;
	cout << setw(8) << 4 << "\t" << setw(8) << num4 << "       " <<setw(8) << ((double)num4 / choice) * 100 << "%" << endl;
	cout << setw(8) << 5 << "\t" << setw(8) << num5 << "       " <<setw(8) << ((double)num5 / choice) * 100 << "%" << endl;
	cout << setw(8) << 6 << "\t" << setw(8) << num6 << "       " <<setw(8) << ((double)num6 / choice) * 100 << "%" << endl;

	system("PAUSE");
	return 0;
}