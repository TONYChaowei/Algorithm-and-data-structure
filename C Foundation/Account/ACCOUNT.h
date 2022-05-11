#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED
#include <stdio.h>
#include<stdlib.h>
typedef struct Account
{
    char * bankname;  //银行名称
    char * account;          //银行账户
    double limted;           //账户额度
    double billAmount;     //当月账单
} ACC;
//得到某个账户当月应还款数
//传递结构变量时，是复制整个结构变量的值到函数之中——效率低
//double Getrepayment( ACC acc);
double Getrepayment( const ACC *acc);

#endif // ACCOUNT_H_INCLUDED
