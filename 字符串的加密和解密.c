#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
实现字符串的加密和解密
加密方式：将字符串中每个字符加上它在字符串中的位置和一个偏移量5
*/
#define KEY 5 //偏移量 / 密钥

char * encrypt(char []);
char * dencrypt(char []);

int main()
{
    char password[50] = "123456";
    encrypt(password);
    printf("加密后的字符串：%s\n", password);
    dencrypt(password);
    printf("解密后的字符串：%s\n", password);
    return 0;
}

char * encrypt(char password[])
{
    int i = 0;
    int count = strlen(password);
    for(; i < count; i++)
    {
        password[i] = password[i] + i + KEY;
    }
    //字符串最后的\0不需要替换
    return password;
}

char * dencrypt(char password[])
{
    int i = 0;
    int count = strlen(password);
    for(; i < count; i++)
    {
        password[i] = password[i] - i - KEY;
    }
    //字符串最后的\0不需要替换
    return password;
}