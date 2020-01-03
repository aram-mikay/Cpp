/* Aram Mikayelian
CSIS 137 - Fall 2017
HW #1 - TicTacToe*/



#ifndef TICTACTOE_H
#define TICTACTOE_H


const int MAXROW = 3;
const int MAXCOL = 3;

class Tictactoe
{
private:

	int gameArr[MAXROW][MAXCOL];
	int playerOne = 1;
	int playerTwo = 2;

public:
	Tictactoe();
	void playerChoice(int, int, int);
	bool hasWon()const;
	bool isDraw()const;
	void printBoard();
	int firstPlayer();
	bool occupied(int, int)const;
};


#endif

