#include <stdio.h>
#include <stdlib.h>
#include "hotal.h"

//  �û�������ס�ľƵ������������������Ӧ���ܶ�
extern char houtalNames[4][50];
int main()
{
    int choice;
    //1. ��ʾ�˵�
    choice = menu();
    if (choice > 0 && choice < 5)
    {
        printf("��ǰ�û�ѡ����ǣ�%s\n", houtalNames[choice - 1]);
    }
    //2. �������
    return 0;
}