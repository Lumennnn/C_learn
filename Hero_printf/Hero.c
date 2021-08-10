#include <stdio.h>
#include "Hero.h"


Hero heros[] = {
	{"Ӱ��֮��-��", 'm', "�̿�", 579, 0.644, "λ��", {2012, 8, 15}},
	{"��ɪ��Ů-���", 'f', "��ʦ", 482, 0.644, "���١�����", {2010, 9, 20}},
	{"���罣��", 'm', "սʿ", 517, 0.67, "���ܡ�λ��", {2013, 12, 23}}
};

void Show()
{
	//���֪���ṹ����Ĵ�С
	int len = sizeof(heros) / sizeof(Hero);
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%s\t%s\t%d-%d-%d\n", (heros + i)->name, heros[i].job,
				heros[i].putTime.year, 
				heros[i].putTime.month,
				heros[i].putTime.day);
	}
}

void Input()
{
	//首先录入内容，第一个录入完成后询问是否继续录入

}