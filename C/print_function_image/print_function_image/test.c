#include"pfi.h"

void game()
{
	char board[2*ROW+1][2*COL+1];
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	printf("�������ʽ�Ĵ���:>\n");
	int arr[20] = { 0 };
	int sq = 0;
	scanf_s("%d", &sq);
flag:
	printf("�������ϵ�����ɵʹε��ߴ�,�ո����:>\n");
	int i = 0;
	for (i = 0; i <= sq; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	if (arr[sq] == 0)
		printf("�����������������:>\n");
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
	printf("��ʱֻ֧�ֶ���ʽ����:>\n");
	printf("1.����\n");
	printf("0.�ر�\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf_s("%d", &input);
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