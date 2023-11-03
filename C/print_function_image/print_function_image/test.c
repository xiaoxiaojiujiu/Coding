#include"pfi.h"

void game()
{
	char board[2*ROW+1][2*COL+1];
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	printf("输入多项式的次数:>\n");
	int arr[20] = { 0 };
	int sq = 0;
	scanf_s("%d", &sq);
flag:
	printf("输入各项系数，由低次到高次,空格隔开:>\n");
	int i = 0;
	for (i = 0; i <= sq; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	if (arr[sq] == 0)
		printf("输入错误，请重新输入:>\n");
		goto flag;
	if (arr[0] != 0)
		printf("%d", arr[0]);
	if (sq != 0)
	{
		for (i = 1; i <=sq; i++)
		{
			if (arr[i] != 0)
				printf("+%dx^%d", arr[i], i);
		}
	}
	printf("\n");
	calculate(arr);
	DisplayBoard(board, ROW, COL);
}

void menu()
{
	printf("暂时只支持多项式函数:>\n");
	printf("1.启动\n");
	printf("0.关闭\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf_s("%d", &input);
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