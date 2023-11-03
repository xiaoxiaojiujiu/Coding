#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX 1000
int main()
{
	char s[MAX] = { '\0'};
	int i = 0;
	int j = 0;
	int output = 0;
	scanf("%s", &s);
	printf("%s", s);
	if (s[0] == '0')
	{
		if (s[1] == 'x')
		{
			//HEX
			for (i = 2; i < MAX; i++)
			{
				if (!((s[i] >= '0' && s[i] <= '9') || (s[i] == '\0')||(s[i]>='A'&&s[i]<='F')))
				{
					printf(" is an invalid input\n");
					return 0;
				}
			}
			printf(" is a valid hexadecimal number\n");
			for (i =2; i<MAX && s[i] != '\0'; i++)
			{
				if (s[i] >= '0' && s[i] <= '9')
					output = 16 * output + (s[i] - '0');
				else
					output = 16 * output + 10 + (s[i] - 'A');
			}
			printf("The decimal notation of this number is %d\n", output);
		}
		else if (s[1] == 'b')
		{
			//BIN
			for (i = 2; i < MAX; i++)
			{
				if (!((s[i] >= '0' && s[i] <= '1') || (s[i] == '\0')))
				{
					printf(" is an invalid input\n");
					return 0;
				}
			}
			printf(" is a valid binary number\n");
			for (i = 2; i < MAX && s[i] != '\0'; i++)
			{
				output = 2 * output + (s[i]-'0');
			}
			printf("The decimal notation of this number is %d\n", output);
		}
		else if (s[1] >= '0' && s[1] <= '7')
		{
			//OCT
			for (i = 1; i < MAX; i++)
			{
				if (!((s[i] >= '0' && s[i] <= '7') || (s[i] == '\0')))
				{
					printf(" is an invalid input\n");
					return 0;
				}
			}
			printf(" is a valid octal number\n");
			for (i = 1; i < MAX && s[i] != '\0'; i++)
			{
				output = 8 * output + (s[i]-'0');
			}
			printf("The decimal notation of this number is %d\n", output);
		}
		else
		{
			printf(" is an invalid input\n");
			return 0;
		}
	}
	else if (s[0] >= '0' && s[0] <= '9')
	{
		//DEC
		for (i = 1; i < MAX; i++)
		{
			if (!((s[i] >= '0' && s[i] <= '9') || (s[i] == '\0')))
			{
				printf(" is an invalid input\n");
				return 0;
			}
		}
		printf(" is a valid decimal number\n");
		for (i = 0; i < MAX && s[i] != '\0'; i++)
		{
			output = 10 * output + (s[i]-'0');
		}
		printf("The decimal notation of this number is %d\n", output);
	}
	else
	{
		printf(" is an invalid input\n");
		return 0;
	}
	return 0;
}
