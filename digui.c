# include<stdio.h>

factorial(int);

int main()
{
    int result = factorial(5);
}

int factorial(int num)
{
    if(num == 1)
        return 1;
    else
    {
        num = num * factorial(num - 1);
        return num;
    }
} 