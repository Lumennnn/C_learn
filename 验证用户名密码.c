#include <stdio.h>
#include <string.h>

#define USER_NAME "admin"
#define USER_PASSWORD "admin"

int login(char [], char []);

int login(char userName[], char password[])
{
    //合法返回1，否则返回0
    int result = 0;
    if(strcmp(USER_NAME, userName) == 0 && strcmp(USER_PASSWORD, password) == 0)
    {
        //验证合法
        result = 1;
    }
    return result;
}

int main()
{
    printf("%d", login("admin", "admin"));
    return 0;
}