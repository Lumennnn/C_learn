#pragma once
#ifndef HERO_H_INCLUDED
#define HERO_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

//�ṹ�壺Ӣ�ۡ�ְҵ��������ʱ��
typedef struct _Job
{
	int id;
	char* name;
	char* desc;//ְҵ������

}Job;  //����

typedef struct _Ability
{
	int id;
	char* name;
	char* intro; //��������˵��
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


//Job job; //�򻯽ṹ��ʹ��
#endif // !HERO_H_INCLUDED
