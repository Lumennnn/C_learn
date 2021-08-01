#include <stdio.h>

int main(void)
{
    int i, sum;
    i = 0;
    sum = 0;
    do
    {
        i = i + 2;
        printf("%d\n",i);
        sum = sum + i;
    } while (i < 100);

    printf("和为：%d",sum);

    return 0;
}