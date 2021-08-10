#include <stdio.h>
#include "Hero.h"
#include "Account.h"
extern Hero heros[100];

int main()
{
	Account account = { "建设银行", "jack", 30000, 2800 };
	double result = GetRepayment(&account);
	printf("%.2f\n", result);
	printf("%s", account.bankName);
	return 0;
}


