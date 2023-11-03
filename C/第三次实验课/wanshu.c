
#include<stdio.h>
int main()
{
	int arr[1000][100] = { 0 };
	int sum[1000] = { 0 };
	int i = 0;
	
	for (i = 1; i < 1000; i++)
	{
		arr[i][0] = i;
		int j = 0;
		int k = 1;
		for (j = 1; j <i ; j++)
		{
			if (i % j == 0)
			{
				arr[i][k] = j;
				sum[i] += j;
				k++;
			}
		}
		if (sum[i] == i)
		{
			for (j = 0; j < 1000 ; j++)
				if(arr[i][j]!=0)
					printf("%d ",arr[i][j]);
			printf("\n");
		}

	}
	return 0;
}