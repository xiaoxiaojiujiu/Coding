#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("*************三子棋*************\n");
	printf("********************************\n");
	printf("************1.play**************\n");
	printf("************0.exit**************\n");
	printf("********************************\n");
}

void game()
{
	char board[ROW][COL];
	InitBoard(board, ROW, COL);
	DisplayBoard(board,ROW,COL);
	char ret = IsWin(board, ROW, COL);
	while (1)
	{
		PlayerMove(board,ROW,COL);//要判断玩家下棋是否位置错误，所以要引入ROW和COL
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board,ROW,COL);
		if (ret != 'C')
			break;
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("玩家赢了\n");
		DisplayBoard(board, ROW, COL);
	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
		DisplayBoard(board, ROW, COL);
	}
	else if (ret == 'Q')
	{
		printf("平局\n");
		DisplayBoard(board, ROW, COL);
	}
	else
		printf("error\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
 		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);

	return 0;
}