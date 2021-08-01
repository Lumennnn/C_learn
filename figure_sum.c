# include<stdio.h>

// 函数原型
int calcSum();

int main()
{
    int sum = calcSum();
    printf("总和为：%d", sum);
}

int calcSum()
{
    // 1-100之间的偶数和
    int sum = 0;
    int i = 1;
    for(i = 1; i <= 100; i++)   
    {
        if(i % 2 == 0)
            sum += i;
    }
    // 拥有返回值，调用时使用对应类型的变量接收
    return sum;
}