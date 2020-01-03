/*Aram Mikayelian
CSIS 135 - Wed Night
HW #2
1. Create variables user input and planet info
2. Display menu welcoming the user, and ask for them to make a choice
3. Wait for user input
4. Store user input in variable choice
5. Display: question for user weight and how fast to travel
6. Wait for user input
7. Store user input in variables weight and speed
8. Initiate selection statements to continue program with proper information based off user input
9. Retrieve data from variables and make proper calculations for final user interaction
10.Display final data to user showing how fast they will travel to wherever they selected based on hours days 
   and years along with their weight on chosen planet.*/
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	string planetName;
	char choice;
	double earthDist = 93;
	double weight = 0;
	double newWeight = 0;
	double speed = 0;
	double surfGravity = 0;
	double distSun = 0;
	double miles = 0;
	double hours = 0;
	double days = 0;
	double years = 0;

	cout << "Welcome to INTERPLANETARY TRAVEL PROGRAM!" << endl;
	cout << "This program enables you to find out your travel time to the planet\n"
		 << "you want to travel to as well as your weight on that planet.\n"
		 << "Please enjoy the program and find the perfect planet for you!\n" << endl;
	cout << "\nINTERPLANETARY TRAVEL MENU\n" << "--------------------------" << endl;
	cout << "a) Mercury\n" << "b) Venus\n" << "c) Earth\n" << "d) Mars\n" << "e) Jupiter\n"
		 << "f) Saturn\n" << "g) Uranus\n" << "h) Neptune\n" << "q) quit\n" 
		 << "\nSelect a planet to travel to or q to quit the program: " << endl;
	cin >> choice;

	/*if (choice == 'q')
	{
		cout << "You have chosen to quit the program. Thank you for using the program!" << endl;
	}
	else if (choice > 'h' && choice != 'q')
	{
		cout << "You have entered an invalid selection." << endl;
	}
	*/
	if (choice >= 'a' && choice <= 'h')
	{
		cout << "Please enter your weight (in lbs): " << endl;
		cin >> weight;

		cout << "Please enter the speed (in mile per hour) that you would like to travel at: \n" << endl;
		cin >> speed;

		if (choice == 'a')
		{
			planetName = "Mercury";
			distSun = 36;
			surfGravity = 0.27;
		}
		else if (choice == 'b')
		{
			planetName = "Venus";
			distSun = 67;
			surfGravity = 0.86;
		}
		else if (choice == 'c')
		{
			planetName = "Earth";
			distSun = 93;
			surfGravity = 1.00;
		}
		else if (choice == 'd')
		{
			planetName = "Mars";
			distSun = 141;
			surfGravity = 0.37;
		}
		else if (choice == 'e')
		{
			planetName = "Jupiter";
			distSun = 483;
			surfGravity = 2.64;
		}
		else if (choice == 'f')
		{
			planetName = "Saturn";
			distSun = 886;
			surfGravity = 1.17;
		}
		else if (choice == 'g')
		{
			planetName = "Uranus";
			distSun = 1782;
			surfGravity = 0.92;
		}
		else if (choice == 'h')
		{
			planetName = "Neptune";
			distSun = 2793;
			surfGravity = 1.44;
		}
		else if (choice != 'q')
		{
			cout << "You have entered an invalid selection.";
			
		}
		else
		{
			cout << "You have chosen to quit the program. Thank you for using the program!" << endl;
		}
		if (earthDist > distSun)
		{
			miles = earthDist - distSun;
		}
		else
		{
			miles = distSun - earthDist;
		}

		miles *= 1000000;
		newWeight = weight * surfGravity;
		hours = miles / speed;
		days = hours / 24;
		years = days / 365;


		cout << "INTERPLANETARY TRAVEL:  Earth to " << planetName << "\n"
			<< "--------------------------------------------------" << endl;
		cout << "Your weight on " << planetName << ":      " << fixed << setprecision(2) << newWeight << " lbs\n";
		cout << "\nYour travel time to " << planetName << ":" << endl;
		cout << "    In Hours: " << fixed << setprecision(0) << hours << " hours\n"
			<< "    In Days : " << days << " days\n"
			<< "    In Years : " << fixed << setprecision(2) << years << " years\n" << endl;	
	}

	system("PAUSE");
	return 0;
}