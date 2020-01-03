/*Aram Mikayelian
CSIS 135 - Wed - Night
HW #1 - Q3

1. Create variables numExplorers, lostExplorers, gold, questLeader;
2. Display : "Enter the number of explorers : "
3. Wait for user input, store input in variable numExplorers
4. Display : "Enter the number of Explorers lost in battle: "
5. Wait for user input, store data in variable named lostExplorers
6. Retrieve data from numExplorers and lostExplorers, subtract lostExplorers from numExplorers, store data in variable numExplorers
7. Display story line
8. Retrieve data from variable gold and numExplorers, use modulus to find remainder of gold when distributed to survivors evenly. 
   Store data in questLeader.*/

#include <iostream>
using namespace std;

int main()
{
	
	int numExplorers = 0;
	int lostExplorers = 0;
	int gold = 750;
	int questLeader;

	cout << "Welcome to Lost Fortune!\n" << endl
		<< "Please enter the following questions for your personalized adventure: \n" << endl
		<< "Enter the number of Explorers: \n";
	cin >> numExplorers;
	cout << "Enter the number of Explorers Lost in Battle: \n" << endl;
	cin >> lostExplorers;

	cout << "You bravely led " << numExplorers << " adventurers on a quest for gold." << endl
		<< "The group fought a band of ogres and lost " << lostExplorers << " members." << endl;

		numExplorers -= lostExplorers;
		questLeader = gold % numExplorers;

	cout << "Only " << numExplorers << " survived.\n" << endl;
	cout << "The party was about to give up when they stumbled upon the\nburied fortune of "
		<< gold << " gold pieces. The group split the loot evenly\nand as the qeust leader"
		<< " you kept the extra " << questLeader << " gold pieces.\n" << endl;

	
	

	//system("PAUSE");
	return 0;
}