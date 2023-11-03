#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int arr[58] = { 0 };
	int state = 0;
	int c;
	int i = 0;
	int nother = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			state = 0;
		}
		else {
			if (state == 0) {
				state = 1;
				arr[c - 'A'] += 1;
				if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
					;
				else
					nother++;
			}
		}
	}
	for (i = 0; i < 26; i++)
	{
		printf("%c:%d\n",'A'+i, arr[i]);
	}
	for (i = 32; i < 58; i++)
	{
		printf("%c:%d\n", 'A' + i, arr[i]);
	}
	printf("other:%d\n", nother);
	return 0;
}
