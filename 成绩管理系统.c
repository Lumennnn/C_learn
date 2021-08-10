#include <stdio.h>
#include <stdlib.h>
#define N 5

// 一个小型的学生成绩管理系统
void input(double[]); // 录入函数
void sort(double[]);
void show(double[]);
int find(double *, int findNum);

int main()
{
    double scores[N];
    // 1. 录入
    input(scores);
    // 2. 排序
    // 3. 按照某种格式打印
    printf("排序前：\n");
    show(scores);
    printf("排序后：\n");
    sort(scores);
    show(scores);
    return 0;
}

void input(double scores[])
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf("请输入第%d门课的成绩：", i + 1);
        scanf("%lf", &scores[i]);
        // scanf("%lf", (score + i))
    }
}

void sort(double socres[])
{
    int i, j;
    double temp;
    for (i = 0; i < N - 1; i++)
    {
        for (j = 0; j < N - 1 - i; j++)
        {
            if (socres[j] > socres[j + 1])
            {
                temp = socres[j];
                socres[j] = socres[j + 1];
                socres[j + 1] = temp;
            }
        }
    }
}

void show(double scores[])
{
    int i;
    printf("**********************************\n");
    printf("语文\t数学\t英语\t物理\t化学\n");
    for (i = 0; i < N; i++)
    {
        printf("%.2lf\t", *(scores + i));
    }
    printf("\n**********************************\n");
}

int find(double *scores, int findNum)
{
    int findIndex = -1;
    int i;
    for (i = 0; i < N; i++)
    {
        //if(findNum == *(scores + i))
        if (findNum == scores[i])
        {
            //记录要查找的下标，结束查找
            findIndex = i;
            break;
        }
    }

    return findIndex;
}