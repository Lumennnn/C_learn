#include <stdio.h>


int main()
{
    // char * words = "My heart is still";
    // words += 9;
    // puts(words);  //is still

    //理解字符串和字符指针的区别
    char str1[] = "For The Horde";
    const char * str2 = "For The Horde";
    printf("字符串常量地址为：%p\n", "For The Horde");
    printf("字符数组的首地址：%p\n", str1);
    printf("字符指针的取值：%p\n", str2);
    return 0;
}