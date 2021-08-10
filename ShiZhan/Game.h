#pragma once
#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include <stdio.h>
#include <string.h>
#include <Windows.h>

//��ҡ���ͼ��װ��������

//��ͼ
typedef struct _map
{
	int id;
	char name[50];
	int minLevel; //��ҽ����ͼ����͵ȼ�
	//����ṹ
	COORD coord; //��ͼ������
	char desc[500];
}Map;


//��������
typedef enum _proptype
{
	Weapon, Armor, Con, Card, Frag
}PropType;

//��Ϸ���ߣ����������ߡ�����Ʒ����Ƭ
typedef struct _prop
{
	int id;			//���߱��
	char name[50];	//��������
	int level;		//���߼���
	int stock;		//���߿��
	double price;   //���߼۸�
	PropType type;  //��������
	union { //���ϣ���ѡһ
		int minAttack; //������Ӧ������
		int minDefence;//���߶�Ӧ������
		int minPower;  //�������
	};
	union { //���ϣ���ѡһ
		int maxAttack; //������Ӧ������
		int maxDefence;//���߶�Ӧ������
		int maxPower;  //�������
	};
	char desc[200]; //��������
}Prop;

void Init(); //��ʼ����Ϸ����
void Show(); //��ʾȫ������






#endif // !GAME_H_INCLUDED
