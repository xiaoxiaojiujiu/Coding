#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 100; i < 1000; i++)
	{
		int a = i / 100;
		int b = i % 10;
		int c = i % 100 /10;
		if (i == a*a*a+b*b*b+c*c*c)
			printf("%d\n", i);
	}
}