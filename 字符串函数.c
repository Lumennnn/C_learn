#include <stdio.h>
#include <string.h>


int main()
{
    char word1[] = "HelloWorld";
    char word2[] = {'H', 'e', 'l', 'l', 'o', 'W', 'o', 'r', 'l', 'd', '\0'};
    char word3[] = "你好世界";
    char word4[50];
    // printf("word1的长度为%d\n", strlen(word1));
    // printf("word2的长度为%d\n", strlen(word2));
    // printf("word3的长度为%d\n", strlen(word3));
    //数组的复制原理：每个元素逐个复制
    strcpy(word4, word1);
    printf("%s", word4);
    return 0;
}