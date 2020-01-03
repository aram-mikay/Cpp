/* Aram Mikayelian
CSIS 137 - Fall 2017
HW #1 - TicTacToe*/


#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include "Tictactoe.h"

using namespace std;

Tictactoe::Tictactoe()
{
	for (int row = 0; row < MAXROW; row++)
	{

		for (int col = 0; col < MAXCOL; col++)
		{
			gameArr[row][col] = 0;
		}
	}
}

int Tictactoe::firstPlayer()
{
	int firstPlay = 0;
	srand((unsigned int)time(NULL));

	firstPlay = rand() % 2 + 1;

	return firstPlay;

}

void Tictactoe::playerChoice(int player, int row, int col)
{

	if (player == 1)
	{
		gameArr[row - 1][col - 1] = 1;
	}
	else if(player == 2 )
	{
		gameArr[row - 1][col - 1] = 2;
	}
	

}

bool Tictactoe::occupied(int row, int col)const
{

	bool occupied = false;

	for (int i = 0; i < MAXROW; i++)
	{
		for (int j = 0; j < MAXCOL; j++)
		{
			if (gameArr[row - 1][col - 1] != 0)
			{
				occupied = true;
			}
		}
	}

	return occupied;
}

void Tictactoe::printBoard()
{
	for (int row = 0; row < MAXROW; row++)
	{

		for (int col = 0; col < MAXCOL; col++)
		{
			cout << "|" << gameArr[row][col] << "|";
					
		}
 	
		cout << endl;
		
	}

}

bool Tictactoe::hasWon()const
{
	int winner = 0;

	for (int i = 0; i < MAXROW; i++) // checking rows
	{
		if (gameArr[i][0] == gameArr[i][1] && gameArr[i][0] == gameArr[i][2] && gameArr[i][0] != 0 )
		{
			winner = gameArr[i][0];
		}
	}

	for (int j = 0; j < MAXROW; j++) // checking col
	{
		if (gameArr[0][j] == gameArr[1][j] && gameArr[0][j] == gameArr[2][j] && gameArr[0][j] != 0)
		{
			winner = gameArr[0][j];
		}
	}

	for (int h = 0; h < 2; h++) // checking horizontal both ways
	{
		if (gameArr[0][0] == gameArr[1][1] && gameArr[0][0] == gameArr[2][2] && gameArr[0][0] != 0 
			|| gameArr[2][0] == gameArr[1][1] && gameArr[2][0] == gameArr[0][2] && gameArr[2][0] != 0)
		{
			winner = gameArr[0][0];
		}
	}

	return winner;
}

bool Tictactoe::isDraw()const
{
	bool draw = false;

	for (int i = 0; i < MAXROW; i++)
	{
		for (int j = 0; j < MAXCOL; j++)
		{
			if (gameArr[i][j] != 0 )
			{
				draw = true;
			}
		}
	}

	return draw;
}