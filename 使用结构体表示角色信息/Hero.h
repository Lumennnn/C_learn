#pragma once
#ifndef HERO_H_INCLUDED
#define HERO_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

//结构体：英雄、职业、能力、时间
typedef struct _Job
{
	int id;
	char* name;
	char* desc;//职业的描述

}Job;  //别名

typedef struct _Ability
{
	int id;
	char* name;
	char* intro; //特殊能力说明
}Ability;

typedef struct _PubTime
{
	int year;
	int month;
	int day;
}PubTime;

typedef struct _Hero
{
	int id;
	char* name;
	char sex;
	Job job;
	double hp;
	double mp;
	double speed;
	Ability ability;
	PubTime pubTime;
}Hero;


void InputHero();
void ShowHero();


//Job job; //简化结构体使用
#endif // !HERO_H_INCLUDED
