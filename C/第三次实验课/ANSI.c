#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int isLegalANSI(char s[]);
	int c = 0;
	int i = 0;
	char s[100] = { '\0' };
	for(i = 0;i<100&& ((c = getchar()) != EOF);i++)
		s[i] = c;
	printf("%d\n",isLegalANSI(s));
	return 0;
}

int isLegalANSI(char s[])
{
	int i = 0;
	if (((s[0] >= 'a' && s[0] <= 'z') || (s[0] >= 'A' && s[0] <= 'Z') || (s[0] == '_')) && (s[31] == '\0'))
	{
		for (i = 1; i < 31; i++)
		{
			if (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] == '_') || (s[i] >= '0' && s[i] <= '9')||(s[i]=='\0')|| (s[i] == '\n')))
				return 0;
		}
		return 1;
	}
	else
		return 0;
}