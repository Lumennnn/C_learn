#pragma once
#ifndef GAMELIB_H_INCLUDED
#include <stdio.h>
#include <Windows.h>
//游戏库文件  用来定义游戏常用到的系统操作

//设置控制台标题
void SetTitle(char* title);

/*设置控制台窗口的标题
0-黑色， 1-蓝色， 2-绿色， 3-浅绿色， 4-红色。。。。
*/
void SetColor(int foreColor, int backColor);

//设置光标的位置
void SetPosition(int x, int y);

//清空
void Clear(int x, int y, int rowCount);

#endif // !GAMELIB_H_INCLUDED
