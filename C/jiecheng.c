#include <stdio.h>

int main()
{
    int n = 0;
    int i = 0;
    int sum = 0;
    for (n = 1; n <= 4;n++)
    {
        int b = 1;
        for (i = 1; i <= n; i++)
        {
            b = b * i;
        }
        sum += b;
    }
    printf("%d\n", sum);
    return 0;
}