#ifndef HOTAL_H_INCLUDED
#define HOTAL_H_INCLUDED


#define HOTAL1 872.00 //���ҵľƵ��Ĭ�Ϸ���
#define HOTAL2 1838.00
#define HOTAL3 789.00
#define HOTAL4 1658.00

#define DISCOUNT 0.95 //�ۿ���
//�˵���������ʾ�˵�ѡ����ղ������û�������
int menu(void);
//�����û�Ԥ������
int getNights(void);
//������ס��������ʾ���յĽ��
double showPrice(int nights);

#endif
