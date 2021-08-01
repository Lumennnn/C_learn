# include<stdio.h>

int main()
{
    int money, count = 0;
    int i = 0;
    int moneys[6]; // 默认支持6位数字
    char unit[10][4] = {"零", "壹", "贰", "叁", "肆", "伍", "陆", "柒", "捌", "玖"};
    printf("请输入金额：");
    scanf("%d", &money);
    while (money != 0)
    {
        moneys[i] = money % 10;
        money /= 10; // 去掉最后一位
        i++;
        count++;
    }
    printf("用户输入的数字一共有%d位！\n", count);
    printf("数组中的内容\n");
    for(i = 0; i < count; i++)
    {
        printf("%d - %s\n", moneys[i], unit[moneys[i]]);
    }
}