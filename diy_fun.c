# include<stdio.h>
# include<math.h>
# include<stdlib.h>
/* 三种图形面积计算 */
// 对用户输入进行非负验证
// 函数原型

int validata(double); // 输入验证
double calcCircle(double);  // 计算圆面积
double calcRectangle(double, double); // 计算矩形面积


int main()
{
    double radius, s, width, height;
    printf("输入一个圆半径：");
    // scanf("%lf", &radius);
    do{
        scanf("%lf", &radius);
        if(!validata(radius))
        {
            printf("重新输入一个圆半径（不能为负数）：");
        }
    }while(!validata(radius))  // 当验证不通过的时候重新录入
    s = calcCircle(radius);

    printf("圆面积为：%.2lf", s);
    return 0;
}

// 函数定义
int validata(double num)
{
    // 如果num>0，会返回一个非零值，表示真
    return num > 0 ?
}


double calcCircle(double radius)
{
    double s;
    s = 3.14 * pow(radius, 2);
    return s;
}

double calcRectangle(double width, double heigth)
{
    double s;
    s = width * heigth;
    return s;
}