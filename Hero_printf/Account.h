#pragma once
#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED
#include <stdio.h>

typedef struct _account
{
	char* bankName;
	char* userName;
	double limit;
	double billAmount;//当月账单金额
}Account;

//得到某个账户当月应还款数
//传递结构变量时，是复制整个结构变量的值到函数中--效率低
//double GetRepayment(Account account);

//参数传递的是结构指针
//参数中增加const后，会让指针更加安全
double GetRepayment(const Account *account);
#endif // !ACCOUNT_H_INCLUDED
