#include<stdio.h>
int main()
{
	double atof(char s[]);
	char s[] = "       -123.45";
	double d;
	d = atof(s);
	printf("s=%s\n", s);
	printf("d=%lf\n", d);
	return 0;
}