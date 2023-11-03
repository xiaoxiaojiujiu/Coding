#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("\n");
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c", board[i][j]);
			printf("%c",' ');
		}
		printf("\n");
	}
	printf("\n");
}

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] + mine[x][y - 1] + mine[x][y + 1] - 8 * '0';
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		DisplayBoard(mine, ROW, COL);
		printf("萩補秘勣電臥議恫炎:>");
		scanf_s("%d %d", &x, &y);

		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("\n******お念はもう棒んでいる!*****\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				int count = get_mine_count(mine,x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("恫炎音栽隈��萩嶷仟補秘\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("\n孝浪��薬媾撹孔\n");
		DisplayBoard(mine, ROW, COL);
	 }
}

