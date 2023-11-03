#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	void insertSort(int arr[], int len);
	int arr1[1000] = { 0 };
	int arr2[1000] = { 0 };
	int arr3[1000] = { 0 };
	int len1 = 0;
	int len2 = 0;
	int len3 = 0;
	int i = 0;
	scanf("%d", &len1);
	for (i = 0; i < len1; i++)
		scanf("%d", &arr1[i]);
	scanf("%d", &len2);
	for (i = 0; i < len2; i++)
		scanf("%d", &arr2[i]);
	scanf("%d", &len3);
	for (i = 0; i < len3; i++)
		scanf("%d", &arr3[i]);
	insertSort(arr1, len1);
	insertSort(arr2, len2);
	insertSort(arr3, len3);
	for (i = 0; i < len1; i++)
		printf("%d ", arr1[i]);
	printf("\n");
	for (i = 0; i < len2; i++)
		printf("%d ", arr2[i]);
	printf("\n");
	for (i = 0; i < len3; i++)
		printf("%d ", arr3[i]);
	printf("\n");
	return 0;
}

void insertSort(int arr[], int len)
{
	int i = 1;
	for (i = 1; i < len; i++)
	{
		int j = i;
		j -= 1;
		for(;j >= 0 && arr[j] > arr[j + 1];j--)
		{
			int tmp = 0;
			tmp = arr[j];
			arr[j] = arr[j+1];
			arr[j + 1] = tmp;
		}
	}
}