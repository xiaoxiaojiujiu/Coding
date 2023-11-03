#include"pfi.h"
void InitBoard(char board[2*ROW+1][2*COL+1], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
		board[i][col] = '|';
		for (j = col+1; j < 2*col+1; j++)
		{
			board[i][j] = ' ';
		}
	}
	for (j = 0; j < col; j++)
	{
		board[row][j] = '-';
	}
	board[row][col] = ' ';
	for (j = col+1; j < 2*col+1; j++)
	{
		board[row][j] = '-';
	}
	for (i = row+1; i < 2*row+1; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
		board[i][col] = '|';
		for (j = col+1; j < 2*col+1; j++)
		{
			board[i][j] = ' ';
		}
	}

}

void DisplayBoard(char board[2*ROW+1][2*COL+1], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 2 * col+1; i++)
	{
		for (j = 0; j < 2 * row+1; j++)
		{
			printf("%c",board[i][j]);
		}
		printf("\n");
	}
}