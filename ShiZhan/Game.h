#pragma once
#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include <stdio.h>
#include <string.h>
#include <Windows.h>



//玩家、地图、装备、怪物

//地图
typedef struct _map
{
	int id;
	char name[50];
	int minLevel; //玩家进入地图的最低等级
	//坐标结构
	COORD coord; //地图的坐标
	char desc[500];
}Map;


//道具类型
typedef enum _proptype
{
	Weapon, Armor, Con, Card, Frag
}PropType;

//游戏道具：武器、防具、消耗品、卡片
typedef struct _prop
{
	int id;			//道具编号
	char name[50];	//道具名称
	int level;		//道具级别
	int stock;		//道具库存
	double price;   //道具价格
	PropType type;  //道具类型
	union { //联合：多选一
		int minAttack; //武器对应攻击力
		int minDefence;//防具对应防御力
		int minPower;  //增益道具
	};
	union { //联合：多选一
		int maxAttack; //武器对应攻击力
		int maxDefence;//防具对应防御力
		int maxPower;  //增益道具
	};
	char desc[200]; //道具描述
}Prop;

//初始化游戏数据
void Init();		

//显示全部数据
void Show();	

//显示游戏欢迎信息
void ShowWelcome(); 

//显示游戏地图
void ShowMap();	

//在信息界面显示当前地图的信息
void ShowMapInfo();

//显示游戏地图下方信息
void ShowInfomation();  

//显示游戏主菜单
void ShowMainMenu();




#endif // !GAME_H_INCLUDED
