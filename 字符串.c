#include <stdio.h>
#include <string.h>


// 返回传入字符串的长度
int getStrLength(char []);

// void main(void)
// {
//     //字符串和字符数组的区别：最后一位是否是空字符 \0
//     // char names1[8] = {'j', 'a', 'c', 'k', 's', 'o', 'n', '\0'};
//     char names2[50] = "Jackson";
//     // printf("%s\n", names1);
//     // printf("%s\n", names2);
//     printf("输入新名称：");
//     gets(names2);
//     //fgets(names2, 20, stdin); //stdin 从标准输入流中读取   默认给最后一个元素回车
//     //scanf("%s", names2);
//     puts(names2);
//     //printf("%s\n", names2);
// }

int getStrLength(char str[])
{
    int count = 0;
    int i;
    while (str[count] != '\0')
    {
        if(str[count] == '\n')
        {
            str[count] = '\0'; // 替换
            break;
        }
        count++;
    }
    return count;
}

int main()
{
    char names1[] = {'j', 'a', 'c', 'k', 's', 'o', 'n', '\0'};
    int len = getStrLength(names1);
    printf("长度为：%d", len);
}