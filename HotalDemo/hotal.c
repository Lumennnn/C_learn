//��Ӧhotels.h��ʵ���ļ�
//�����Զ���ͷ�ļ�ʱ��ʹ��˫����
#include <stdio.h>
#include "hotal.h"
//4�ҾƵ꣬ÿһ�����50���ֽ�
char houtalNames[4][50] = {
    "���޾Ƶ�", "�������㳡�Ƶ�", "�������Ƶ�", "˹���ﲼ�����ؾƵ�"
};

int menu(void)
{
    int choice = 1;
    int i;
    printf("��ѡ����ס�ľƵ꣺\n");
    for (i = 0; i < 4; i++)
    {
        printf("%d��%s\n", i + 1, houtalNames[i]);
    }
    printf("5���˳�����\n");
    printf("����������ѡ��");
    scanf_s("%d", &choice);
    //1. �û���ѡ�����Ƿ�����
    //2. �û���������1-4֮��
    return choice;
}