//#include<stdio.h>
//
//int main()
//{
//	int state = 0;
//	int c;
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
//			}
//			else
//				putchar(lowercase(c));
//		}
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