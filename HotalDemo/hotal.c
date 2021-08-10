//对应hotels.h的实现文件
//包含自定义头文件时，使用双引号
#include <stdio.h>
#include "hotal.h"
//4家酒店，每一个最多50个字节
char houtalNames[4][50] = {
    "贝罗酒店", "香榭丽舍广场酒店", "奥佩拉酒店", "斯克里布索菲特酒店"
};

int menu(void)
{
    int choice = 1;
    int i;
    printf("请选择入住的酒店：\n");
    for (i = 0; i < 4; i++)
    {
        printf("%d、%s\n", i + 1, houtalNames[i]);
    }
    printf("5、退出程序\n");
    printf("请输入您的选择：");
    scanf_s("%d", &choice);
    //1. 用户的选择不能是非数字
    //2. 用户必须输入1-4之间
    return choice;
}