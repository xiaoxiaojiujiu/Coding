//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <string.h>
//
//#define MAXLEN 100
//
//int trim(char s[]);
//
//int main()
//{
//	char s[MAXLEN] = "hello world         \n";
//	trim(s);
//	printf("%s\n", s);
//	return 0;
//}
//
//int trim(char s[])
//{
//	int n;
//	for (n = strlen(s) - 1; n >= 0; n--)
//	{
//		if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
//			break;
//	}
//	s[n + 1] = '\0';
//	return n;
//}