#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAXLINE 1000

int mygetline(void);
void copy(void);
int max;
char line[MAXLINE];
char longest[MAXLINE];
int main()
{
	int len;
	extern int max;
	extern char longest[];
	max = 0;
	max = 0;
	while((len = mygetline())>0)
		if (len > max)
		{
			max = len;
			copy();
		}
	if (max > 0)
		printf("\nThe lonngest is: %s\n lenth=%d\n", longest, max);
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

void copy(void)
{
	int i = 0;
	extern char line[], longest[];
	while ((longest[i] = line[i])!= '\0')
		i++;
}