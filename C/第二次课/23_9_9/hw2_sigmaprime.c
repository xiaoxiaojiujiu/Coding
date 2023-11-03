#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define LOWER 2
#define UPPER 1000

int main()
{
	int prime;
	float sum = 0;
	for (prime = LOWER; prime <= UPPER; prime++)
	{
		int i = 2;
		for (i = 2; i < prime; i++)
		{
			if (prime % i == 0)
				break;
		}
		if (i == prime)
		{
			printf("%d\t", prime);
			sum += 1.0 / prime;
		}
	}
	printf("sum = %f\n", sum);
	return 0;
}