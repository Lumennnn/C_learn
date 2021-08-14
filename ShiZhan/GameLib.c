#include <stdio.h>
#include "GameLib.h"
#include <Windows.h>

//ʵ��GameLib.h����



void SetTitle(char* title)
{
	SetConsoleTitle(title);
}

void SetColor(int foreColor, int backColor)
{
	HANDLE winHandle; //���
	winHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	//����������ɫ
	SetConsoleTextAttribute(winHandle, foreColor + backColor * 0x10);
}

void SetPosition(int x, int y)
{
	HANDLE winHandle; //���
	COORD pos = { x, y };
	winHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(winHandle, pos);
}

//���
void Clear(int x, int y, int rowCount)
{
	SetPosition(x, y);
	//ÿ�����78���ַ�--��ӡ78���ո�
	int i, j;
	for (i = 0; i < rowCount; i++)
	{
		SetPosition(x, y + i);
		for (j = 0; j < 78; j++)
		{
			printf(" ");
		}
	}
}
