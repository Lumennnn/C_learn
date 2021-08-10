#include <stdio.h>
#include <stdlib.h>
#include "hotal.h"

//  用户输入入住的酒店和天数，程序计算出对应的总额
extern char houtalNames[4][50];
int main()
{
    int choice;
    //1. 显示菜单
    choice = menu();
    if (choice > 0 && choice < 5)
    {
        printf("当前用户选择的是：%s\n", houtalNames[choice - 1]);
    }
    //2. 计算过程
    return 0;
}