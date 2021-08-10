#include "Account.h"
#include <stdio.h>

//double GetRepayment(Account account)
//{
//	account.bankName = "招商银行";
//	return account.limit - account.billAmount;
//}


double GetRepayment(const Account* account)
{
	//传递指针比较危险 const后无法修改
	//account->bankName = "招商银行";
	return account->limit - account->billAmount;
}