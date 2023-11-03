#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
unsigned getbits(unsigned x, int p, int n);
int main()
{
	int b, a = 0x56674;
	b = getbits(a, 5, 2);
	printf("b=%x\n", b);
	return 0;
}

unsigned getbits(unsigned x, int p, int n)
{
	return (x >> (p + 1 - n)) & ~(~0 << n);
}