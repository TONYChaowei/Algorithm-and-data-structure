#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED
#include <stdio.h>
#include<stdlib.h>
typedef struct Account
{
    char * bankname;  //��������
    char * account;          //�����˻�
    double limted;           //�˻����
    double billAmount;     //�����˵�
} ACC;
//�õ�ĳ���˻�����Ӧ������
//���ݽṹ����ʱ���Ǹ��������ṹ������ֵ������֮�С���Ч�ʵ�
//double Getrepayment( ACC acc);
double Getrepayment( const ACC *acc);

#endif // ACCOUNT_H_INCLUDED
