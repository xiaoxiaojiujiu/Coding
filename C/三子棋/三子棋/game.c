#define _CRT_SECURE_NO_WARNINGS 1 
#include "game.h"
int count = 0;
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf(" %c ",board[i][j]);
//			if (j < col - 1)
//				printf("|");
//		}
//		printf("\n");
//		if (i < row - 1)
//		{
//			for (j = 0; j < col; j++)
//			{
//				printf("---");
//				if (j < col - 1)
//					printf("|");
//			}
//			printf("\n");
//		}
//	}
//}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走:>\n");
	while (1)
	{
		printf("请输入棋子的坐标:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				count++;
				break;
			}
			else
			{
				printf("此位置已落子，请重新输入\n");
			}
		}
		else
		{
			printf("位置不合法，请重新输入\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走:>\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;

		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			count++;
			break;
		}
	}
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int ret = IsFull(board,row,col);
	int i = 0;
	int j = 0;
	if (ret == 1)
	{
		return 'Q';
	}
	else
	{
		for (i = 0;i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				if (board[i - 1][j] == board[i][j] && board[i][j] == board[i + 1][j] && board[i][j] != ' ')
					return board[i][j];

				else if (board[i][j - 1] == board[i][j] && board[i][j] == board[i][j + 1] && board[i][j] != ' ')
					return board[i][j];

				else if (board[i - 1][j - 1] == board[i][j] && board[i][j] == board[i + 1][j + 1] && board[i][j] != ' ')
					return board[i][j];

				else if (board[i + 1][j - 1] == board[i][j] && board[i][j] == board[i - 1][j + 1] && board[i][j] != ' ')
					return board[i][j];

				else
					continue;
			}
		}
		return 'C';
	}
}

int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}