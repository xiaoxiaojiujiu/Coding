#include <stdio.h>
#define MAXLEN 100
int main()
{
	void mtstrcat(char[], char[]);
	char s[MAXLEN] = "hello ";
	char t[] = "world!";
	mystrcat(s, t);
	printf("s=%s\n", s);
	return 0;
}

void mystrcat(char s[], char t[])
{
	int i, j;
	i = j = 0;
	while(s[i] != '\0')
		i++;
	while((s[i++] = t[j++]) != '\0')
		;
}