#include <iostream>

#define EMPTY 0
#define PLAYER 1
#define COMP 2
#define ROWS 6
#define COLUMNS 7

using namespace std;

int board[ROWS][COLUMNS]{};

void printBoard()
{
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLUMNS; ++j)
		{
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	printBoard();
	return 0;
}