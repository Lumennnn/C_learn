#pragma once
#ifndef GAMELIB_H_INCLUDED
#include <stdio.h>
#include <Windows.h>
//��Ϸ���ļ�  ����������Ϸ���õ���ϵͳ����

//���ÿ���̨����
void SetTitle(char* title);

/*���ÿ���̨���ڵı���
0-��ɫ�� 1-��ɫ�� 2-��ɫ�� 3-ǳ��ɫ�� 4-��ɫ��������
*/
void SetColor(int foreColor, int backColor);

//���ù���λ��
void SetPosition(int x, int y);

//���
void Clear(int x, int y, int rowCount);

#endif // !GAMELIB_H_INCLUDED
