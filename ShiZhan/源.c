#include <stdio.h>
#include <conio.h>
#include "Game.h"
#include "GameLib.h"


extern int X, Y;

int main()
{
	char key;//接受到的用户按键
	SetTitle("精忠报国");
	SetColor(10, 0);
	ShowWelcome();
	ShowMap();
	ShowInfomation();
	ShowMainMenu();
	while (1)
	{
		key = _getch();//不需要按回车
		if (key == '1' || key == '2' || key == '3' || key == '4' || key == '5')
		{
			printf("1-5之间的游戏菜单");
		}
		else if (key == 38) //用户按了上键  VK_UP
		{
			Y--;
		}
		else if (key == 39) //用户按了右键
		{
			X++;
		}
		else if (key == 40) //用户按了下键
		{
			Y++;
		}
		else if (key == 37) //用户按了左键
		{
			X--;
		}
		printf("X: %d ,Y:% d", X, Y);
		if (X > 7) X = 0;
		if (X < 0) X = 7;
		if (Y > 7) Y = 0;
		if (Y < 0) Y = 7;
		ShowMap();//重新显示地图
	}
	return 0;
}