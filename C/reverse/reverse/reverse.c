#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void reverse(char * str)
{
	int len = strlen(str);
	char * left = str;
	char * right = str + len - 1;
	while (left < right)
	{
		char ret=0;
		ret = *left;
		*left = *right;
		*right = ret;
		left += 1;
		right -= 1;
	}
}

int main()
{
	char arr[] = "abcdef";
	reverse(arr);
	printf(arr);
	return 0;
}