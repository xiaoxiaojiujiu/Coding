#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("*************������*************\n");
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
		PlayerMove(board,ROW,COL);//Ҫ�ж���������Ƿ�λ�ô�������Ҫ����ROW��COL
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
		printf("���Ӯ��\n");
		DisplayBoard(board, ROW, COL);
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
		DisplayBoard(board, ROW, COL);
	}
	else if (ret == 'Q')
	{
		printf("ƽ��\n");
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
 		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);

	return 0;
}