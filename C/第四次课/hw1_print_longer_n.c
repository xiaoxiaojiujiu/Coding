#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAXLINE 1000
#define LINE 1000
int mygetline(void);
void copy(void);
int n;
int k = 0;
char line[MAXLINE];
char longer[LINE][MAXLINE];
int main()
{
	int len;
	int j = 0;
	extern int n;
	extern char longer[][MAXLINE];
	scanf("%d", &n);
	while((len = mygetline())>0)
		if (len > n)
		{
			copy();
		}
	for (j = 0; j < LINE; j++)
	{
		if (longer[j][0] != '\0')
		{
		int i = 0;
		for (i = 0; i < MAXLINE - 1; i++)
			printf("%c", longer[j][i]);
		}
	}
	return 0;
}

int mygetline(void)
{
	int c, i;
	extern char line[MAXLINE];
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
	extern char line[], longer[][MAXLINE];
	extern int k;
	while ((longer[k][i] = line[i])!= '\0')
		i++;
	k++;
}