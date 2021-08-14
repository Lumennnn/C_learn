#include <stdio.h>
#include "GameLib.h"
#include <Windows.h>

//实现GameLib.h功能



void SetTitle(char* title)
{
	SetConsoleTitle(title);
}

void SetColor(int foreColor, int backColor)
{
	HANDLE winHandle; //句柄
	winHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	//设置文字颜色
	SetConsoleTextAttribute(winHandle, foreColor + backColor * 0x10);
}

void SetPosition(int x, int y)
{
	HANDLE winHandle; //句柄
	COORD pos = { x, y };
	winHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(winHandle, pos);
}

//清空
void Clear(int x, int y, int rowCount)
{
	SetPosition(x, y);
	//每行清楚78个字符--打印78个空格
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
