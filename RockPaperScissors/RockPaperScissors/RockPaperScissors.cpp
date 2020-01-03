/*Aram Mikayelian
CSIS 135 - Spring 2017 Wed Night
HW #4*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{
	int playerChoice = 0;
	int compChoice = 0;
	int tie = 0;
	int playerWon = 0;
	char choice = 0;
	bool hasWon = 0;

	// function prototypes
	int getComputerChoice();
	int getPlayerChoice();
	bool isTie(int playerChoice, int compChoice);
	bool isPlayerWinner(int playerWon, int compWon);

	srand((unsigned int)time(NULL));

	do
	{

		cout << "\nROCK PAPER SCISSORS MENU\n"
			<< "------------------------\n"
			<< "p) Play Game\n" << "q) Quit\n" 
			<< "Please enter your choice : " <<  endl;
		cin >> choice;

		if (choice != 'p' && choice != 'q')
		{
			cout << "Invalid selection. Try again.\n" << endl;
			
		}
		
		if (choice == 'p')
		{
			
			playerChoice = getPlayerChoice();
			compChoice = getComputerChoice();

			tie = isTie(playerChoice, compChoice);
			playerWon = isPlayerWinner(playerChoice, compChoice);

			if (tie == false && playerWon == false)
			{
				cout << "You LOSE.\n" << endl;;
			}

		}
		else if (choice == 'q')
		{
			cout << "You have chosen to quit the program. Thank you for using the program!" << endl;
		}


	
	} while (choice != 'q');



	//system("PAUSE");
	return 0;
}

int getComputerChoice()
{
	int choice = rand() % 3 + 1;

	if (choice == 1)
	{
		cout <<  "The computer chose : Rock\n" << endl;
	}
	else if (choice == 2)
	{
		cout << "The computer chose : Paper\n" << endl;
	}
	else if (choice == 3)
	{
		cout << "The computer chose : Scissors\n" << endl;
	}

	return choice;
}

int getPlayerChoice()
{
	int choice = 0;

	do
	{
		cout << "\n\nRock, Paper, or Scissors?" << endl;
		cout << "1) Rock\n" << "2) Paper\n" << "3) Scissors\n"
			<< "Please enter your choice : " << endl;
		cin >> choice;

		while (choice < 1 || choice > 3)
		{
			cout << "Invalid Selection. Try again." << endl;
			cin >> choice;
		}

			if (choice == 1)
			{
				cout << "\nYou chose : Rock" << endl;
			}
			else if (choice == 2)
			{
				cout << "\nYou chose : Paper" << endl;
			}
			else if (choice == 3)
			{
				cout << "\nYou chose : Scissors" << endl;
			}
	} while (choice < 1 || choice > 3);

	return choice;
}

bool isTie (int playerChoice, int compChoice)
{
	bool tie = false;

	if (playerChoice == 1 &&  compChoice == 1)
	{
		cout << "It's a TIE!\n" << endl;
		tie = true;
	}
	else if (playerChoice == 2 && compChoice == 2)
	{
		cout << "It's a TIE!\n" << endl;
		tie = true;
	}
	else if (playerChoice == 3 && compChoice == 3)
	{
		cout << "It's a TIE!\n" << endl;
		tie = true;
	}

	return tie;
}

bool isPlayerWinner(int playerWon, int compWon)
{
	bool hasWon = false;

	if (playerWon == 1 && compWon == 3)
	{
		cout << "You WIN!\n" << endl;
		hasWon = true;
		
		
	}

	else if (playerWon == 3 && compWon == 2)
	{
		cout << "You WIN!\n" << endl;
		hasWon = true;
		
	}
	else if (playerWon == 2 && compWon == 1)
	{
		cout << "You WIN!\n" << endl;
		hasWon = true;
		
	}

	return hasWon;

}