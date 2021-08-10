#ifndef HOTAL_H_INCLUDED
#define HOTAL_H_INCLUDED


#define HOTAL1 872.00 //各家的酒店的默认房费
#define HOTAL2 1838.00
#define HOTAL3 789.00
#define HOTAL4 1658.00

#define DISCOUNT 0.95 //折扣率
//菜单函数：显示菜单选项，接收并返回用户的输入
int menu(void);
//返回用户预定天数
int getNights(void);
//根据入住的天数显示最终的金额
double showPrice(int nights);

#endif
