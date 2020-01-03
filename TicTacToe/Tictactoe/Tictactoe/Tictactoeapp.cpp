/* Aram Mikayelian
CSIS 137 - Fall 2017
HW #1 - TicTacToe*/



#include <iostream>
#include <iomanip>
#include <string>
#include "Tictactoe.h"

using namespace std;



int main()
{

	int choice = 0;
	int player = 0;
	int nextPlayer = 0;
	int p1 = 1;
	int p2 = 2;
	int playerRow = 0;
	int pChoice = 0;
	int playAgain = 0;
	int playerCol = 0;
	

	Tictactoe gameboard;

	cout << "TicTacToe!" << endl;
	cout << "Please select an option from the menu" << endl;

	cout << "1) Start Game\n"
		<< "2) Quit" << endl;

	cin >> choice;

	while (choice < 0 || choice > 2)

	{
		cout << "You have made an invalid selection. Please try again." << endl;
		cout << "1) Start Game\n"
			<< "2) Quit" << endl;
		cin >> choice;
	}


	if (choice == 2)
	{
		cout << "Thanks for using the program!" << endl;
	}

	if (choice == 1)
	{
		cout << "\nEnjoy the game, goodluck!\n" << endl;
		cout << "First player will be randomly selected!\n" << endl;

		player = gameboard.firstPlayer();

		if (player == 1)
		{

			cout << "Player 1 you're first!\n" << endl;
		}
		else
		{
			player = 2;
			cout << "Player 2 you're first!\n" << endl;
		}

		gameboard.printBoard();

		do
		{
				cout << "\nChoose your row: \n"
					<< "1) Row 1\n"
					<< "2) Row 2\n"
					<< "3) Row 3" << endl;

				cin >> playerRow;


				cout << "Choose your position in the row: \n"
					<< "1) Left\n"
					<< "2) Center\n"\
					<< "3) Right" << endl;

				cin >> playerCol;



				if(gameboard.occupied(playerRow, playerCol))
				{
					cout << "This positon is occupied! \nPlease select another position: " << endl;
					
					cout << "\nChoose your row: \n"
						<< "1) Row 1\n"
						<< "2) Row 2\n"
						<< "3) Row 3" << endl;

					cin >> playerRow;


					cout << "Choose your position in the row: \n"
						<< "1) Left\n"
						<< "2) Center\n"
						<< "3) Right" << endl;

					cin >> playerCol;

					gameboard.playerChoice(player, playerRow, playerCol);
				}

				gameboard.playerChoice(player, playerRow, playerCol);


					cout << "\nUpdated Game Board: " << endl;

					gameboard.printBoard();
					cout << endl;


					if (player == p1 && !(gameboard.hasWon()))
					{
						nextPlayer = p2;
						cout << "\nPlayer 2 you're up!" << endl;
					}

					else if (player = p2 && !(gameboard.hasWon()))
					{
						nextPlayer = p1;
						cout << "\nPlayer 1 you're up!" << endl;

					}

					player = nextPlayer;

					if (gameboard.hasWon())
					{
						if (p1 == player && gameboard.hasWon())
						{
							cout << "Player 1 WINS! GREAT JOB!\n";
						}

						else if (p2 == player && gameboard.hasWon())
						{
							cout << "PLAYER 2 WINS! GREAT JOB!\n";
						}
						
						cout << "Would you like to play again?" << endl;
						cout << "1) Yes\n"
							 << "2) No" << endl;
						cin >> playAgain;


					}
			
			} while (!gameboard.hasWon() || playAgain == 1);

		

		if (gameboard.isDraw() && !gameboard.hasWon())
		{
			cout << "It's a tie!" << endl;
		}

	}

	
	system("PAUSE");
	return 0;
}

