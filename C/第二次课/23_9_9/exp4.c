//#include<stdio.h>
//
//int main()
//{
//	int arr[26] = { 0 };
//	int state = 0;
//	int c;
//	int i = 0;
//	char capitalize(char x);
//	char lowercase(char x);
//	while ((c = getchar()) != EOF) {
//		if (c == ' ' || c == '\t' || c == '\n') {
//			state = 0;
//			putchar(c);
//		}
//		else {  //是第一个字母
//			if (state == 0) {
//				state = 1;
//				putchar(capitalize(c));
//				arr[capitalize(c) - 'A'] += 1;
//			}
//			else
//				putchar(lowercase(c));
//		}
//	}
//	for (i = 0; i < 26; i++)
//	{
//		printf("%c:%d\n",65+i,arr[i]);
//	}
//	return 0;
//}
//
//char capitalize(char x)
//{
//	if (x <= 122 && x >= 97)
//	{
//		x -= 32;
//	}
//	return x;
//}
//
//char lowercase(char x)
//{
//	if (x <= 90 && x >= 65)
//	{
//		x += 32;
//	}
//	return x;
//}