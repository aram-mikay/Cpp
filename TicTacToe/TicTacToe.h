#ifndef TICTACTOE_H
#define TICTACTOE_H


const int ROW = 3;
const int COL = 3;

class Tictactoe
{
private:
	
	int gameArr[ROW][COL];
	int playerOne;
	int playerTwo;

public:
	Tictactoe();
	int playerChoice(int)const;
	int hasWon()const;
	int isDraw()const;
	char printBoard();
};


#endif

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
	int playerCol = 0;

	Tictactoe gameboard;

	cout << "TicTacToe!" << endl;
	cout << "Please select an option from the menu" << endl;

	cout << "1) Start Game\n"
		<< "2) Quit" << endl;

	cin >> choice;

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



			gameboard.playerChoice(player, playerRow, playerCol);


			if (player == p1 && !(gameboard.hasWon()))
			{
				nextPlayer = p2;
				cout << "Player 2 you're up!" << endl;
			}

			else if (player = p2 && !(gameboard.hasWon()))
			{
				nextPlayer = p1;
				cout << "Player 1 you're up!" << endl;

			}

			player = nextPlayer;

			cout << "\nUpdated Game Board: " << endl;

			gameboard.printBoard();
			cout << endl;


		} while (!gameboard.hasWon());

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

		}
		else
		{
			cout << "You lose!";
		}

	}







	system("PAUSE");
	return 0;
}

