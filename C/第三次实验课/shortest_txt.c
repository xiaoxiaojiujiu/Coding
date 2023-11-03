#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAXLINE 1000

int mygetline(void);
void copy(char arr[],char str[]);
int min1;
int min2;
char line[MAXLINE];
char shortest1[MAXLINE];
char shortest2[MAXLINE];
int main()
{
	int len;
	extern int min1;
	extern int min2;
	extern char shortest1[];
	extern char shortest2[];
	min1 = 1000;
	min2 = 1000;
	while ((len = mygetline()) > 0)
	{
		if (len < min1)
		{
			min2 = min1;
			min1 = len;
			copy(shortest2, shortest1);
			copy(shortest1,line);
		}
		else if (len >= min1 && len < min2)
		{
			min2 = len;
			copy(shortest2,line);
		}
	}
	if (min1 > 0 )
		printf("%s", shortest1);
	if (min2 > 0)
		printf("%s", shortest2);
	return 0;
}

int mygetline(void)
{
	int c, i;
	extern char line[];
	for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; i++)
		line[i] = c;
	if (c == '\n')
	{
		line[i] = c;
		i++;
	}
	line[i] = '\0';
	return i;
}

void copy(char arr[],char str[])
{
	int i = 0;
	while ((arr[i] = str[i]) != '\0')
		i++;
}