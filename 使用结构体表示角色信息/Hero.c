#include "Hero.h"
#include <malloc.h>
#define _CRT_SECURE_NO_WARNINGS

Hero heros[5];
Job jobs[] = {
	{1, "法师", "biubiu专家"},
	{2, "刺客", "biubiu专家"},
	{3, "战士", "biubiu专家"},
	{4, "机甲师", "biubiu专家"},
	{5, "弓箭手", "biubiu专家"}
};

void InputHero()
{
	//动态录入
	int i;
	int jobChoice;
	for (i = 0; i < 1; i++)
	{
		int j;
		printf("请输入第%d位英雄的信息：\n", i + 1);
		heros[i].id = i + 1;

		printf("名称：");
		heros[i].name = (char*)malloc(50);
		scanf_s("%s", heros[i].name, 50);
		//%c错误读取了换行字符
		//在 % c 的前加了一个空格（space），意思是从第一个非空白字符开始读取
		printf("性别：");
		scanf_s(" %c", &heros[i].sex, 1);
		fflush(stdin); //单个字符，清空缓冲区

		printf("\n");
		for (j = 0; j < 5; j++)
		{
			printf("%s\t", jobs[j].name);
		}
		printf("\n请选择职业（1-5之间的整数）：");
		scanf_s( "%d", &jobChoice);
		heros[i].job = jobs[jobChoice - 1];
		printf("%s当前的职业：<%s>\n", heros[i].name, heros[i].job.name);

	}
}

void ShowHero()
{

}