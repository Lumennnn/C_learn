#include "Hero.h"
#include <malloc.h>
#define _CRT_SECURE_NO_WARNINGS

Hero heros[5];
Job jobs[] = {
	{1, "��ʦ", "biubiuר��"},
	{2, "�̿�", "biubiuר��"},
	{3, "սʿ", "biubiuר��"},
	{4, "����ʦ", "biubiuר��"},
	{5, "������", "biubiuר��"}
};

void InputHero()
{
	//��̬¼��
	int i;
	int jobChoice;
	for (i = 0; i < 1; i++)
	{
		int j;
		printf("�������%dλӢ�۵���Ϣ��\n", i + 1);
		heros[i].id = i + 1;

		printf("���ƣ�");
		heros[i].name = (char*)malloc(50);
		scanf_s("%s", heros[i].name, 50);
		//%c�����ȡ�˻����ַ�
		//�� % c ��ǰ����һ���ո�space������˼�Ǵӵ�һ���ǿհ��ַ���ʼ��ȡ
		printf("�Ա�");
		scanf_s(" %c", &heros[i].sex, 1);
		fflush(stdin); //�����ַ�����ջ�����

		printf("\n");
		for (j = 0; j < 5; j++)
		{
			printf("%s\t", jobs[j].name);
		}
		printf("\n��ѡ��ְҵ��1-5֮�����������");
		scanf_s( "%d", &jobChoice);
		heros[i].job = jobs[jobChoice - 1];
		printf("%s��ǰ��ְҵ��<%s>\n", heros[i].name, heros[i].job.name);

	}
}

void ShowHero()
{

}