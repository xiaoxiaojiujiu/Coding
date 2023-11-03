//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int s[10] = { 0 };
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &s[i]);
//	}
//	shellsort(s, 10);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", s[i]);
//	}
//	return 0;
//}
//int shellsort(int s[], int len)
//{
//	int i, j, gap;
//	for (gap = len / 2; gap > 0; gap /= 2)
//	{
//		for (i = gap; i < len; i++)
//		{
//			for (j = i-gap; j >= 0 && s[j] > s[j+gap]; j -= gap)
//			{
//
//				int temp = s[j+gap];
//				s[j+gap] = s[j];
//				s[j] = temp;
//			}
//
//		}
//	}
//	return 0;
//}