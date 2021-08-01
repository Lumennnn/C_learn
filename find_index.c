# include<stdio.h>


// 数组元素的查找，返回找到的元素下标
// 实现power函数
// 书写函数实现冒泡排序并返回排序后的数组
// 书写函数要求用户输入密码（6位，错误则重新输入）

// 函数原型
int search();
double power(double, int);
// double[] sort();
// char * password();


int main()
{
    double index = power(8, 4);
    printf("下标为：%.2lf", index);
}


// 函数定义
int search()
{
    int i;
    int searchNum;
    int searchIndex = -1;
    int nums[] = {34, 56, 78, 3, 2};
    printf("请输入要查找的整形数字：");
    scanf("%d", &searchNum);
    for(i=0; i < 5; i++)
    {
        if(searchNum == *(nums + i))
        {
            searchIndex = i; // 记录下查找到的下标
            break;
        }
    }
    return searchIndex;
}

double power(double num1, int num2)
{
    double result = 1;
    int i;
    for(i = 0; i < num2; i++)
    {
        result *= num1;
    }
    return result;
}