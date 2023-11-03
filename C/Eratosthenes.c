#include<stdio.h>
#include<math.h>



int main()
{
    int i = 0;
    int j = 0;
    int k = 0;
    int count = 2;
    printf("%d\n%d\n", 2, 3);
    for (i = 1; i < 1000; i ++)
    {
        k = sqrt(i);
        for (j = 2; j <= k; j++)
        {
            if (i % j != 0)
            {
                if (j == k)
                {
                    printf("%d\n", i);
                    count++;
                    break;
                }
                else
                    continue;
            }
            else
                break;
        }
    }
    printf("�ϼ�%d��", count);
    return 0;
}