#pragma once
#ifndef HERO_H_INCLUDED
#define HERO_H_INCLUDED

typedef struct _myTime
{
	int year;
	int month;
	int day;
}MyTime;
typedef struct _hero
{
	char* name;
	char sex;
	char* job;
	int life;
	double speed;
	char* ability;
	MyTime putTime;

}Hero;
//动态录入
//计算平均年龄
void Input();
void Show(); //显示英雄的详细信息
#endif // !HERO_H_INCLUDED
