#include<stdio.h>
int main()
{
    int x = 0;
    scanf("%d",&x);
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int left = 0;
    int right = sizeof(arr) / sizeof(arr[0])-1 ;
    while (left <= right)
    {
        int mid = left + (right-left) / 2;

        if(x < arr[mid])
        {
            right = mid - 1;
        }
        else if(x > arr[mid])
        {
            left = mid + 1;
        }
        else
        {
            printf("对应标号为：%d\n", mid);
            break;
        }
    }
    return 0;
}