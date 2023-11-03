//#include<stdio.h>
//
//int main()
//{
//	int m, n;
//	int gcd(int x, int y);
//	scanf_s("%d %d", &m, &n);
//	printf("gcd = %d\tlcm = %d\n", gcd(m, n), m*n/gcd(m,n));
//}
//
//int gcd(int x, int y)
//{
//	int max = 0;
//	int i = 0;
//	if (x >= y)
//		max = x;
//	else
//		max = y;
//	for (i = max; i > 0; i--)
//	{
//		if ((x % i == 0) && (y % i == 0))
//		{
//			return i;
//		}
//	}
//}