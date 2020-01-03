/*Aram Mikayelian
CSIS 135 - Spring Wed Night
HW#3 - Q2*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char choice;
	int numChoice;
	int row, col;


	do
	{

		cout << "MENU" << endl
			<< "a) Generate Multiplication Table" << endl
			<< "q) Quit the program" << endl
			<< "Please make a selection: ";
		cin >> choice;

			if (choice == 'a' )
			{
				
				cout << "Please enter a number for your multiplication table: \n" << endl;
				cin >> numChoice;

				while (numChoice < 1 || numChoice > 10)
				{
					cout << "Invalid Selection. Please enter a number between 1 and 10: \n";
					cin >> numChoice;

				}

				cout << "MULTIPLICATION TABLE: " << numChoice << "'s\n" << endl;

				for (row = 1; row <= numChoice; ++row) //row - will run until nnumber chosen is reached horizontally
				{
					cout << setw(5) << row;//4 space chars for row nums
				}

				
				cout << "\n   ----|"; // prints for the first number

				for (row = 2; row <= numChoice; ++row)
				{
					cout << "----|"; // prints pattern after every number in row
				}

				cout << endl;

				for (row = 1; row <= numChoice; ++row)
				{
					cout << setw(2) << row << "|";

					for (col = 1; col <= numChoice; ++col)
					{
						cout << setw(4) << col*row << "|";
					}

					cout << endl;
					cout << " -|----";

					for (col = 2; col <= numChoice; ++col)
					{
						cout << "|----";
					}

					cout << "|";//prints last |
					cout << endl;
				}

				cout << endl;
			}
			else if (choice != 'q' && choice != 'a')
			{
				cout << "Invalid Selection\n" << endl;

			}
			else if (choice == 'q')
			{
				cout << "You have chosen to quit the program. Thank you for using!" << endl;
			}
	} while (choice != 'q');

	system("PAUSE");
	return 0;
}